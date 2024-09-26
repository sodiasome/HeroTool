#include "DrawView.h"

DrawView::DrawView(QWidget *parent) : QGraphicsView(parent)
{
	ui.setupUi(this);
	setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
	secen = new DrawSence(this);
	secen->setSceneRect(QRectF(0, 0, 5000, 5000));
	this->setScene(secen);
}

DrawView::~DrawView()
{}
void DrawView::saveFile(QString sPath)
{
	if (sPath.endsWith(".png") || sPath.endsWith(".jpg"))
	{
		QPixmap pixmap = this->viewport()->grab();
		pixmap.save(sPath);
	}
}
void DrawView::openFile(QString sPath)
{
	QPixmap pixmap = QPixmap(sPath);
	secen->setSceneRect(QRectF(0, 0, pixmap.width(), pixmap.height()));
	QGraphicsPixmapItem* item = scene()->addPixmap(pixmap);
	item->setPos(0, 0);
}