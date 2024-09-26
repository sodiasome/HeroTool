/********************************************************************************
** Form generated from reading UI file 'HeroTool.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEROTOOL_H
#define UI_HEROTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HeroToolClass
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QMainWindow *HeroToolClass)
    {
        if (HeroToolClass->objectName().isEmpty())
            HeroToolClass->setObjectName(QString::fromUtf8("HeroToolClass"));
        HeroToolClass->resize(523, 359);
        centralWidget = new QWidget(HeroToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(190, 80, 171, 211));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab::selected{background-color:rgb(85,158,251);}\n"
"QTabBar::tab::!selected{background-color:white;}\n"
"QTabBar::tab::hover{background-color:rgb(255, 255, 127);}\n"
"QTabWidget::pane{\n"
"    border-width:1px;\n"
"    border-top-left-radius:15px;\n"
"    border-color:rgb(255,255,255); \n"
"    border-style: inset;\n"
"    background-color: white;\n"
"	border:0px solid white;\n"
"	border-right-width:10px;\n"
"	border-left-width:10px;\n"
"}"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        HeroToolClass->setCentralWidget(centralWidget);

        retranslateUi(HeroToolClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HeroToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *HeroToolClass)
    {
        HeroToolClass->setWindowTitle(QCoreApplication::translate("HeroToolClass", "HeroTool", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("HeroToolClass", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("HeroToolClass", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HeroToolClass: public Ui_HeroToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEROTOOL_H
