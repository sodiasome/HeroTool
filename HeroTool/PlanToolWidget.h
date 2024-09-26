#pragma once

#include <QWidget>
#include "ui_PlanToolWidget.h"

class PlanToolWidget : public QWidget
{
	Q_OBJECT

public:
	PlanToolWidget(QWidget *parent = nullptr);
	~PlanToolWidget();

private:
	Ui::PlanToolWidgetClass ui;
};
