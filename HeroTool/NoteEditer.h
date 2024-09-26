#pragma once

#include <QTextEdit>
#include <QMouseEvent>
#include <QTextCursor>

class NoteEditer  : public QTextEdit
{
	Q_OBJECT

public:
	NoteEditer(QWidget *parent);
	~NoteEditer();

	void setFormat(bool bFormat) { m_bFormat = bFormat; }

private:
	bool m_bFormat;//格式刷是否启用
	bool m_bMousePress;//鼠标是否按下
	int m_nTextEndIndex;
	int m_nTextStartIndex;

	void openEditView();//打开笔记
protected:
	void mousePressEvent(QMouseEvent* event);        //单击
	void mouseReleaseEvent(QMouseEvent* event);      //释放
signals:
	void mousePress(QTextCursor cursor);
	void mouseRelease(QTextCursor cursor);
};
