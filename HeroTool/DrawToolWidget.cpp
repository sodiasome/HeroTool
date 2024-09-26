#include "DrawToolWidget.h"
#include <QPushButton>
#include <QButtonGroup>
#include <QDebug>
#include <QColorDialog>
#include <QLineEdit>

DrawToolWidget::DrawToolWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	_initUi();
	_connect();
}

DrawToolWidget::~DrawToolWidget()
{}

void DrawToolWidget::_initUi()
{
	QButtonGroup* btnGroup = new QButtonGroup(this);
	btnGroup->addButton(ui.btnRect);
	btnGroup->addButton(ui.btnCircle);
	btnGroup->addButton(ui.btnTriangle);
	btnGroup->addButton(ui.btnPolygon);
	btnGroup->addButton(ui.btnLine);
	btnGroup->addButton(ui.btnPen);
	btnGroup->addButton(ui.btnText);
	btnGroup->addButton(ui.btnErase);
	btnGroup->addButton(ui.btnMoveLock);

	ui.btnRect->setCheckable(true);
	ui.btnCircle->setCheckable(true);
	ui.btnTriangle->setCheckable(true);
	ui.btnPolygon->setCheckable(true);
	ui.btnLine->setCheckable(true);
	ui.btnPen->setCheckable(true);
	ui.btnText->setCheckable(true);
	ui.btnErase->setCheckable(true);
	ui.btnMoveLock->setCheckable(true);

	ui.btnPen->setChecked(true);

	ui.btnColor->setToolTip(tr("设置文字颜色"));
	ui.btnBkColor->setToolTip(tr("设置画板背景颜色"));
	ui.btnBrushColor->setToolTip(tr("设置几何图形背景颜色"));
	ui.btnRect->setStyleSheet("background-image:url(:/HeroTool/sources/draw/rect.png);background-position:center;background-repeat:no-repeat;");
	ui.btnCircle->setStyleSheet("background-image:url(:/HeroTool/sources/draw/ellipse.png);background-position:center;background-repeat:no-repeat;");
	ui.btnTriangle->setStyleSheet("background-image:url(:/HeroTool/sources/draw/triangle.png);background-position:center;background-repeat:no-repeat;");
	ui.btnLine->setStyleSheet("background-image:url(:/HeroTool/sources/draw/line.png);background-position:center;background-repeat:no-repeat;");
	ui.btnPen->setStyleSheet("background-image:url(:/HeroTool/sources/draw/pen.png);background-position:center;background-repeat:no-repeat;");
	ui.btnPolygon->setStyleSheet("background-image:url(:/HeroTool/sources/draw/polygon.png);background-position:center;background-repeat:no-repeat;");
	ui.btnErase->setStyleSheet("background-image:url(:/HeroTool/sources/draw/erase.png);background-position:center;background-repeat:no-repeat;");
	ui.btnText->setStyleSheet("background-image:url(:/HeroTool/sources/draw/text.png);background-position:center;background-repeat:no-repeat;");
	ui.btnDeleteSel->setStyleSheet("background-image:url(:/HeroTool/sources/draw/delete.png);background-position:center;background-repeat:no-repeat;");
	ui.btnMoveLock->setStyleSheet("background-image:url(:/HeroTool/sources/draw/lock.png);background-position:center;background-repeat:no-repeat;");
	
	connect(btnGroup, &QButtonGroup::idClicked, this, &DrawToolWidget::onBtnModeClicked);
}

void DrawToolWidget::_connect()
{
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
	connect(ui.btnBrushColor, &QPushButton::clicked, this, [this]() {
		QPalette palette;
		palette = ui.btnBrushColor->palette();
		QColor iniColor = palette.color(QPalette::Text);
		QColor color = QColorDialog::getColor(iniColor, this, "choose color please!");
		if (color.isValid())
		{
			ui.btnBrushColor->setStyleSheet("background-color:" + color.name() + ";border-radius:8px;border:2px solid #000000;");
			emit fillColorChanged(color.name());
		}
		});
	connect(ui.edPenWidth, &QLineEdit::textChanged, this, [this](QString sPenWidth) {
		emit penWidthChanged(sPenWidth.toInt());
		});
	connect(ui.btnBkColor, &QPushButton::clicked, this, [this]() {
		QPalette palette;
		palette = ui.btnBkColor->palette();
		QColor iniColor = palette.color(QPalette::Text);
		QColor color = QColorDialog::getColor(iniColor, this, tr("请选择颜色"));
		if (color.isValid())
		{
			ui.btnBkColor->setStyleSheet("background-color:" + color.name() + ";border-radius:8px;");
			emit btnBkColorChanged(color.name());
		}});
	connect(ui.btnDeleteSel, &QPushButton::clicked, this, &DrawToolWidget::btnDelSelItem);
}

void DrawToolWidget::onBtnModeClicked(int nIdClicked)
{
	int nMode = Pen;
	switch (nIdClicked)
	{
	case -2:
		ui.btnRect->setChecked(true);
		nMode = Rect;
		break;
	case -3:
		ui.btnCircle->setChecked(true);
		nMode = Circle;
		break;
	case -4:
		ui.btnTriangle->setChecked(true);
		nMode = Triangle;
		break;
	case -5:
		ui.btnPolygon->setChecked(true);
		nMode = PolygonEx;
		break;
	case -6:
		ui.btnLine->setChecked(true);
		nMode = Line;
		break;
	case -7:
		ui.btnPen->setChecked(true);
		nMode = Pen;
		break;
	case -8:
		ui.btnText->setChecked(true);
		nMode = Text;
		break;
	case -9:
		ui.btnErase->setChecked(true);
		nMode = Erase;
		break;
	case -10:
		ui.btnMoveLock->setChecked(true);
		nMode = None;
		break;
	default:
		break;
	}
	emit modeClicked(nMode);
}
