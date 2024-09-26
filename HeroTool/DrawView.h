#pragma once

#include <QGraphicsView>
#include "ui_DrawView.h"
#include "DrawSence.h"

class DrawView : public QGraphicsView
{
	Q_OBJECT

public:
	DrawView(QWidget *parent = nullptr);
	~DrawView();

	DrawSence* secen;
	void openFile(QString sPath);
	void saveFile(QString sPath);

private:
	Ui::DrawViewClass ui;
};
