/********************************************************************************
** Form generated from reading UI file 'BigData.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIGDATA_H
#define UI_BIGDATA_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "PlaneDraw.h"

QT_BEGIN_NAMESPACE

class Ui_BigDataClass
{
public:
    QGridLayout *gridLayout_5;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *btnSearch;
    QTreeView *treeView;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *edCsvData;
    QPushButton *btnFile;
    QPushButton *btnDataApply;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QQuickWidget *quickWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lbDisplay;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    PlaneDraw *chartView;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QListView *listView;

    void setupUi(QWidget *BigDataClass)
    {
        if (BigDataClass->objectName().isEmpty())
            BigDataClass->setObjectName(QString::fromUtf8("BigDataClass"));
        BigDataClass->resize(1043, 737);
        gridLayout_5 = new QGridLayout(BigDataClass);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_3 = new QWidget(BigDataClass);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(230, 16777215));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        btnSearch = new QPushButton(widget_3);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));

        horizontalLayout->addWidget(btnSearch);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        treeView = new QTreeView(widget_3);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout_4->addWidget(treeView, 1, 0, 1, 1);


        gridLayout_5->addWidget(widget_3, 0, 0, 1, 1);

        widget = new QWidget(BigDataClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        edCsvData = new QLineEdit(widget);
        edCsvData->setObjectName(QString::fromUtf8("edCsvData"));

        horizontalLayout_3->addWidget(edCsvData);

        btnFile = new QPushButton(widget);
        btnFile->setObjectName(QString::fromUtf8("btnFile"));
        btnFile->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_3->addWidget(btnFile);

        btnDataApply = new QPushButton(widget);
        btnDataApply->setObjectName(QString::fromUtf8("btnDataApply"));

        horizontalLayout_3->addWidget(btnDataApply);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(250, 16777215));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        quickWidget = new QQuickWidget(widget_2);
        quickWidget->setObjectName(QString::fromUtf8("quickWidget"));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);

        gridLayout->addWidget(quickWidget, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        lbDisplay = new QLabel(widget_2);
        lbDisplay->setObjectName(QString::fromUtf8("lbDisplay"));
        lbDisplay->setMinimumSize(QSize(50, 50));
        lbDisplay->setMaximumSize(QSize(100, 100));
        lbDisplay->setStyleSheet(QString::fromUtf8("background-color:#000000;"));

        horizontalLayout_2->addWidget(lbDisplay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 1, 2, 1);

        chartView = new PlaneDraw(widget);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        gridLayout_3 = new QGridLayout(chartView);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer = new QSpacerItem(20, 260, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 0, 1, 1);


        gridLayout_2->addWidget(chartView, 1, 0, 1, 1);


        gridLayout_5->addWidget(widget, 0, 1, 1, 1);

        listView = new QListView(BigDataClass);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setMaximumSize(QSize(16777215, 500));

        gridLayout_5->addWidget(listView, 1, 0, 1, 2);


        retranslateUi(BigDataClass);

        QMetaObject::connectSlotsByName(BigDataClass);
    } // setupUi

    void retranslateUi(QWidget *BigDataClass)
    {
        BigDataClass->setWindowTitle(QCoreApplication::translate("BigDataClass", "BigData", nullptr));
        label_3->setText(QCoreApplication::translate("BigDataClass", "\350\257\246\347\273\206\344\273\213\347\273\215", nullptr));
        btnSearch->setText(QCoreApplication::translate("BigDataClass", "\346\220\234\347\264\242", nullptr));
        label_4->setText(QCoreApplication::translate("BigDataClass", "\346\225\260\346\215\256\346\272\220", nullptr));
        btnFile->setText(QCoreApplication::translate("BigDataClass", "...", nullptr));
        btnDataApply->setText(QCoreApplication::translate("BigDataClass", "\345\272\224\347\224\250", nullptr));
        lbDisplay->setText(QString());
        label->setText(QCoreApplication::translate("BigDataClass", "\346\225\260\351\207\217:", nullptr));
        label_2->setText(QCoreApplication::translate("BigDataClass", "2024", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BigDataClass: public Ui_BigDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIGDATA_H
