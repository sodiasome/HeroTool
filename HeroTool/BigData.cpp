#include "BigData.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>

#include <QChartView>
#include <QLineSeries>
#include <QValueAxis>
#include <QtMath>
#include <QChart>


#include <QQmlContext>
#include <QList>
#include "DataStruct.h"
#include "ListViewModel.h"
#include "BaseDelegate.h"
#include "TreeViewModel.h"
#include "TreeItem.h"

#include <QTreeView>
#include <QHeaderView>
#include "FileManage.h"

BigData::BigData(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
    _init();
    _connect();
}

BigData::~BigData()
{}

void BigData::_init()
{
    //csv
    FileManage fileManage;
    ui.edCsvData->setText("../HeroTool/sources/bigdata/test.csv");
    QString sPath = ui.edCsvData->text();
    vector<vector<string>> csvData;
    fileManage.readCsv(sPath.toStdString().c_str(), csvData);

    //========================== qml =============================
    ui.quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    ui.quickWidget->rootContext()->setContextProperty("TestData", "初始化成功");
    ui.quickWidget->setSource(QUrl::fromLocalFile(":/HeroTool/Qml/bigData.qml"));


    //========================== list view =============================
    model = new ListViewModel(this);

    for (auto v : csvData)
    {
        CustomData data;
        data.m_isSelect = false;
        data.m_txt = v[2][0];
        model->insertData(data);
    }

    BaseDelegate* delegate = new BaseDelegate(ui.listView);
    //connect(m_delegate, &CustomDelegate::addClicked, this, &QtWidgetsApplication1::onAddSelectItem);

    ui.listView->setModel(model);
    ui.listView->setItemDelegate(delegate);
    ui.listView->setMouseTracking(true);

    //============================ tree view  =============================
    ui.treeView->setSelectionBehavior(QTreeView::SelectRows);			//一次选中整行
    ui.treeView->setSelectionMode(QTreeView::SingleSelection);        //单选，配合上面的整行就是一次选单行
    ui.treeView->setFocusPolicy(Qt::NoFocus);                         //去掉鼠标移到单元格上时的虚线框
    ui.treeView->header()->setStretchLastSection(true);               //最后一列自适应宽度

    // 初始化数据
    {
        QVector<Province*> proList;
        int personCount = 5;
        Province* pro = new Province();
        pro->name = tr("基金");
        for (int j = 0; j < personCount; j++)
        {
            Person* per = new Person();
            per->name = QString("偏股基金%1").arg(j);
            per->sex = "2023年";
            pro->people.append(per);
        }
        proList.append(pro);

        Province* pro2 = new Province();
        pro2->name = tr("汽车");
        for (int j = 0; j < personCount; j++)
        {
            Person* per = new Person();
            per->name = QString("新能源%1").arg(j);
            per->sex = "2024年";
            pro2->people.append(per);
        }
        proList.append(pro2);


        QStringList headers;
        headers << QString("名称")
            << QString("年份");

        TreeModel* treeModel = new TreeModel(headers, ui.treeView);
        TreeItem* root = treeModel->root();
        foreach(auto pro, proList)
        {
            TreeItem* province = new TreeItem(root);
            province->setPtr(pro); // 保存数据指针
            province->setType(TreeItem::PROVINCE); // 设置节点类型为PROVINCE
            root->addChild(province);

            foreach(auto per, pro->people)
            {
                TreeItem* person = new TreeItem(province);
                person->setPtr(per);    // 保存数据指针
                person->setType(TreeItem::PERSON);  // 设置节点类型为PERSON
                province->addChild(person);
            }
        }

        ui.treeView->setModel(treeModel);
        connect(ui.treeView, &QTreeView::clicked, this, [&](const QModelIndex& index) {
            qDebug() << "Clicked on row " << index.row() << " column " << index.column() << " with text " << index.data(Qt::DisplayRole).toString();

            });
    }
    
}

void BigData::_connect()
{
    connect(ui.btnSearch, &QPushButton::clicked, this, &BigData::onBtnSearchClicked);
}


void BigData::onBtnSearchClicked()
{
    return;
    ui.quickWidget->rootContext()->setContextProperty("timeData", this->getCurrentDateTime());

    QObject* obj = ui.quickWidget->rootContext()->findChild<QObject*>("testObj");
    QList<int> list;
    list.push_back(0.1);
    list.push_back(0.5);
    list.push_back(0.9);
    QVariant listValue;
    listValue.setValue(list);
    bool bRet = true;
    QVariant bReturn;
    bReturn.setValue(bRet);
    //QMetaObject::invokeMethod(obj, "setTitle", Qt::DirectConnection,Q_RETURN_ARG(QVariant, bReturn),Q_ARG(QVariant, "数据传输"));
    qDebug() << "value: " << bReturn.toBool();



    QString path = ":/HeroTool/sources/bigdata/strong.png";//QFileDialog::getOpenFileName(this, tr("选择图像"), "E:\\image\\", tr("Images (*.png *.bmp *.jpg *.tif *.GIF )"));
    QImage img;
    if (path.isEmpty())
        return;
    else
    {
        if (!(img.load(path))) //加载图像
        {
            QMessageBox::information(this, tr("打开图像失败"), tr("打开图像失败!"));
            return;
        }
        QPixmap pixmap;
        pixmap = QPixmap::fromImage(img);
        ui.lbDisplay->setPixmap(pixmap.scaled(ui.lbDisplay->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));  // 保持比例 & 平滑缩放(无锯齿)
    }
}
