/********************************************************************************
** Form generated from reading UI file 'MediaHome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAHOME_H
#define UI_MEDIAHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaHomeClass
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeWidget *headTreeWidget;
    QWidget *displayWidget;

    void setupUi(QWidget *MediaHomeClass)
    {
        if (MediaHomeClass->objectName().isEmpty())
            MediaHomeClass->setObjectName(QString::fromUtf8("MediaHomeClass"));
        MediaHomeClass->resize(787, 473);
        horizontalLayout = new QHBoxLayout(MediaHomeClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        headTreeWidget = new QTreeWidget(MediaHomeClass);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        headTreeWidget->setHeaderItem(__qtreewidgetitem);
        headTreeWidget->setObjectName(QString::fromUtf8("headTreeWidget"));
        headTreeWidget->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(headTreeWidget);

        displayWidget = new QWidget(MediaHomeClass);
        displayWidget->setObjectName(QString::fromUtf8("displayWidget"));

        horizontalLayout->addWidget(displayWidget);


        retranslateUi(MediaHomeClass);

        QMetaObject::connectSlotsByName(MediaHomeClass);
    } // setupUi

    void retranslateUi(QWidget *MediaHomeClass)
    {
        MediaHomeClass->setWindowTitle(QCoreApplication::translate("MediaHomeClass", "MediaHome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MediaHomeClass: public Ui_MediaHomeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAHOME_H
