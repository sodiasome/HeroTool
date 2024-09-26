#pragma once
#pragma execution_character_set("utf-8")
#include <QWidget>
#include <QTextStream>
#include <QFileSystemWatcher>
#include "ui_NotePad.h"

#define NoteType tr("富文本(*.rtf);;纯文本(*.txt)")
#define CodeType tr("CPP(*.cpp);;H(*.h);;纯文本(*.txt)")

class NotePad : public QWidget
{
	Q_OBJECT

public:
	NotePad(QWidget *parent = nullptr);
	~NotePad();
	//文件
	void closeFile();
	void openFile(QString sPath);
	void saveFile(QString sPath);

	void setAlignment(Qt::AlignmentFlag flag);
	void updateTextFormat();
	void insertPicture();
	void insertCurrTime();
	void setFontFormat();
	void setMode(int nModde);
	void setFofmat(bool bFormat);
	void setNoteDown();
	QString getFileType();

	QTextCharFormat m_textFmt;	//富文本属性
signals:
	void editting();
private:
	Ui::NotePadClass ui;
	QString m_sCurrEditFile;			//当前文件
	QFileSystemWatcher* m_watchFile;	//监视文件是否修改
	int m_nMode;
	enum { Code = -2, Node = -3 }; //代码编辑模式，笔记编辑模式'
	int m_nMouseOff;//鼠标选择

	void _intiUi();
	void _connect();
	void _checkMode();
};
