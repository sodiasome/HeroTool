/********************************************************************************
** Form generated from reading UI file 'NoteDownWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEDOWNWINDOW_H
#define UI_NOTEDOWNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteDownWindowClass
{
public:
    QGridLayout *gridLayout;

    void setupUi(QWidget *NoteDownWindowClass)
    {
        if (NoteDownWindowClass->objectName().isEmpty())
            NoteDownWindowClass->setObjectName(QString::fromUtf8("NoteDownWindowClass"));
        NoteDownWindowClass->resize(362, 279);
        gridLayout = new QGridLayout(NoteDownWindowClass);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(NoteDownWindowClass);

        QMetaObject::connectSlotsByName(NoteDownWindowClass);
    } // setupUi

    void retranslateUi(QWidget *NoteDownWindowClass)
    {
        NoteDownWindowClass->setWindowTitle(QCoreApplication::translate("NoteDownWindowClass", "NoteDownWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteDownWindowClass: public Ui_NoteDownWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEDOWNWINDOW_H
