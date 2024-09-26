/********************************************************************************
** Form generated from reading UI file 'BigDataToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGDATATOOLWIDGET_H
#define UI_BIGDATATOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BigDataToolWidgetClass
{
public:

    void setupUi(QWidget *BigDataToolWidgetClass)
    {
        if (BigDataToolWidgetClass->objectName().isEmpty())
            BigDataToolWidgetClass->setObjectName(QString::fromUtf8("BigDataToolWidgetClass"));
        BigDataToolWidgetClass->resize(600, 400);

        retranslateUi(BigDataToolWidgetClass);

        QMetaObject::connectSlotsByName(BigDataToolWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *BigDataToolWidgetClass)
    {
        BigDataToolWidgetClass->setWindowTitle(QCoreApplication::translate("BigDataToolWidgetClass", "BigDataToolWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BigDataToolWidgetClass: public Ui_BigDataToolWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGDATATOOLWIDGET_H
