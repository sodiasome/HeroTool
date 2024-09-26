#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_NoteToolWidget.h"

class NoteToolWidget : public QWidget
{
	Q_OBJECT

public:
	NoteToolWidget(QWidget *parent = nullptr);
	~NoteToolWidget();

private:
	Ui::NoteToolWidgetClass ui;

	void _initUi();
	void _connect();
signals:
	void btnModeCLicked(int nClicked);
	void btnBlodClicked(bool bCheck);
	void btnUnderLineClicked(bool bCheck);
	void btnItalicClicked(bool bCheck);
	void btnAlignmentClicked(Qt::AlignmentFlag flag);
	void btnColorChanged(QString sColor);
	void btnBkColorChanged(QString sColor);
	void btnTextSizeChanged(int nSize);
	void btnInsertPicture();
	void btnFont();
	void btnInsertCurrTime();
	void btnSetName(QString sFileName);
	void btnFormatClicked();			//格式刷
	void btnNoteDown();//设定笔记
};
