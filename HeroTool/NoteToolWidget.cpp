#include "NoteToolWidget.h"
#include <QColorDialog>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QButtonGroup>
#include <QDebug>
#include <QSettings>

NoteToolWidget::NoteToolWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	_initUi();
	_connect();
}

NoteToolWidget::~NoteToolWidget()
{}

void NoteToolWidget::_initUi()
{
	ui.btnColor->setToolTip(tr("设置文字颜色"));
	ui.btnBkColor->setToolTip(tr("设置文字背景颜色"));

	ui.btnBlod->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/blod.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnUnderLine->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/unline.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnItalic->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/italic.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnAlignmenLeft->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/left.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnAlignmenRight->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/right.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnAlignmenMiddle->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/center.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnInsertCurrTime->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/timer.png);background-position:cneter;background-repeat:no-repeat;");
	ui.btnInsertPicture->setStyleSheet("background-image:url(:/HeroTool/sources/notepad/picture.png);background-position:cneter;background-repeat:no-repeat;");

	
	ui.btnBlod->setCheckable(true);
	ui.btnUnderLine->setCheckable(true);
	ui.btnItalic->setCheckable(true);
	ui.btnBlod->setChecked(false);
	ui.btnUnderLine->setChecked(false);
	ui.btnItalic->setChecked(false);
	//方式二
	QStringList strList;
	strList << "12" << "14" << "16" << "18" << "20" << "36" << "40" << "48" << "52" << "68" << "72";
	ui.cbFontSize->addItems(strList);

	QButtonGroup* btnGroup = new QButtonGroup(this);
	btnGroup->addButton(ui.rdCodeMode);
	btnGroup->addButton(ui.rdNodeMode);
	ui.rdNodeMode->setChecked(true);
	connect(btnGroup, &QButtonGroup::idClicked, this, [this](int nClick) {emit btnModeCLicked(nClick); });
}

void NoteToolWidget::_connect()
{
	connect(ui.btnBlod, &QPushButton::clicked, this, [this]() {
		static bool bCheck = false;
		bCheck = !bCheck;
		ui.btnBlod->setChecked(bCheck);
		emit btnBlodClicked(bCheck);
		});
	connect(ui.btnUnderLine, &QPushButton::clicked, this, [this]() {
		static bool bCheck = false;
		bCheck = !bCheck;
		emit btnUnderLineClicked(bCheck); });
	connect(ui.btnItalic, &QPushButton::clicked, this, [this]() {
		static bool bCheck = false;
		bCheck = !bCheck;
		emit btnItalicClicked(bCheck); });
	connect(ui.btnAlignmenMiddle, &QPushButton::clicked, this, [this]() {
		emit btnAlignmentClicked(Qt::AlignCenter);});
	connect(ui.btnAlignmenLeft, &QPushButton::clicked, this, [this]() {
		emit btnAlignmentClicked(Qt::AlignLeft);});
	connect(ui.btnAlignmenRight, &QPushButton::clicked, this, [this]() {
		emit btnAlignmentClicked(Qt::AlignRight);});
	connect(ui.btnColor, &QPushButton::clicked, this, [this]() {
		QPalette palette;
		palette = ui.btnColor->palette();
		QColor iniColor = palette.color(QPalette::Text);
		QColor color = QColorDialog::getColor(iniColor, this, tr("请选择颜色"));
		if (color.isValid())
		{
			ui.btnColor->setStyleSheet("background-color:" + color.name() + ";border-radius:8px;");
			emit btnColorChanged(color.name());
		}
		});
	connect(ui.btnBkColor, &QPushButton::clicked, this, [this]() {
		QPalette palette;
		palette = ui.btnBkColor->palette();
		QColor iniColor = palette.color(QPalette::Text);
		QColor color = QColorDialog::getColor(iniColor, this, tr("请选择颜色"));
		if (color.isValid())
		{
			ui.btnBkColor->setStyleSheet("background-color:"+ color.name() +";border-radius:8px;");
			emit btnBkColorChanged(color.name());
		}
		});
	connect(ui.cbFontSize, &QComboBox::currentTextChanged, this, [this](QString sSize) {
		emit btnTextSizeChanged(sSize.toInt());});
	connect(ui.btnInsertPicture, &QPushButton::clicked, this, [this]() {emit btnInsertPicture(); });
	connect(ui.btnFont, &QPushButton::clicked, this, [this]() {emit btnFont(); });
	connect(ui.btnInsertCurrTime, &QPushButton::clicked, this, [this]() {emit btnInsertCurrTime(); });
	connect(ui.btnSetName, &QPushButton::clicked, this, [this]() {
		QDate date = QDate::currentDate();
		QTime time = QTime::currentTime();
		QLocale locale = QLocale::Chinese;
		QString sDateTime = QString("%1-%2-%3 (%4%5%6) %7")
			.arg(date.year(), 4, 10, QLatin1Char('0'))
			.arg(date.month(), 2, 10, QLatin1Char('0'))
			.arg(date.day(), 2, 10, QLatin1Char('0'))
			.arg(time.hour(), 2, 10, QLatin1Char('0'))
			.arg(time.minute(), 2, 10, QLatin1Char('0'))
			.arg(time.second(), 2, 10, QLatin1Char('0'))
			.arg(locale.toString(QDateTime::currentDateTime(), QString("dddd")));
		ui.edFileName->setText(sDateTime);
		emit btnSetName(sDateTime);
		});
	connect(ui.btnFormat, &QPushButton::clicked, this, &NoteToolWidget::btnFormatClicked);
	connect(ui.checkBookFlag, &QCheckBox::stateChanged, this, [this](int nCheck) {
		QSettings iniConfig("config.ini", QSettings::IniFormat);
		iniConfig.setValue("BookFlag", nCheck);});
	connect(ui.btnNoteDown, &QPushButton::clicked, this, [this]() {emit btnNoteDown(); });
}

