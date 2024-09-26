#include "MediaHome.h"
#include <QQuickWidget>
#include <QMessageBox>
#include <QStyleFactory>

MediaHome::MediaHome(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.headTreeWidget->setHeaderLabel("功能导航");
	ui.headTreeWidget->setStyle(QStyleFactory::create("windows"));
	QTreeWidgetItem* itemPicture = new QTreeWidgetItem(ui.headTreeWidget, QStringList("图片"));
	QTreeWidgetItem* itemVideo = new QTreeWidgetItem(ui.headTreeWidget, QStringList("视频"));
	QTreeWidgetItem* itemMusic = new QTreeWidgetItem(ui.headTreeWidget, QStringList("音乐"));
	QTreeWidgetItem* itemSheetMusic = new QTreeWidgetItem(ui.headTreeWidget, QStringList("乐谱"));
	QTreeWidgetItem* itemKnowledge = new QTreeWidgetItem(ui.headTreeWidget, QStringList("乐理大全"));

	qmlRegisterType<MediaHome>("test.conrtrol", 1, 0, "MediaHome");
	QQuickWidget* quickWidget = new QQuickWidget();
	if (quickWidget)
	{
		quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
		quickWidget->setSource(QUrl("qrc:/HeroTool/Qml/MediaHome.qml"));
		QHBoxLayout* hLayout = new QHBoxLayout();
		hLayout->addWidget(quickWidget);
		ui.displayWidget->setLayout(hLayout);
	}
}

MediaHome::~MediaHome()
{}

void MediaHome::AddData(int a, int b)
{
	QMessageBox::information(nullptr, QString::fromLocal8Bit("ÌáÊ¾"),
		QString::fromLocal8Bit("ÊÕµ½qmlµã»÷ÐÅºÅ"), QMessageBox::Ok);
}
QString MediaHome::UpdateBackground()
{
	return QString("http://image.nbd.com.cn/uploads/articles/images/673466/500352700_banner.jpg");
}

