#pragma once
#pragma execution_character_set("utf-8")
#include <QStyledItemDelegate>
#include <QPainter>
#include <QEvent>
#include <QMouseEvent>

class BaseDelegate  : public QStyledItemDelegate
{
	Q_OBJECT

public:
	BaseDelegate(QWidget *parent);
	~BaseDelegate();
	void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;
	bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index);

signals:
	void addClicked(const QModelIndex& index);
};
