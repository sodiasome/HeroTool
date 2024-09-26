/********************************************************************************
** Form generated from reading UI file 'NotePad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "notecodeeditor.h"
#include "noteediter.h"

QT_BEGIN_NAMESPACE

class Ui_NotePadClass
{
public:
    QGridLayout *gridLayout;
    NoteCodeEditor *edDisplay;
    NoteEditer *edNote;

    void setupUi(QWidget *NotePadClass)
    {
        if (NotePadClass->objectName().isEmpty())
            NotePadClass->setObjectName(QString::fromUtf8("NotePadClass"));
        NotePadClass->resize(614, 530);
        gridLayout = new QGridLayout(NotePadClass);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        edDisplay = new NoteCodeEditor(NotePadClass);
        edDisplay->setObjectName(QString::fromUtf8("edDisplay"));

        gridLayout->addWidget(edDisplay, 0, 0, 1, 1);

        edNote = new NoteEditer(NotePadClass);
        edNote->setObjectName(QString::fromUtf8("edNote"));

        gridLayout->addWidget(edNote, 0, 1, 1, 1);


        retranslateUi(NotePadClass);

        QMetaObject::connectSlotsByName(NotePadClass);
    } // setupUi

    void retranslateUi(QWidget *NotePadClass)
    {
        NotePadClass->setWindowTitle(QCoreApplication::translate("NotePadClass", "NotePad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotePadClass: public Ui_NotePadClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
