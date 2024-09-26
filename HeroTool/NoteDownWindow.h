#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include "ui_NoteDownWindow.h"
#include <QTextEdit>

class NoteDownWindow : public QWidget
{
	Q_OBJECT

public:
	QString m_sFile;
	QTextEdit* m_pTextEdit;
	NoteDownWindow(QWidget *parent = nullptr);
	~NoteDownWindow();

	QString getChineseSpell(QString& src);
	QString FirstLetter(int nCode);

protected:
	void closeEvent(QCloseEvent* event);
	void resizeEvent(QResizeEvent* event);

private:
	Ui::NoteDownWindowClass ui;
};
