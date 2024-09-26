#include "BaseDelegate.h"

BaseDelegate::BaseDelegate(QWidget *parent)
	: QStyledItemDelegate(parent)
{}

BaseDelegate::~BaseDelegate()
{}

void BaseDelegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QRect retc = option.rect;

    bool isSelect = index.data(Qt::UserRole + 1).toBool();
    QString txt = index.data(Qt::UserRole + 2).toString();


    QStyleOptionViewItem viewoption(option);
    initStyleOption(&viewoption, index);
    if (option.state.testFlag(QStyle::State_HasFocus))
    {
        viewoption.state = viewoption.state ^ QStyle::State_HasFocus;
    }
    QStyledItemDelegate::paint(painter, viewoption, index);


    QRect checboxRec(retc.left() + 10, retc.top() + 4 / 4, 14, 14); 

    if (isSelect)
    {
        QPixmap pix(":/HeroTool/sources/bigdata/yes.png");
        painter->drawPixmap(checboxRec, pix);
    }
    else
    {
        QPixmap pix(":/HeroTool/sources/bigdata/no.png");
        painter->drawPixmap(checboxRec, pix);
    }


    painter->save();

    QFont font;
    font.setFamily("Microsoft YaHei");
    font.setPixelSize(10);
    painter->setFont(font);

    QRect txtRec(retc.left() + 50, retc.top(), retc.width() - 100, retc.height());
    painter->drawText(txtRec, Qt::AlignCenter, txt);

    painter->restore();
    
}

bool BaseDelegate::editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index)
{
    QRect retc = option.rect;


    QRect checboxRec(retc.left() + 10, retc.top() + (retc.height() - 20) / 2, 20, 20);

    QMouseEvent* mevent = static_cast<QMouseEvent*>(event);
    if (checboxRec.contains(mevent->pos()) && event->type() == QEvent::MouseButtonPress)
    {
        bool value = model->data(index, Qt::UserRole + 1).toBool();
        model->setData(index, !value, Qt::UserRole + 1);
        model->dataChanged(index, index);

        emit addClicked(index);
    }

    return QStyledItemDelegate::editorEvent(event, model, option, index);
}
