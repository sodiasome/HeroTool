#include "HeroTool.h"
#include <QToolBar>
#include <QMouseEvent>
#include <QTextEdit>
#include <QStatusBar>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QTextCharFormat>
#include <QMessageBox>
#include <QSettings>


HeroTool::HeroTool(QWidget* parent)
    : QMainWindow(parent)
    , m_mode(ModeNote)
    , m_iniConfig(new QSettings("config.ini", QSettings::IniFormat))
{
    ui.setupUi(this);
    _initUi();
    _connectSlot();
}

HeroTool::~HeroTool()
{}

QString HeroTool::getCurrTime()
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QLocale locale = QLocale::Chinese;
    QString sDateTime = QString("%1年%2月%3日 %4:%5:%6 %7 ")
        .arg(date.year(), 4, 10, QLatin1Char('0'))
        .arg(date.month(), 2, 10, QLatin1Char('0'))
        .arg(date.day(), 2, 10, QLatin1Char('0'))
        .arg(time.hour(), 2, 10, QLatin1Char('0'))
        .arg(time.minute(), 2, 10, QLatin1Char('0'))
        .arg(time.second(), 2, 10, QLatin1Char('0'))
        .arg(locale.toString(QDateTime::currentDateTime(), QString("dddd")));
    return sDateTime;
}

void HeroTool::_initUi()
{
    this->setGeometry(400, 100, 1200, 800);
    m_sDefaultDir = m_iniConfig->value("DefaultDir").toString();
    if (m_sDefaultDir.isEmpty())
        m_sDefaultDir = "D://";
    QApplication::setWindowIcon(QIcon(":/HeroTool/sources/Frame/logo.ico"));
    //计划场景
    m_planWidget = new Plan();
    //大数据场景
    mBigDataWidget = new BigData();
    //多媒体场景
    m_mediaHomeWidget = new MediaHome();

    //顶部栏
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowTitleHint);
    QToolBar* topBar = new QToolBar(this);
    mTopBarWidget = new TopBarWidget(this);
    mTopBarWidget->installEventFilter(this);
    topBar->setWindowTitle(windowTitle());
    topBar->addWidget(mTopBarWidget);
    topBar->setMovable(false);
    this->addToolBar(Qt::TopToolBarArea, topBar);
    //工具栏
    m_toolBar = new QToolBar(this);
    m_toolBar->setMovable(false);
    m_toolNoteWidget = new NoteToolWidget();
    m_toolDrawWidget = new DrawToolWidget();
    m_toolMediaWidget = new MediaToolWidget();
    m_toolStackWidget = new TabToolStackWidget();
    m_toolBigDataWidget = new BigDataToolWidget();
    m_toolPlanWidget = new PlanToolWidget();
    m_toolStackWidget->addToolWidget(m_toolNoteWidget);
    m_toolStackWidget->addToolWidget(m_toolDrawWidget);
    m_toolStackWidget->addToolWidget(m_toolBigDataWidget);
    m_toolStackWidget->addToolWidget(m_toolPlanWidget);
    m_toolStackWidget->addToolWidget(m_toolMediaWidget);
    m_toolBar->addWidget(m_toolStackWidget);
    addToolBarBreak(Qt::TopToolBarArea);
    addToolBar(Qt::TopToolBarArea, m_toolBar);
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    mTopBarWidget->m_toolItem->setChecked(bShowTool);
    
    //状态栏数据
    QTimer* timeStatus = new QTimer(this);
    connect(timeStatus, &QTimer::timeout, this, &HeroTool::onTimerStatus);
    timeStatus->start(1000);
    m_statusWidget = new QWidget();
    m_statusWidget->setFixedHeight(20);
    m_lbCurrTime = new QLabel("[编辑状态]默认路径：", this);
    m_lbCurrTime->setMinimumWidth(this->width());
    QHBoxLayout* hLayout = new QHBoxLayout(m_statusWidget);
    hLayout->setMargin(0);
    hLayout->addWidget(m_lbCurrTime);
    m_statusWidget->setLayout(hLayout);
    //状态栏
    QStatusBar* statusBar = new QStatusBar(this);
    statusBar->setSizeGripEnabled(false);
    statusBar->addWidget(m_statusWidget);
    this->setStatusBar(statusBar);

    centralWidget()->setParent(nullptr);

    //绘图、笔记tab
    ui.tabWidget->setUsesScrollButtons(true);
    ui.tabWidget->setTabsClosable(true);//可以关闭tab
    ui.tabWidget->setMovable(true);//可以移动
    ui.tabWidget->clear();
    QString sTabBkColor = m_iniConfig->value("TabBkColor").toString();
    if (sTabBkColor.isEmpty())
        sTabBkColor = "#FFFFFF";
    ui.tabWidget->setStyleSheet("background-color:" + sTabBkColor + "");
    //ui.tabWidget->setWindowOpacity(0.9);
}

void HeroTool::_connectSlot()
{
    //文件
    connect(mTopBarWidget, &TopBarWidget::newFile, this, &HeroTool::onNewFile);
    connect(mTopBarWidget, &TopBarWidget::openFile, this, &HeroTool::onOpenFile);
    connect(mTopBarWidget, &TopBarWidget::saveFile, this, &HeroTool::onSaveFile);
    connect(mTopBarWidget, &TopBarWidget::antherSaveFile, this, &HeroTool::onSaveAnotherFile);
    connect(mTopBarWidget, &TopBarWidget::deleteFile, this, &HeroTool::onDeleteFile);
    connect(mTopBarWidget, &TopBarWidget::defaultDir, this, [this]() {
        QString sPath = QFileDialog::getExistingDirectory();
        if (!sPath.isEmpty())
        {
            m_sDefaultDir = sPath;
            m_iniConfig->setValue("DefaultDir", m_sDefaultDir);
        }});
    connect(mTopBarWidget, &TopBarWidget::setNoteDownDir, this, [this]() {
        QString sPath = QFileDialog::getExistingDirectory();
        if (!sPath.isEmpty())
            m_iniConfig->setValue("NoteDownDir", sPath);
        });
    
    //编辑
    connect(mTopBarWidget, &TopBarWidget::setThemeColor, this, [this](QString sColor) {
        ui.tabWidget->setStyleSheet("background-color:" + sColor + "");
        m_iniConfig->setValue("TabBkColor", sColor);
        });
    //工具
    connect(mTopBarWidget, &TopBarWidget::showToolBar,this, [this](int bShow) {
        m_toolBar->setVisible(bShow);});
    

    //最大化最小化关闭
    connect(mTopBarWidget, &TopBarWidget::btnSmallClicked, this, &HeroTool::onBtnSmallClicked);
    connect(mTopBarWidget, &TopBarWidget::btnMaxClicked, this, &HeroTool::onBtnMaxClicked);
    connect(mTopBarWidget, &TopBarWidget::btnCloseClicked, this, &HeroTool::onBtnCloseClicked);
    //工具栏按钮
    connect(mTopBarWidget, &TopBarWidget::btnNoteClicked, this, &HeroTool::onBtnNoteClicked);
    connect(mTopBarWidget, &TopBarWidget::btnDrawClicked, this, &HeroTool::onBtnDrawClicked);
    connect(mTopBarWidget, &TopBarWidget::btnPlanClicked, this, &HeroTool::onBtnPlanClicked);
    connect(mTopBarWidget, &TopBarWidget::btnBigDataClicked, this, &HeroTool::onBtnBigDataClicked);
    connect(mTopBarWidget, &TopBarWidget::btnMediaHomeClicked, this, &HeroTool::onBtnMediaHomeClicked);

    //tab
    connect(ui.tabWidget, &QTabWidget::tabCloseRequested, this, &HeroTool::onTabCloseRequested);
    connect(ui.tabWidget, &QTabWidget::tabBarClicked, this, [this](int nIndex) {
        QString sFile = ui.tabWidget->tabText(nIndex);
        TabFile* tabFile = m_mapTabInfo[sFile];
        if (tabFile != nullptr && tabFile->info != nullptr)
            mTopBarWidget->updateFile(tabFile->info->filePath(), "#009600");
        else
            mTopBarWidget->updateFile(ui.tabWidget->tabText(nIndex), "#009600");
        });
}

void HeroTool::_connectNotepad(NotePad* notepad)
{
    if (nullptr == notepad)
        return;

    m_notepad = notepad;

    //笔记
    connect(m_toolNoteWidget, &NoteToolWidget::btnModeCLicked, this, [this](int nClick) {
        m_notepad->setMode(nClick); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnBlodClicked, this, [this](bool bCheck) {
        bCheck ? m_notepad->m_textFmt.setFontWeight(QFont::Bold)
            : m_notepad->m_textFmt.setFontWeight(QFont::Normal);
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnUnderLineClicked, this, [this](bool bCheck) {
        m_notepad->m_textFmt.setFontUnderline(bCheck);
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnItalicClicked, this, [this](bool bCheck) {
        m_notepad->m_textFmt.setFontItalic(bCheck);
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnColorChanged, this, [this](QString sColor) {
        m_notepad->m_textFmt.setForeground(QBrush(QColor(sColor)));
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnBkColorChanged, this, [this](QString sColor) {
        m_notepad->m_textFmt.setBackground(QBrush(QColor(sColor)));
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnTextSizeChanged, this, [this](int nSize) {
        m_notepad->m_textFmt.setFontPointSize(nSize);
        m_notepad->updateTextFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnAlignmentClicked, this, [this](Qt::AlignmentFlag flag) {
        m_notepad->setAlignment(flag); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnInsertPicture, this, [this]() {
        m_notepad->insertPicture(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnFont, this, [this]() {
        m_notepad->setFontFormat(); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnInsertCurrTime, this, [this]() {
        m_notepad->insertCurrTime(); });
    //connect(m_toolNoteWidget, &NoteToolWidget::btnSetName, this, [this](QString sFileName) { });
    connect(m_toolNoteWidget, &NoteToolWidget::btnFormatClicked, this, [this]() {
        m_notepad->setFofmat(true); });
    connect(m_toolNoteWidget, &NoteToolWidget::btnNoteDown, this, [this]() {
        m_notepad->setNoteDown();
        });
    //顶部栏
    connect(m_notepad, &NotePad::editting, this, [this]() {
        int nCurrIndex = ui.tabWidget->currentIndex();
        QString sFile = ui.tabWidget->tabText(nCurrIndex);
        TabFile* tabFile = m_mapTabInfo[sFile];
        if (tabFile == nullptr || tabFile->info == nullptr)
            return;
        m_mapTabInfo[sFile]->bEditting = true;
        mTopBarWidget->updateFile(tabFile->info->filePath(), "#FF0000");
        });
}

void HeroTool::_connectDrawSence(DrawView* drawSence)
{
    m_draw= drawSence;
    //2D绘图
    connect(m_toolDrawWidget, &DrawToolWidget::modeClicked, this, [=](int nId) {
        m_draw->secen->setMode(nId); });
    connect(m_toolDrawWidget, &DrawToolWidget::btnColorChanged, this, [this](QString sColor) {
        QPen pen;
        pen.setColor(sColor);
        m_draw->secen->setPen(pen); });
    connect(m_toolDrawWidget, &DrawToolWidget::fillColorChanged, this, [this](QString sFillColor) {
        m_draw->secen->setBrush(QColor(sFillColor)); });
    connect(m_toolDrawWidget, &DrawToolWidget::penWidthChanged, this, [this](int nPenWidth) {
        m_draw->secen->setPenWidth(nPenWidth); });
    connect(m_toolDrawWidget, &DrawToolWidget::btnBkColorChanged, this, [this](QString bkColorChanged) {
        m_draw->secen->setBackgroundBrush(QColor(bkColorChanged)); });
    connect(m_toolDrawWidget, &DrawToolWidget::btnDelSelItem, this, [this]() {m_draw->secen->delSelectIetm(); });
}

QWidget* HeroTool::_tabWidget(int nIndex)
{
    QList<QWidget*> list = ui.tabWidget->findChildren<QWidget*>();
    QWidget* widget = NULL;
    for (auto* w : list)
    {
        if (w->property("id") == nIndex)
        {
            widget = w;
            break;
        }
    }
    return widget;
}

void HeroTool::onNewFile()
{
    int nCurrIndex = m_mapTabInfo.size();
    QString fileName = QString("新建文件%1").arg(nCurrIndex);
    TabFile* newFile = new TabFile();

    switch (m_mode)
    {
    case ModeDraw:
    {
        DrawView* draw = new DrawView();
        _connectDrawSence(draw);
        newFile->draw = draw;

        if (!m_mapTabInfo.contains(fileName) && !fileName.isEmpty())
        {
            newFile->draw->setProperty("index", nCurrIndex);
            m_mapTabInfo[fileName] = newFile;
            //添加到当前页面显示
            
            ui.tabWidget->addTab(draw, fileName);
            ui.tabWidget->setCurrentWidget(draw);
        }
    }       
        break;
    case ModeNote:
    {
        NotePad* notepadWidge = new NotePad();
        _connectNotepad(notepadWidge);
        newFile->pNotePad = notepadWidge;

        if (!m_mapTabInfo.contains(fileName) && !fileName.isEmpty())
        {
            newFile->pNotePad->setProperty("index", nCurrIndex);
            m_mapTabInfo[fileName] = newFile;
            //添加到当前页面显示
            ui.tabWidget->addTab(notepadWidge, fileName);
            ui.tabWidget->setCurrentWidget(notepadWidge);
        }
    }
    break;
    default:
        return;
    } 
    mTopBarWidget->updateFile(fileName, "#FF0000");
}

void HeroTool::onOpenFile()
{
    TabFile* newFile = new TabFile();
    if (nullptr == newFile)
        return;
    int nCurrIndex = m_mapTabInfo.size();

    switch (m_mode)
    {
    case ModeDraw:
    {
        DrawView* draw = new DrawView();
        QString sFile = QFileDialog::getOpenFileName(this, tr("打开文件"), m_sDefaultDir, draw->secen->getPicType());
        if (sFile.isEmpty())
        {
            delete draw;
            draw = nullptr;
            return;
        }    
        _connectDrawSence(draw);
        draw->openFile(sFile);
        newFile->draw = draw;
        newFile->draw->setProperty("index", nCurrIndex);
        newFile->info = new QFileInfo(sFile);
        if (!m_mapTabInfo.contains(newFile->info->fileName()) && !newFile->info->fileName().isEmpty())
        {
            m_mapTabInfo[newFile->info->fileName()] = newFile;
            //添加到当前页面显示 
            ui.tabWidget->addTab(draw, newFile->info->fileName());
            ui.tabWidget->setCurrentWidget(draw);
        }
    }
    break;
    case ModeNote:
    {
        NotePad* notepadWidge = new NotePad();
        QString sFile = QFileDialog::getOpenFileName(this, tr("打开文件"), m_sDefaultDir, notepadWidge->getFileType());
        if (sFile.isEmpty())
        {
            delete notepadWidge;
            notepadWidge = nullptr;
            return;
        }
        _connectNotepad(notepadWidge);
        notepadWidge->openFile(sFile);
        newFile->pNotePad = notepadWidge;
        newFile->pNotePad->setProperty("index", nCurrIndex);
        newFile->info = new QFileInfo(sFile);
        if (!m_mapTabInfo.contains(newFile->info->fileName()) && !newFile->info->fileName().isEmpty())
        {
            m_mapTabInfo[newFile->info->fileName()] = newFile;
            //添加到当前页面显示 
            ui.tabWidget->addTab(notepadWidge, newFile->info->fileName());
            ui.tabWidget->setCurrentWidget(notepadWidge);
        }
    }
    break;
    default:
        return;
    }
    mTopBarWidget->updateFile(newFile->info->filePath(), "#FF0000");
}

void HeroTool::onSaveFile()
{
    int nCurrIndex = ui.tabWidget->currentIndex();
    QString sFile = ui.tabWidget->tabText(nCurrIndex);
    TabFile* tabFile = m_mapTabInfo[sFile];
    if (tabFile == nullptr)
        return;

    switch (m_mode)
    {
    case ModeDraw:
    {
        if (tabFile->info == nullptr)
        {
            QString sFile = QFileDialog::getSaveFileName(this, tr("保存文件"), m_sDefaultDir, tr("PNG(*.png)"));
            if (sFile.isEmpty())
                return;
            tabFile->info = new QFileInfo(sFile);
        }
        QString sPath = tabFile->info->filePath();
        tabFile->draw->saveFile(sPath);
    }
        break;
    case ModeNote:
    {
        if (tabFile->info == nullptr)
        {
            QString sFile = QFileDialog::getSaveFileName(this, tr("保存文件"),m_sDefaultDir, tabFile->pNotePad->getFileType());
            if (sFile.isEmpty())
                return;
            tabFile->info = new QFileInfo(sFile);
        }
        QString sPath = tabFile->info->filePath();
        tabFile->pNotePad->saveFile(sPath);
    }
    break;
    default:
        return;
    }
    m_mapTabInfo[sFile]->bEditting = false;
    mTopBarWidget->updateFile(tabFile->info->filePath(), "#009600");
    ui.tabWidget->setTabText(nCurrIndex, tabFile->info->fileName());
}

void HeroTool::onSaveAnotherFile()
{
    int nCurrIndex = ui.tabWidget->currentIndex();
    QString sFile = ui.tabWidget->tabText(nCurrIndex);
    TabFile* tabFile = m_mapTabInfo[sFile];
    if (tabFile == nullptr)
        return;

    switch (m_mode)
    {
    case ModeDraw:
    {
        QString sFile = QFileDialog::getSaveFileName(this, tr("另存文件"), tabFile->info != nullptr ? tabFile->info->filePath() : m_sDefaultDir,
            tabFile->pNotePad->getFileType());
        if (sFile.isEmpty())
            return;
        tabFile->info = new QFileInfo(sFile);
        QString sPath = tabFile->info->filePath();
        tabFile->draw->saveFile(sPath);
    }
        break;
    case ModeNote:
    {
        QString sFile = QFileDialog::getSaveFileName(this, tr("另存文件"), tabFile->info != nullptr ? tabFile->info->filePath() : m_sDefaultDir,
            tabFile->pNotePad->getFileType());
        if (sFile.isEmpty())
            return;

        tabFile->info = new QFileInfo(sFile);
        QString sPath = tabFile->info->filePath();
        tabFile->pNotePad->saveFile(sPath);
    }
    break;
    default:
        return;
    }
    m_mapTabInfo[sFile]->bEditting = false;
    ui.tabWidget->setTabText(nCurrIndex, tabFile->info->fileName());
    mTopBarWidget->updateFile(tabFile->info->filePath(), "#009600");
}

void HeroTool::onDeleteFile()
{
    int nCurrIndex = ui.tabWidget->currentIndex();
    QString sFile = ui.tabWidget->tabText(nCurrIndex);
    TabFile* tabFile = m_mapTabInfo[sFile];
    if (tabFile == nullptr || tabFile->info == nullptr)
        return;

    QMessageBox::StandardButton button = QMessageBox::information(this, "提示", "删除文件:" + tabFile->info->filePath() + "？",
        QMessageBox::Yes | QMessageBox::No, QMessageBox::NoButton);
    if (button == QMessageBox::StandardButton::Yes)
    {
        QFile file(tabFile->info->filePath());
        if (file.exists())
        {
            file.remove();
            switch (m_mode)
            {
            case ModeDraw:
                tabFile->draw->secen->clear();
                break;
            case ModeNote:
                tabFile->pNotePad->closeFile();
                break;
            default:
                break;
            }
        }
        file.close();

        //释放资源
        QWidget* pItemWidget = ui.tabWidget->widget(nCurrIndex);
        if (0 != pItemWidget)
        {
            delete pItemWidget;
            pItemWidget = NULL;
            QString sFile = ui.tabWidget->tabText(nCurrIndex);
            m_mapTabInfo.remove(sFile);
        }
    }
    mTopBarWidget->updateFile("智能工具集合【sodiasome】", "#009600");
}

void HeroTool::onBtnSmallClicked()
{
    showMinimized();
}

void HeroTool::onBtnMaxClicked()
{
    this->isMaximized() ? this->showNormal() : this->showMaximized();
}

void HeroTool::onBtnCloseClicked()
{
    close();
}

void HeroTool::onBtnNoteClicked()
{
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    m_mode = ModeNote;
    m_toolStackWidget->setCurrPageIndex(0);
    if (nullptr != centralWidget())centralWidget()->setParent(0);
    setCentralWidget(ui.tabWidget);
}

void HeroTool::onBtnDrawClicked()
{
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    m_mode = ModeDraw;
    m_toolStackWidget->setCurrPageIndex(1);
    if (nullptr != centralWidget())centralWidget()->setParent(0);
    setCentralWidget(ui.tabWidget);
}

void HeroTool::onBtnPlanClicked()
{
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    m_mode = ModePlan;
    m_toolStackWidget->setCurrPageIndex(2);
    if (nullptr != centralWidget())centralWidget()->setParent(0);
    setCentralWidget(m_planWidget);
}

void HeroTool::onBtnBigDataClicked()
{
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    m_mode = ModeBigData;
    m_toolStackWidget->setCurrPageIndex(3);
    if (nullptr != centralWidget())centralWidget()->setParent(0);
    setCentralWidget(mBigDataWidget);
}

void HeroTool::onBtnMediaHomeClicked()
{
    bool bShowTool = m_iniConfig->value("ShowToolBar").toBool();
    m_toolBar->setVisible(bShowTool);
    m_mode = ModeMedia;
    m_toolStackWidget->setCurrPageIndex(4);
    if (nullptr != centralWidget())centralWidget()->setParent(0);
    setCentralWidget(m_mediaHomeWidget);
}

void HeroTool::onTimerStatus()
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QLocale locale = QLocale::Chinese;
    QString sDateTime = QString("%1年%2月%3日 %4:%5:%6 %7")
        .arg(date.year(), 4, 10, QLatin1Char('0'))
        .arg(date.month(), 2, 10, QLatin1Char('0'))
        .arg(date.day(), 2, 10, QLatin1Char('0'))
        .arg(time.hour(), 2, 10, QLatin1Char('0'))
        .arg(time.minute(), 2, 10, QLatin1Char('0'))
        .arg(time.second(), 2, 10, QLatin1Char('0'))
        .arg(locale.toString(QDateTime::currentDateTime(), QString("dddd")));
    m_lbCurrTime->setText("默认工作路径：" + m_sDefaultDir + "\t\t\t\t" + sDateTime);
}

void HeroTool::onTabCloseRequested(int index)
{
    //是否需要保存文件
    QString sFile = ui.tabWidget->tabText(index);
    TabFile* tabFile = m_mapTabInfo[sFile];
    if (tabFile != nullptr && tabFile->info != nullptr && m_mapTabInfo[sFile]->bEditting)
    {
        QMessageBox::StandardButton button = QMessageBox::information(this, "提示", "是否需要保存文件:" + tabFile->info->fileName() + "？",
            QMessageBox::Yes | QMessageBox::No, QMessageBox::NoButton);
        if (button == QMessageBox::StandardButton::Yes)
        {
            onSaveFile();
        }
    }
    
    //释放资源
    QWidget* pItemWidget = ui.tabWidget->widget(index);
    if (0 != pItemWidget)
    {
        delete pItemWidget;
        pItemWidget = NULL;
        m_mapTabInfo.remove(sFile);
    }
    mTopBarWidget->updateFile("智能工具集合【sodiasome】", "#009600");
}

bool HeroTool::eventFilter(QObject* watched, QEvent* event)
{
    if (watched == mTopBarWidget && mTopBarWidget != nullptr)
    {
        static bool bLeftPress = false;
        static QPoint pressPos(0, 0);

        QMouseEvent* pMouse = static_cast<QMouseEvent*>(event);
        switch (pMouse->type())
        {
        case QMouseEvent::MouseButtonPress:
            if (pMouse->button() == Qt::LeftButton)
            {
                pressPos = pMouse->globalPos() - pos();
                bLeftPress = true;
                return true;
            }
            break;
        case QMouseEvent::MouseButtonRelease:
            bLeftPress = false;
            break;
        case QMouseEvent::MouseMove:
            if (bLeftPress && pMouse->buttons() == Qt::LeftButton)
            {
                this->move(pMouse->globalPos() - pressPos);
                return true;
            }
            break;
        }
    }
    return false;
}

void HeroTool::keyPressEvent(QKeyEvent* event)
{
    if ((event->modifiers() & Qt::ControlModifier) != 0 && event->key() == Qt::Key_S)
    {
        onSaveFile();
    }
    else if ((event->modifiers() & Qt::ControlModifier) != 0 && event->key() == Qt::Key_O)
    {
        onOpenFile();
    }
    else if ((event->modifiers() & Qt::ControlModifier) != 0 && event->key() == Qt::Key_N)
    {
        onNewFile();
    }
    QMainWindow::keyPressEvent(event);
}

void HeroTool::mouseReleaseEvent(QMouseEvent* event)
{
    if (BorderNone != m_nBorderPress)
    {
        setCursor(Qt::ArrowCursor);
        m_bMousePress = false;
        m_nBorderPress = BorderNone;
    }
    QMainWindow::mouseReleaseEvent(event);
}
void HeroTool::mousePressEvent(QMouseEvent* event)
{
    m_nBorderPress = _checkMouseBorder(&event->pos());
    if (BorderNone != m_nBorderPress)
    {
        m_bMousePress = true;
        m_rectMousePress = frameGeometry();
    }
    QMainWindow::mousePressEvent(event);
}
void HeroTool::mouseMoveEvent(QMouseEvent* event)
{
    if (m_bMousePress)
    {
        QPoint mousePos = event->pos();

        switch (m_nBorderPress)
        {
        case BorderLeft:
            break;
        case BorderRight:
            setGeometry(m_rectMousePress.x(), m_rectMousePress.y(), mousePos.x(), m_rectMousePress.height());
            setCursor(Qt::SizeHorCursor);
            break;
        case BorderTop:
            break;
        case BorderBottom:
            setGeometry(m_rectMousePress.x(), m_rectMousePress.y(), m_rectMousePress.width(), mousePos.y());
            setCursor(Qt::SizeVerCursor);
            break;
        case BorderTopLeft:
            break;
        case BorderTopRight:
            break;
        case BorderBottomLeft:
            break;
        case BorderBottomRight:
            break;
        case BorderNone:
            setCursor(Qt::ArrowCursor);
            break;
        }
    }

    QMainWindow::mouseMoveEvent(event);
}

void HeroTool::closeEvent(QCloseEvent* event)
{
    m_iniConfig->setValue("HistoryPage", m_mode);

    QMainWindow::closeEvent(event);
}

int HeroTool::_checkMouseBorder(QPoint* point)
{
    if ((point->x() - rect().x() < 5) && (point->y() - rect().y() < 5)) {
        return BorderTopLeft;
    }
    else if ((rect().x() + rect().width() - point->x() < 5) && (point->y() - rect().y() < 5)) {
        return BorderTopRight;
    }
    else if ((rect().x() + rect().width() - point->x() < 5) && (rect().y() + rect().height() - point->y() < 5)) {
        return BorderBottomRight;
    }
    else if ((point->x() - rect().x() < 5) && (rect().y() + rect().height() - point->y() < 5)) {
        return BorderBottomLeft;
    }
    else if (point->y() - rect().y() < 5) {
        return BorderTop;
    }
    else if (rect().x() + rect().width() - point->x() < 5) {
        return BorderRight;
    }
    else if (rect().y() + rect().height() - point->y() < 5) {
        return BorderBottom;
    }
    else if (point->x() - rect().x() < 5) {
        return BorderLeft;
    }
    else {
        return BorderNone;
    }
}
