#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_MediaHome.h"

class MediaHome : public QWidget
{
	Q_OBJECT

public:
	MediaHome(QWidget *parent = nullptr);
	~MediaHome();

	Q_INVOKABLE void AddData(int a, int b);
	Q_INVOKABLE QString UpdateBackground();

private:
	Ui::MediaHomeClass ui;
};
