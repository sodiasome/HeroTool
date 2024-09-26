#pragma once

#include <QWidget>
#include "ui_BigDataToolWidget.h"

class BigDataToolWidget : public QWidget
{
	Q_OBJECT

public:
	BigDataToolWidget(QWidget *parent = nullptr);
	~BigDataToolWidget();

private:
	Ui::BigDataToolWidgetClass ui;
};
