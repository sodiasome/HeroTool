#include "TextItem.h"
#include <QApplication>

TextItem::TextItem(QObject *parent)
{
    m_sText.clear();
}

TextItem::~TextItem()
{}

void TextItem::focusInEvent(QFocusEvent* event)
{
    if (event->reason() != Qt::PopupFocusReason) 
    {
        m_sText = toPlainText();//保存原始文本
    }
    QGraphicsTextItem::focusInEvent(event);
}

void TextItem::focusOutEvent(QFocusEvent* event)
{
    if (event->reason() == Qt::MouseFocusReason && QApplication::mouseButtons() == Qt::RightButton)
    {
        setPlainText(m_sText);
        m_sText.clear();
        setTextInteractionFlags(Qt::NoTextInteraction);//恢复不能编辑状态
        emit EditStatus(false);//编辑完成(发送信号出去)
    }
    else if (event->reason() == Qt::PopupFocusReason)
    {
        //右键弹出菜单时不做处理
    }
    else
    {  //其他情况，包括下面点击回车的情况，编辑成功，发送信号给父对象
        setTextInteractionFlags(Qt::NoTextInteraction);
        emit EditStatus(false);//编辑完成(发送信号出去)
    }
    QGraphicsTextItem::focusOutEvent(event);
}

void TextItem::mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) 
    {//左键双击进入可编辑状态并打开焦点
        emit EditStatus(true);//正在编辑
        setTextInteractionFlags(Qt::TextEditorInteraction);
        setFocus();
        QGraphicsTextItem::mouseDoubleClickEvent(event);
    }
}

void TextItem::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
    {
        //点击回车失去焦点，编辑完成，后续给FocusOutEvent处理
        clearFocus();
    }
    else 
    {
        QGraphicsTextItem::keyPressEvent(event);
    }
}