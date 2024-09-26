/********************************************************************************
** Form generated from reading UI file 'DrawView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWVIEW_H
#define UI_DRAWVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawViewClass
{
public:

    void setupUi(QWidget *DrawViewClass)
    {
        if (DrawViewClass->objectName().isEmpty())
            DrawViewClass->setObjectName(QString::fromUtf8("DrawViewClass"));
        DrawViewClass->resize(600, 400);

        retranslateUi(DrawViewClass);

        QMetaObject::connectSlotsByName(DrawViewClass);
    } // setupUi

    void retranslateUi(QWidget *DrawViewClass)
    {
        DrawViewClass->setWindowTitle(QCoreApplication::translate("DrawViewClass", "DrawView", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DrawViewClass: public Ui_DrawViewClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWVIEW_H
