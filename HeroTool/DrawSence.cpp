#include "DrawSence.h"
#include <QDebug>
#include <QGraphicsLineItem>
#include <QTextCursor>
#include <QPainter>
#include <QPixmap>
#include <QMessageBox>
#include <QGraphicsPixmapItem>
#include <QHBoxLayout>

DrawSence::DrawSence(QObject*parent)
	: QGraphicsScene(parent)
	, m_nMode(Pen)
	, m_bMousePress(false)
	, m_bMouseRelease(true)
	, m_rectItem(nullptr)
	, m_textItem(nullptr)
{
	_initUi();
}

DrawSence::~DrawSence()
{}

void DrawSence::setMode(int nMode)
{
	m_nMode = nMode;

	static bool bMoveAble = false;
	if (m_nMode == None)
	{
		for (auto item : this->items())
		{
			item->setFlag(QGraphicsItem::ItemIsMovable);
			item->setFlag(QGraphicsItem::ItemIsSelectable);
		}
		bMoveAble = true;
	}
	else
	{
		//关闭可移动
		if (bMoveAble)
		{
			for (auto item : this->items())
			{
				item->setFlag(QGraphicsItem::ItemIsMovable,false);
				item->setFlag(QGraphicsItem::ItemIsSelectable,false);
			}
			bMoveAble = false;
		}
	}


}

void DrawSence::setPenWidth(int nPenWidth)
{
	m_pen.setWidth(nPenWidth);
}

void DrawSence::delSelectIetm()
{
	QList<QGraphicsItem*> itemList = this->selectedItems();
	for (auto i = 0; i < itemList.size(); i++) {
		this->removeItem(itemList[i]);
		delete itemList[i];
	}
}

QString DrawSence::getPicType()
{
	return QString(Pictype);
}

void DrawSence::_initUi()
{
	m_pen.setColor("#000000");
	m_fillColor = Qt::white;
	QFont font("楷体", 20, QFont::Bold);
	m_font = font;

	m_view = new QGraphicsView(this);
	QHBoxLayout* layout = new QHBoxLayout;
	layout->addWidget(m_view);
	m_drawWidget = new QWidget;
	m_drawWidget->setLayout(layout);

}

void DrawSence::mousePressEvent(QGraphicsSceneMouseEvent * mouseEvent)
{
	m_bMousePress = true;
	m_posMousePress = mouseEvent->scenePos();
	QGraphicsScene::mousePressEvent(mouseEvent);
}

void DrawSence::mouseMoveEvent(QGraphicsSceneMouseEvent* mouseEvent)
{
	if (m_bMousePress)
	{
		//enum { Rect = 0, Circle, Triangle, Polygon, Line, Pen, Text, Erase,None };
		QPointF ePos = mouseEvent->scenePos();
		switch (m_nMode)
		{
		case Rect:
			{
				if (m_bMouseRelease)
				{
					QGraphicsRectItem* rectItem = new QGraphicsRectItem();
					rectItem->setPen(m_pen);
					rectItem->setBrush(m_fillColor);
					this->addItem(rectItem);
					m_rectItem = rectItem;
				}
				m_rectItem->setRect(m_posMousePress.x(), m_posMousePress.y(), ePos.x() - m_posMousePress.x(), ePos.y() - m_posMousePress.y());
			}
			break;
		case Circle:
			if (m_bMouseRelease)
			{
				QGraphicsEllipseItem* ellipseItem = new QGraphicsEllipseItem();
				ellipseItem->setPen(m_pen);
				ellipseItem->setBrush(m_fillColor);
				this->addItem(ellipseItem);
				m_ellipseItem = ellipseItem;
			}
			m_ellipseItem->setRect(m_posMousePress.x(), m_posMousePress.y(), ePos.x() - m_posMousePress.x(), ePos.y() - m_posMousePress.y());
			break;
		case Triangle:
			{
				if (m_bMouseRelease)
				{
					QGraphicsPolygonItem* polygonItem = new QGraphicsPolygonItem();
					polygonItem->setPen(m_pen);
					polygonItem->setBrush(m_fillColor);
					this->addItem(polygonItem);
					m_polygonItem = polygonItem;
				}
				QPolygonF points;
				points.append(m_posMousePress);
				QPointF posLeft(m_posMousePress.x() - (ePos.x()-m_posMousePress.x()), ePos.y());
				QPointF posRight(ePos);
				points.append(posLeft);
				points.append(posRight);
				m_polygonItem->setPolygon(points);
			}
			break;
		case Polygon:
			break;
		case Line:
			if (m_bMouseRelease)
			{
				QGraphicsLineItem* lineItem = new QGraphicsLineItem();
				lineItem->setPen(m_pen);
				this->addItem(lineItem);
				m_lineItem = lineItem;
			}
			m_lineItem->setLine(m_posMousePress.x(), m_posMousePress.y(), ePos.x(), ePos.y());
			break;
		case Pen:
			{
				if (m_bMousePress)
				{
					QGraphicsLineItem* lineItem = new QGraphicsLineItem();
					lineItem->setPen(m_pen);
					lineItem->setLine(m_posMousePress.x(), m_posMousePress.y(), ePos.x(), ePos.y());
					this->addItem(lineItem);
					qDebug() << m_posMousePress.x() << "  " << m_posMousePress.y() << "  " << ePos.x() << "  " << ePos.y();
					m_posMousePress = ePos;
				}
			}
			break;
		case Text:
			if (m_bMouseRelease && ePos != m_posMousePress)
			{
				TextItem* textItem = new TextItem();
				textItem->setDefaultTextColor(m_pen.color().name());
				QFont font("楷体", 20, QFont::Bold);
				textItem->setFont(font);
				textItem->setPlainText("文本");
				textItem->setPos(m_posMousePress);
				this->addItem(textItem);

				m_textItem = textItem;
			}
			break;
		case Erase:
			{
				QGraphicsLineItem* lineItem = new QGraphicsLineItem();
				QPen erasePen = m_pen;
				erasePen.setColor("#FFFFFF");
				lineItem->setPen(erasePen);
				lineItem->setLine(m_posMousePress.x(), m_posMousePress.y(), ePos.x(), ePos.y());
				this->addItem(lineItem);
				m_posMousePress = ePos;
			}
			break;
		}
		m_bMouseRelease = false;
	}
	
	QGraphicsScene::mouseMoveEvent(mouseEvent);
}

void DrawSence::mouseReleaseEvent(QGraphicsSceneMouseEvent* mouseEvent)
{
	m_bMousePress = false;
	m_bMouseRelease = true;


	switch (m_nMode)
	{
	case Rect:
		if (m_rectItem != nullptr)
			this->addItem(m_rectItem);
	break;
	case Circle:
		if (m_ellipseItem != nullptr)
			this->addItem(m_ellipseItem);
		break;
	case Triangle:
		if (m_polygonItem != nullptr)
			this->addItem(m_polygonItem);
		break;
	case Pen:
	break;
	}
		
	QGraphicsScene::mouseReleaseEvent(mouseEvent);
}
