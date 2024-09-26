#pragma once
#pragma execution_character_set("utf-8")
#include <QAbstractListModel>

typedef struct node
{
	bool m_isSelect;
	QString m_txt;
}CustomData;

class ListViewModel  : public QAbstractListModel
{
	Q_OBJECT

public:
	ListViewModel(QWidget *parent = nullptr);
	~ListViewModel();
	void insertData(CustomData data);
	int rowCount(const QModelIndex& parent) const;
	QVariant data(const QModelIndex& index, int role) const;
	bool setData(const QModelIndex& index, const QVariant& value, int role);

private:
	QList<CustomData> m_listData;
};
