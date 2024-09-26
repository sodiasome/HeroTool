#include "Plan.h"
#include <QLineEdit>
#include <QDateTime>
#include <QDebug>
#include <QSettings>
#include <QWebEnginePage>

Plan::Plan(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	_initUi();
	_connect();
}

Plan::~Plan()
{}

void Plan::loadHtml()
{
	ui.widgetHtml->setUrl(QUrl("https://www.baidu.com")); //
	connect(ui.widgetHtml->page(), &QWebEnginePage::loadFinished, [this](bool ok) {
		if (ok) {
			// 1. 获取页面内容的宽度
			ui.widgetHtml->page()->runJavaScript("document.body.scrollWidth", [this](const QVariant& widthResult) {
				int pageWidth = widthResult.toInt();
				int viewWidth = ui.widgetHtml->width();
				double zoomFactorWidth = static_cast<double>(viewWidth) / static_cast<double>(pageWidth);

				// 2. 获取页面内容的高度
				ui.widgetHtml->page()->runJavaScript("document.body.scrollHeight", [this, zoomFactorWidth](const QVariant& heightResult) {
					int pageHeight = heightResult.toInt();
					int viewHeight = this->ui.widgetHtml->height();
					double zoomFactorHeight = static_cast<double>(viewHeight) / static_cast<double>(pageHeight);
					// 3. 根据宽度和高度计算缩放因子，并设置
					double zoomFactor = qMin(zoomFactorWidth, zoomFactorHeight); // 取两者中较小的一个，以确保完全适合
					ui.widgetHtml->setZoomFactor(zoomFactor);
					});
				});
		}
	});
}

void Plan::_initUi()
{
	ui.edBeginTime->setText("2023-07-11T09:04:23");
	ui.edEndTime->setText("2024-03-03T14:33:23");
	QSettings iniConfig("config.ini", QSettings::IniFormat);
	bool bCheck = iniConfig.value("isCurrTime").toBool();
	bCheck ? ui.checkCurrTime->setCheckState(Qt::CheckState::Checked) : 
		ui.checkCurrTime->setCheckState(Qt::CheckState::Unchecked);

	m_calcTimer = new QTimer(this);
	connect(m_calcTimer, &QTimer::timeout, this, [this]() {
		if (ui.checkCurrTime->isChecked())
		{
			QSettings iniConfig("config.ini", QSettings::IniFormat);
			iniConfig.setValue("isCurrTime", ui.checkCurrTime->isChecked());

			QString sCurrTime = QDateTime::currentDateTime().toString(Qt::ISODate);
			ui.edEndTime->setText(sCurrTime);
			onCalcDateTime();
		} });
	m_calcTimer->start(500);

	loadHtml();
	
}

void Plan::_connect()
{
	connect(ui.edEndTime, &QLineEdit::editingFinished, this, &Plan::onCalcDateTime);
}

void Plan::onCalcDateTime()
{
	QString sBeginTime = ui.edBeginTime->text();
	QString sEndTime = ui.edEndTime->text();

	QDateTime dateTimeBegin = QDateTime::fromString(sBeginTime, Qt::ISODate);
	QDateTime dateTimeEnd = QDateTime::fromString(sEndTime, Qt::ISODate);

	if (!dateTimeBegin.isValid() || !dateTimeEnd.isValid())
		return;


	int nDay = dateTimeBegin.daysTo(dateTimeEnd);
	long long llSecond = dateTimeBegin.secsTo(dateTimeEnd);
	long long llRemainder = 0;//余数
	int nHundredMillion = llSecond / 100000000;	//亿
	llRemainder = llSecond % 100000000;

	int nTenMillion = llRemainder / 10000000;	//千万
	llRemainder = llRemainder % 10000000;

	int nMillion = llRemainder / 1000000;		//百万
	llRemainder = llRemainder % 1000000;

	int nTenThousand = llRemainder / 10000;		//万
	llRemainder = llRemainder % 10000;

	int nThousand = llRemainder / 1000;			//千
	llRemainder = llRemainder % 1000;

	int nHundred = llRemainder / 100;			//百
	llRemainder = llRemainder % 1000;

	int nSecond = llRemainder % 100;			//百

	QString sSeconds;
	sSeconds = nHundredMillion > 0 ? QString("%1亿").arg(nHundredMillion) : "";
	sSeconds += nTenMillion > 0 ? QString("%1千").arg(nTenMillion) : "";
	sSeconds += nMillion > 0 ? QString("%1百").arg(nMillion) : "";
	sSeconds += nTenThousand > 0 ? QString("%1万").arg(nTenThousand) : "";
	sSeconds += nThousand > 0 ? QString("%1千").arg(nThousand) : "";
	sSeconds += nHundred > 0 ? QString("%1百").arg(nHundred) : "";
	sSeconds += nSecond > 0 ? QString("%1").arg(nSecond) : "0";

	QString sResut = QString(" %1 天 %2 秒").arg(nDay).arg(sSeconds);
	ui.lbCalcTime->setText(sResut);
}
