/********************************************************************************
** Form generated from reading UI file 'Plan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAN_H
#define UI_PLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_PlanClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *lbCalcTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *edBeginTime;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edEndTime;
    QCheckBox *checkCurrTime;
    QSpacerItem *horizontalSpacer;
    QWebEngineView *widgetHtml;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PlanClass)
    {
        if (PlanClass->objectName().isEmpty())
            PlanClass->setObjectName(QString::fromUtf8("PlanClass"));
        PlanClass->resize(804, 765);
        gridLayout = new QGridLayout(PlanClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbCalcTime = new QLabel(PlanClass);
        lbCalcTime->setObjectName(QString::fromUtf8("lbCalcTime"));
        lbCalcTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #333333; /* \346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"    font-size: 14px; /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: bold; /* \345\255\227\344\275\223\347\262\227\347\273\206 */\n"
"    font-family: Arial; /* \345\255\227\344\275\223\345\256\266\346\227\217 */\n"
"}"));

        verticalLayout->addWidget(lbCalcTime);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PlanClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        edBeginTime = new QLineEdit(PlanClass);
        edBeginTime->setObjectName(QString::fromUtf8("edBeginTime"));

        horizontalLayout_2->addWidget(edBeginTime);

        label_2 = new QLabel(PlanClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edEndTime = new QLineEdit(PlanClass);
        edEndTime->setObjectName(QString::fromUtf8("edEndTime"));

        horizontalLayout->addWidget(edEndTime);

        checkCurrTime = new QCheckBox(PlanClass);
        checkCurrTime->setObjectName(QString::fromUtf8("checkCurrTime"));

        horizontalLayout->addWidget(checkCurrTime);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        widgetHtml = new QWebEngineView(PlanClass);
        widgetHtml->setObjectName(QString::fromUtf8("widgetHtml"));
        widgetHtml->setMinimumSize(QSize(0, 600));

        gridLayout->addWidget(widgetHtml, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 670, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(PlanClass);

        QMetaObject::connectSlotsByName(PlanClass);
    } // setupUi

    void retranslateUi(QWidget *PlanClass)
    {
        PlanClass->setWindowTitle(QCoreApplication::translate("PlanClass", "Plan", nullptr));
        lbCalcTime->setText(QCoreApplication::translate("PlanClass", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("PlanClass", "\350\267\235\347\246\273", nullptr));
        label_2->setText(QCoreApplication::translate("PlanClass", "\345\210\260", nullptr));
        checkCurrTime->setText(QCoreApplication::translate("PlanClass", "\345\275\223\345\211\215\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlanClass: public Ui_PlanClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAN_H
