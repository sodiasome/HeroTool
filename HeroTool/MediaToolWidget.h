#pragma once

#include <QWidget>
#include "ui_MediaToolWidget.h"

class MediaToolWidget : public QWidget
{
	Q_OBJECT

public:
	MediaToolWidget(QWidget *parent = nullptr);
	~MediaToolWidget();

private:
	Ui::MediaToolWidgetClass ui;
};
