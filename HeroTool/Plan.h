#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_Plan.h"
#include <QTimer>

class Plan : public QWidget
{
	Q_OBJECT

public:
	Plan(QWidget *parent = nullptr);
	~Plan();

	void loadHtml();

private:
	Ui::PlanClass ui;
	QTimer* m_calcTimer;

	void _initUi();
	void _connect();

public slots:
	void onCalcDateTime();
};
