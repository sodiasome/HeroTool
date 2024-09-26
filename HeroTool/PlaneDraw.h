#pragma once
#include <QChartView>
QT_CHARTS_USE_NAMESPACE

class PlaneDraw  : public QChartView
{
	Q_OBJECT

public:
	PlaneDraw(QWidget* parent = nullptr);
	~PlaneDraw();

	/*
	*	QChart 平面坐标系绘制
	* 
	*/
	void _initUi();
};
