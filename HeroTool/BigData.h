#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include <QtCharts>
QT_CHARTS_USE_NAMESPACE
#include "ui_BigData.h"
#include <QDateTime>

class ListViewModel;

class BigData : public QWidget
{
	Q_OBJECT

public:
	BigData(QWidget *parent = nullptr);
	~BigData();
	Q_INVOKABLE QDateTime getCurrentDateTime()
	{
		return QDateTime::currentDateTime();
	}

public slots:
	void onBtnSearchClicked();

private:
	Ui::BigDataClass ui;
	void _init();
	void _connect();

	ListViewModel* model;
};
