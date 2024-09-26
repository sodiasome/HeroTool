#include "ListViewModel.h"

ListViewModel::ListViewModel(QWidget *parent)
{}

ListViewModel::~ListViewModel()
{}

void ListViewModel::insertData(CustomData data)
{
    m_listData.push_back(data);
}

int ListViewModel::rowCount(const QModelIndex& parent) const
{
    return m_listData.size();
}

QVariant ListViewModel::data(const QModelIndex& index, int role) const
{
    QVariant ret;
    int row = index.row();

    if (row >= m_listData.size() || (!index.isValid()))
    {
        return QVariant();
    }

    CustomData tmpData = m_listData.at(row);


    switch (role) {
    case Qt::UserRole + 1:
        ret = tmpData.m_isSelect;
        break;
    case Qt::UserRole + 2:
        ret = tmpData.m_txt;
        break;
    default:
        break;

    }
    return ret;
}

bool ListViewModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
    bool ret = false;
    int row = index.row();

    if (row >= m_listData.size() || (!index.isValid()))
    {
        return false;
    }
    CustomData tmpData = m_listData.at(row);

    switch (role) {
    case Qt::UserRole + 1:
        tmpData.m_isSelect = value.toBool();
        ret = true;
        break;
    case Qt::UserRole + 2:
        tmpData.m_txt = value.toString();
        ret = true;
        break;
    default:
        break;
    }
    m_listData.replace(row, tmpData);
    return ret;
}