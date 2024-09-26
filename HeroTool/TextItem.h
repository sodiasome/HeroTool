#pragma once

#include <QGraphicsTextItem>
#include <QFocusEvent>
#include <QGraphicsSceneMouseEvent>

class TextItem  : public QGraphicsTextItem
{
    Q_OBJECT
public:
    TextItem(QObject* parent = nullptr);
    ~TextItem();
    QString m_sText;
signals:
    void EditStatus(bool);

protected:
    void focusInEvent(QFocusEvent* event) override;
    void focusOutEvent(QFocusEvent* event) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event)override;
    void keyPressEvent(QKeyEvent* event) override;
};
