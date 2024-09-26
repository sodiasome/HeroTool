#include "TopBar.h"
#include <QStyle>
#include <QMessageBox>
#include <QPushButton>
#include <QToolButton>
#include <QMenu>
#include <QButtonGroup>
#include <QFileDialog>
#include <QSettings>
#include <QColorDialog>

TopBarWidget::TopBarWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	_initUi();
	_initStyleSheet();
	_connectSlot();
}

TopBarWidget::~TopBarWidget()
{}
void TopBarWidget::updateFile(QString sFile, QString sColor/* = "#009600"*/)
{
	ui.lbPath->setText(sFile);
	ui.lbPath->setStyleSheet("border-style: outset;color: " + sColor + ";min-width:2em;font-family:楷体; ");
}

void TopBarWidget::showEvent(QShowEvent* event)
{
	QWidget::showEvent(event);
	//打开历史页面
	QSettings iniConfig("config.ini", QSettings::IniFormat);
	int nPage = iniConfig.value("HistoryPage").toInt();
	switch (nPage)
	{
	case ModeDraw:
		onBtnModeClicked(-3);
		emit btnDrawClicked();
		break;
	case ModeNote:
		onBtnModeClicked(-2);
		emit btnNoteClicked();
		break;
	case ModeBigData:
		onBtnModeClicked(-5);
		emit btnBigDataClicked();
		break;
	case ModePlan:
		onBtnModeClicked(-4);
		emit btnPlanClicked();
		break;
	case ModeMedia:emit
		onBtnModeClicked(-6);
		btnMediaHomeClicked();
		break;
	default:
		onBtnModeClicked(-2);
		emit btnNoteClicked();
		break;
	}
}

void TopBarWidget::_initUi()
{
	this->setWindowFlags(Qt::FramelessWindowHint);
	this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
	this->setMouseTracking(true);
	this->setObjectName("TopBarWidget");
	this->layout()->setMargin(3);
	ui.btnSmall->setIcon(style()->standardPixmap(QStyle::SP_TitleBarMinButton));
	ui.btnMax->setIcon(style()->standardPixmap(QStyle::SP_TitleBarMaxButton));
	ui.btnClose->setIcon(style()->standardPixmap(QStyle::SP_TitleBarCloseButton));

	QString sMenuStyle ="QPushButton{"
		"border-radius:0;"
		"width:80px;"
		"font-size: 16px;"
		"text-align : center; }"
		"QPushButton::menu-indicator{ image:none; }"
		"QPushButton:hover{background-color: #DCE2F1;color:#8B7355;}";
	ui.btnFile->setStyleSheet(sMenuStyle);
	ui.btnView->setStyleSheet(sMenuStyle);
	ui.btnEdit->setStyleSheet(sMenuStyle);
	ui.btnTool->setStyleSheet(sMenuStyle);

	ui.lbIcon->setStyleSheet("background-image:url(:/HeroTool/sources/Frame/logo.png);background-position:center;background-repeat:no-repeat;");
	
	//文件
	QMenu* fileMenu = new QMenu(this);
	QAction* newFileItem = new QAction(tr("新建 ctrl+n"),fileMenu);
	QAction* openFileItem = new QAction(tr("打开 ctrl+o"),fileMenu);
	QAction* saveFileItem = new QAction(tr("保存 ctrl+s"),fileMenu);
	QAction* anotherSaveFile = new QAction(tr("另存为"),fileMenu);
	QAction* deleteFileItem = new QAction(tr("删除"),fileMenu);
	QAction* splitLine = new QAction(fileMenu);
	splitLine->setSeparator(true);
	QAction* defaultDirItem = new QAction(tr("常用目录设置"), fileMenu);
	QAction* noteDownDirItem = new QAction(tr("设置笔记路径"), fileMenu);
	fileMenu->addAction(newFileItem);
	fileMenu->addAction(openFileItem);
	fileMenu->addAction(saveFileItem);
	fileMenu->addAction(anotherSaveFile);
	fileMenu->addAction(deleteFileItem);
	fileMenu->addAction(splitLine);
	fileMenu->addAction(defaultDirItem);
	fileMenu->addAction(noteDownDirItem);
	ui.btnFile->setMenu(fileMenu);
	connect(newFileItem, &QAction::triggered, this, &TopBarWidget::newFile);
	connect(openFileItem, &QAction::triggered, this, &TopBarWidget::openFile);
	connect(saveFileItem, &QAction::triggered, this, &TopBarWidget::saveFile);
	connect(anotherSaveFile, &QAction::triggered, this, &TopBarWidget::antherSaveFile);
	connect(deleteFileItem, &QAction::triggered, this, &TopBarWidget::deleteFile);
	connect(defaultDirItem, &QAction::triggered, this, &TopBarWidget::defaultDir);
	connect(noteDownDirItem, &QAction::triggered, this, &TopBarWidget::setNoteDownDir);
	//编辑
	QMenu* editMenu = new QMenu(this);
	QAction* backColorItem = new QAction(editMenu);
	backColorItem->setText(tr("设置主题颜色"));
	QMenu* childMen = new QMenu(this);
	QAction* color1 = new QAction(tr("豆沙绿"),childMen);
	connect(color1, &QAction::triggered, this, [this]() {emit setThemeColor("#CCE8CF"); });
	QAction* color2 = new QAction(tr("银河白"),childMen);
	connect(color2, &QAction::triggered, this, [this]() {emit setThemeColor("#FFFFFF"); });
	QAction* color3 = new QAction(tr("杏仁黄"),childMen);
	connect(color3, &QAction::triggered, this, [this]() {emit setThemeColor("#FAF9DE"); });
	QAction* color4 = new QAction(tr("秋叶褐"),childMen);
	connect(color4, &QAction::triggered, this, [this]() {emit setThemeColor("#FFF2E2"); });
	QAction* color5 = new QAction(tr("胭脂红 "),childMen);
	connect(color5, &QAction::triggered, this, [this]() {emit setThemeColor("#FDE6E0"); });
	QAction* color6 = new QAction(tr("青草绿 "), childMen);
	connect(color6, &QAction::triggered, this, [this]() {emit setThemeColor("#E3EDCD"); });
	QAction* color7 = new QAction(tr("海天蓝 "), childMen);
	connect(color7, &QAction::triggered, this, [this]() {emit setThemeColor("#DCE2F1"); });
	QAction* color8 = new QAction(tr("葛巾紫 "), childMen);
	connect(color8, &QAction::triggered, this, [this]() {emit setThemeColor("#E9EBFE"); });
	QAction* color9 = new QAction(tr("极光灰 "), childMen);
	connect(color9, &QAction::triggered, this, [this]() {emit setThemeColor("#EAEAEF"); });
	QAction* color10 = new QAction(tr("自定义 "), childMen);
	connect(color10, &QAction::triggered, this, [this]() {
		QColor color = QColorDialog::getColor(QColor("#FFFFFF"), this, tr("请选择颜色"));
		emit setThemeColor(color.name());
	});
	childMen->addAction(color1);
	childMen->addAction(color2);
	childMen->addAction(color3);
	childMen->addAction(color4);
	childMen->addAction(color5);
	childMen->addAction(color6);
	childMen->addAction(color7);
	childMen->addAction(color8);
	childMen->addAction(color9);
	childMen->addAction(color10);
	backColorItem->setMenu(childMen);
	editMenu->addAction(backColorItem);
	ui.btnEdit->setMenu(editMenu);


	//工具
	QMenu* toolMenu = new QMenu(this);
	QAction* urlItem = new QAction(toolMenu);
	urlItem->setText(tr("在线工具"));
	m_toolItem = new QAction(toolMenu);
	m_toolItem->setCheckable(true);
	m_toolItem->setText(tr("显示工具栏"));
	connect(m_toolItem, &QAction::triggered, this, [this]() {
		QSettings iniConfig("config.ini", QSettings::IniFormat);
		iniConfig.setValue("ShowToolBar", m_toolItem->isChecked());
		emit showToolBar(m_toolItem->isChecked()); });
	toolMenu->addAction(urlItem);
	toolMenu->addAction(m_toolItem);
	ui.btnTool->setMenu(toolMenu);

	//按钮组
	m_btnGroup = new QButtonGroup();
	ui.btnNote->setCheckable(true);
	ui.btnDraw->setCheckable(true);
	ui.btnPlan->setCheckable(true);
	ui.btnBigData->setCheckable(true);
	ui.btnMedia->setCheckable(true);
	m_btnGroup->addButton(ui.btnNote);
	m_btnGroup->addButton(ui.btnDraw);
	m_btnGroup->addButton(ui.btnPlan);
	m_btnGroup->addButton(ui.btnBigData);
	m_btnGroup->addButton(ui.btnMedia);
	connect(m_btnGroup, &QButtonGroup::idClicked, this, &TopBarWidget::onBtnModeClicked);
	ui.btnNote->setChecked(true);
	ui.btnNote->setDown(true);
}

void TopBarWidget::onBtnModeClicked(int nIdClicked)
{
	ui.btnNote->setDown(false);
	ui.btnDraw->setDown(false);
	ui.btnPlan->setDown(false);
	ui.btnBigData->setDown(false);
	ui.btnMedia->setDown(false);

	switch (nIdClicked)
	{
	case -2:
		ui.btnNote->setChecked(true);
		ui.btnNote->setDown(true);
		break;
	case -3:
		ui.btnDraw->setChecked(true);
		ui.btnDraw->setDown(true);
		break;
	case -4:
		ui.btnPlan->setChecked(true);
		ui.btnPlan->setDown(true);
		break;
	case -5:
		ui.btnBigData->setChecked(true);
		ui.btnBigData->setDown(true);
		break;
	case -6:
		ui.btnMedia->setChecked(true);
		ui.btnMedia->setDown(true);
		break;
	default:
		break;
	}
}

void TopBarWidget::_initStyleSheet()
{

}

void TopBarWidget::_connectSlot()
{
	connect(ui.btnSmall, &QPushButton::clicked, this, &TopBarWidget::btnSmallClicked);
	connect(ui.btnMax, &QPushButton::clicked, this, &TopBarWidget::btnMaxClicked);
	connect(ui.btnClose, &QPushButton::clicked, this, &TopBarWidget::btnCloseClicked);
	connect(ui.btnNote, &QToolButton::clicked, this, &TopBarWidget::btnNoteClicked);
	connect(ui.btnDraw, &QToolButton::clicked, this, &TopBarWidget::btnDrawClicked);
	connect(ui.btnPlan, &QToolButton::clicked, this, &TopBarWidget::btnPlanClicked);
	connect(ui.btnBigData, &QToolButton::clicked, this, &TopBarWidget::btnBigDataClicked);
	connect(ui.btnMedia, &QToolButton::clicked, this, &TopBarWidget::btnMediaHomeClicked);
}