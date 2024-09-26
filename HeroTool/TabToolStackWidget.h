#pragma once

#include <QWidget>
#include <QStackedWidget>
#include "ui_TabToolStackWidget.h"

class TabToolStackWidget : public QWidget
{
	Q_OBJECT

public:
	TabToolStackWidget(QWidget *parent = nullptr);
	~TabToolStackWidget();

	void addToolWidget(QWidget* widget);	//添加显示页面
	void setCurrPageIndex(int nIndex);		//设置显示页面

private:
	Ui::TabToolStackWidgetClass ui;

	QStackedWidget* m_toolPage;

	void _initUi();
	void _connect();
};
