/********************************************************************************
** Form generated from reading UI file 'PlanToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANTOOLWIDGET_H
#define UI_PLANTOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlanToolWidgetClass
{
public:

    void setupUi(QWidget *PlanToolWidgetClass)
    {
        if (PlanToolWidgetClass->objectName().isEmpty())
            PlanToolWidgetClass->setObjectName(QString::fromUtf8("PlanToolWidgetClass"));
        PlanToolWidgetClass->resize(600, 400);

        retranslateUi(PlanToolWidgetClass);

        QMetaObject::connectSlotsByName(PlanToolWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *PlanToolWidgetClass)
    {
        PlanToolWidgetClass->setWindowTitle(QCoreApplication::translate("PlanToolWidgetClass", "PlanToolWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlanToolWidgetClass: public Ui_PlanToolWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANTOOLWIDGET_H
