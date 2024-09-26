#include "PlaneDraw.h"
#include <QLineSeries>
#include <QValueAxis>
#include <QtMath>
#include <QChart>

PlaneDraw::PlaneDraw(QWidget *parent)
{
    _initUi();
}

PlaneDraw::~PlaneDraw()
{}

void PlaneDraw::_initUi()
{
    QChart* chart = new QChart();
    chart->setTitle("FUNCTION");
    this->setChart(chart);

    //创建折现序列
    QLineSeries* seriesS = new QLineSeries;
    QLineSeries* seriesC = new QLineSeries;
    seriesS->setName("诺安成长"); 
    seriesC->setName("嘉实智能汽车");
    chart->addSeries(seriesS);
    chart->addSeries(seriesC);

    //添加数据绘制
    QVector<QPoint> vecPos;
    vecPos.push_back(QPoint(10, 1.1560 * 10));
    vecPos.push_back(QPoint(20, 1.1340 * 10));
    vecPos.push_back(QPoint(30, 1.0680 * 10));
    vecPos.push_back(QPoint(40, 1.1160 * 10));
    vecPos.push_back(QPoint(50, 1.0780 * 10));
    for (auto pos : vecPos)
    {
        seriesS->append(pos);
    }
    QVector<QPoint> vecPos2;
    vecPos2.push_back(QPoint(10, 1.8500 * 10));
    vecPos2.push_back(QPoint(20, 1.8460 * 10));
    vecPos2.push_back(QPoint(30, 1.7840 * 10));
    vecPos2.push_back(QPoint(40, 1.8250 * 10));
    vecPos2.push_back(QPoint(50, 1.7980 * 10));
    for (auto pos : vecPos2)
    {
        seriesC->append(pos);
    }

    //创建坐标轴
    QValueAxis* axisX = new QValueAxis;
    axisX->setRange(0, 60);
    chart->setAxisX(axisX, seriesS);
    chart->setAxisX(axisX, seriesC);

    QValueAxis* axisY = new QValueAxis;
    axisY->setRange(0, 20);
    chart->setAxisY(axisY, seriesS);
    chart->setAxisY(axisY, seriesC);
}
