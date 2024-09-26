#pragma once
#pragma execution_character_set("utf-8")
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>
#include "TextItem.h"

#define Pictype "PNG(*.png);;JPG(*.jpg)"

class DrawSence : public QGraphicsScene
{
	Q_OBJECT

public:
	DrawSence(QObject*parent = nullptr);
	~DrawSence();

	enum { Rect = 0, Circle, Triangle, Polygon, Line, Pen, Text, Erase,None };
	void setMode(int nMode);
	int m_nMode;
	void setPen(QPen pen) { m_pen = pen; } 
	void setBrush(QColor sFillColor) { m_fillColor = sFillColor; }
	void setPenWidth(int nPenWidth);
	QGraphicsView* view() { return m_view; }
	void delSelectIetm();

	QWidget* m_drawWidget;
	QString getPicType();


private:
	QGraphicsItem* m_graphicItem;
	QGraphicsRectItem* m_rectItem;
	QGraphicsEllipseItem* m_ellipseItem;
	QGraphicsPolygonItem* m_polygonItem;
	QGraphicsLineItem* m_lineItem;
	TextItem* m_textItem;
	bool m_bMousePress;
	bool m_bMouseRelease;
	QPointF m_posMousePress;
	QPen m_pen;
	QColor m_fillColor;
	QFont m_font;

	QGraphicsView* m_view;

	void _initUi();

protected:
	void mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
	void mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent) override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent* mouseEvent) override;

};
