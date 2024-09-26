#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_DrawToolWidget.h"

enum { Rect = 0, Circle, Triangle, PolygonEx, Line, Pen, Text, Erase, None};

class DrawToolWidget : public QWidget
{
	Q_OBJECT

public:
	DrawToolWidget(QWidget *parent = nullptr);
	~DrawToolWidget();

private:
	Ui::DrawToolWidgetClass ui;

	void _initUi();
	void _connect();
signals:
	void modeClicked(int nId);
	void btnColorChanged(QString sColor);
	void fillColorChanged(QString sFillColor);
	void btnBkColorChanged(QString sBkColor);
	void penWidthChanged(int nWidth);
	void btnDelSelItem();
public slots:
	void onBtnModeClicked(int nIdClicked);
};
