/********************************************************************************
** Form generated from reading UI file 'MediaToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIATOOLWIDGET_H
#define UI_MEDIATOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaToolWidgetClass
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *MediaToolWidgetClass)
    {
        if (MediaToolWidgetClass->objectName().isEmpty())
            MediaToolWidgetClass->setObjectName(QString::fromUtf8("MediaToolWidgetClass"));
        MediaToolWidgetClass->resize(600, 400);
        gridLayout = new QGridLayout(MediaToolWidgetClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(MediaToolWidgetClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(MediaToolWidgetClass);

        QMetaObject::connectSlotsByName(MediaToolWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *MediaToolWidgetClass)
    {
        MediaToolWidgetClass->setWindowTitle(QCoreApplication::translate("MediaToolWidgetClass", "MediaToolWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("MediaToolWidgetClass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MediaToolWidgetClass: public Ui_MediaToolWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIATOOLWIDGET_H
