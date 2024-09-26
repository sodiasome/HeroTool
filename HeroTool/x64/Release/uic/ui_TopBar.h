/********************************************************************************
** Form generated from reading UI file 'TopBar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBAR_H
#define UI_TOPBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TopBarClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbIcon;
    QLabel *lbPath;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSmall;
    QPushButton *btnMax;
    QPushButton *btnClose;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnFile;
    QPushButton *btnEdit;
    QPushButton *btnView;
    QPushButton *btnTool;
    QToolButton *btnNote;
    QToolButton *btnDraw;
    QToolButton *btnPlan;
    QToolButton *btnBigData;
    QToolButton *btnMedia;
    QToolButton *btnMedia_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *TopBarClass)
    {
        if (TopBarClass->objectName().isEmpty())
            TopBarClass->setObjectName(QString::fromUtf8("TopBarClass"));
        TopBarClass->resize(534, 77);
        verticalLayout_2 = new QVBoxLayout(TopBarClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbIcon = new QLabel(TopBarClass);
        lbIcon->setObjectName(QString::fromUtf8("lbIcon"));
        lbIcon->setMinimumSize(QSize(25, 25));
        lbIcon->setMaximumSize(QSize(25, 25));
        lbIcon->setStyleSheet(QString::fromUtf8("background-color:#000000;"));

        horizontalLayout_2->addWidget(lbIcon);

        lbPath = new QLabel(TopBarClass);
        lbPath->setObjectName(QString::fromUtf8("lbPath"));
        lbPath->setStyleSheet(QString::fromUtf8("border-style: outset;\n"
"color: #009600;\n"
"min-width:2em;\n"
"font-family:\346\245\267\344\275\223;"));

        horizontalLayout_2->addWidget(lbPath);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnSmall = new QPushButton(TopBarClass);
        btnSmall->setObjectName(QString::fromUtf8("btnSmall"));
        btnSmall->setMinimumSize(QSize(23, 23));
        btnSmall->setMaximumSize(QSize(23, 23));

        horizontalLayout->addWidget(btnSmall);

        btnMax = new QPushButton(TopBarClass);
        btnMax->setObjectName(QString::fromUtf8("btnMax"));
        btnMax->setMinimumSize(QSize(23, 23));
        btnMax->setMaximumSize(QSize(23, 23));

        horizontalLayout->addWidget(btnMax);

        btnClose = new QPushButton(TopBarClass);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMinimumSize(QSize(23, 23));
        btnClose->setMaximumSize(QSize(23, 23));

        horizontalLayout->addWidget(btnClose);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnFile = new QPushButton(TopBarClass);
        btnFile->setObjectName(QString::fromUtf8("btnFile"));
        btnFile->setMaximumSize(QSize(50, 16777215));
        btnFile->setStyleSheet(QString::fromUtf8("border-radius:0;\n"
"width:80px;\n"
"font-size: 16px;"));

        horizontalLayout_3->addWidget(btnFile);

        btnEdit = new QPushButton(TopBarClass);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setMaximumSize(QSize(50, 16777215));
        btnEdit->setStyleSheet(QString::fromUtf8("border-radius:0;\n"
"width:80px;\n"
"font-size: 16px;"));

        horizontalLayout_3->addWidget(btnEdit);

        btnView = new QPushButton(TopBarClass);
        btnView->setObjectName(QString::fromUtf8("btnView"));
        btnView->setMaximumSize(QSize(50, 16777215));
        btnView->setStyleSheet(QString::fromUtf8("border-radius:0;\n"
"width:80px;\n"
"font-size: 16px;"));

        horizontalLayout_3->addWidget(btnView);

        btnTool = new QPushButton(TopBarClass);
        btnTool->setObjectName(QString::fromUtf8("btnTool"));
        btnTool->setMaximumSize(QSize(50, 16777215));
        btnTool->setStyleSheet(QString::fromUtf8("border-radius:0;\n"
"width:80px;\n"
"font-size: 16px;"));

        horizontalLayout_3->addWidget(btnTool);

        btnNote = new QToolButton(TopBarClass);
        btnNote->setObjectName(QString::fromUtf8("btnNote"));
        btnNote->setMaximumSize(QSize(50, 16777215));
        btnNote->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnNote);

        btnDraw = new QToolButton(TopBarClass);
        btnDraw->setObjectName(QString::fromUtf8("btnDraw"));
        btnDraw->setMaximumSize(QSize(50, 16777215));
        btnDraw->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnDraw);

        btnPlan = new QToolButton(TopBarClass);
        btnPlan->setObjectName(QString::fromUtf8("btnPlan"));
        btnPlan->setMaximumSize(QSize(50, 16777215));
        btnPlan->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnPlan);

        btnBigData = new QToolButton(TopBarClass);
        btnBigData->setObjectName(QString::fromUtf8("btnBigData"));
        btnBigData->setMaximumSize(QSize(50, 16777215));
        btnBigData->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnBigData);

        btnMedia = new QToolButton(TopBarClass);
        btnMedia->setObjectName(QString::fromUtf8("btnMedia"));
        btnMedia->setMaximumSize(QSize(50, 16777215));
        btnMedia->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnMedia);

        btnMedia_2 = new QToolButton(TopBarClass);
        btnMedia_2->setObjectName(QString::fromUtf8("btnMedia_2"));
        btnMedia_2->setMaximumSize(QSize(50, 16777215));
        btnMedia_2->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background-color:#009600;\n"
"	border-style: outset;\n"
"	border-width:2px;\n"
"	border-radius:5px; \n"
"	border-color: #8B7355;\n"
"	font: bold 14px;\n"
"	min-width:2em;\n"
"	color:white;\n"
"	font-family:\345\215\216\346\226\207\346\226\260\351\255\217;\n"
"	padding:2px;\n"
"}\n"
"  QToolButton:hover\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: #DCE2F1;\n"
"	border-style: inset;\n"
"	color:#8B7355;\n"
"}\n"
"QToolButton:!enabled{\n"
"	background-color: rgb(100, 100, 100);\n"
"	border-style: inset;\n"
"}"));

        horizontalLayout_3->addWidget(btnMedia_2);

        horizontalSpacer_2 = new QSpacerItem(58, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(TopBarClass);

        QMetaObject::connectSlotsByName(TopBarClass);
    } // setupUi

    void retranslateUi(QWidget *TopBarClass)
    {
        TopBarClass->setWindowTitle(QCoreApplication::translate("TopBarClass", "TopBar", nullptr));
        lbIcon->setText(QString());
        lbPath->setText(QCoreApplication::translate("TopBarClass", "\346\231\272\350\203\275\345\267\245\345\205\267\351\233\206\345\220\210\343\200\220sodiasome\343\200\221", nullptr));
        btnSmall->setText(QString());
        btnMax->setText(QString());
        btnClose->setText(QString());
        btnFile->setText(QCoreApplication::translate("TopBarClass", "\346\226\207\344\273\266", nullptr));
        btnEdit->setText(QCoreApplication::translate("TopBarClass", "\347\274\226\350\276\221", nullptr));
        btnView->setText(QCoreApplication::translate("TopBarClass", "\350\247\206\345\233\276", nullptr));
        btnTool->setText(QCoreApplication::translate("TopBarClass", "\345\267\245\345\205\267", nullptr));
        btnNote->setText(QCoreApplication::translate("TopBarClass", "\347\254\224\350\256\260", nullptr));
        btnDraw->setText(QCoreApplication::translate("TopBarClass", "\347\273\230\345\233\276", nullptr));
        btnPlan->setText(QCoreApplication::translate("TopBarClass", "\350\256\241\345\210\222", nullptr));
        btnBigData->setText(QCoreApplication::translate("TopBarClass", "\346\225\260\346\215\256", nullptr));
        btnMedia->setText(QCoreApplication::translate("TopBarClass", "\345\252\222\344\275\223", nullptr));
        btnMedia_2->setText(QCoreApplication::translate("TopBarClass", "\344\272\272\346\226\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TopBarClass: public Ui_TopBarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBAR_H
