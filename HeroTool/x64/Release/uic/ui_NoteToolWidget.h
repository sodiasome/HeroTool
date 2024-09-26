/********************************************************************************
** Form generated from reading UI file 'NoteToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTETOOLWIDGET_H
#define UI_NOTETOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteToolWidgetClass
{
public:
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rdNodeMode;
    QRadioButton *rdCodeMode;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnAlignmenLeft;
    QPushButton *btnAlignmenMiddle;
    QPushButton *btnAlignmenRight;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnBlod;
    QPushButton *btnUnderLine;
    QPushButton *btnItalic;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btnAlignmenLeft_2;
    QPushButton *btnInsertPicture;
    QPushButton *btnFormat;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnColor;
    QPushButton *btnBkColor;
    QPushButton *btnFont;
    QPushButton *btnInsertCurrTime;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cbLineHeight;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cbFontFamily;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbFontSize;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnNoteDown;
    QPushButton *btnSetName;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox;
    QCheckBox *checkBookFlag;
    QLineEdit *edFileName;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *NoteToolWidgetClass)
    {
        if (NoteToolWidgetClass->objectName().isEmpty())
            NoteToolWidgetClass->setObjectName(QString::fromUtf8("NoteToolWidgetClass"));
        NoteToolWidgetClass->resize(706, 90);
        horizontalLayout_11 = new QHBoxLayout(NoteToolWidgetClass);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        rdNodeMode = new QRadioButton(NoteToolWidgetClass);
        rdNodeMode->setObjectName(QString::fromUtf8("rdNodeMode"));

        verticalLayout_6->addWidget(rdNodeMode);

        rdCodeMode = new QRadioButton(NoteToolWidgetClass);
        rdCodeMode->setObjectName(QString::fromUtf8("rdCodeMode"));

        verticalLayout_6->addWidget(rdCodeMode);


        horizontalLayout_11->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnAlignmenLeft = new QPushButton(NoteToolWidgetClass);
        btnAlignmenLeft->setObjectName(QString::fromUtf8("btnAlignmenLeft"));
        btnAlignmenLeft->setMinimumSize(QSize(30, 30));
        btnAlignmenLeft->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(btnAlignmenLeft);

        btnAlignmenMiddle = new QPushButton(NoteToolWidgetClass);
        btnAlignmenMiddle->setObjectName(QString::fromUtf8("btnAlignmenMiddle"));
        btnAlignmenMiddle->setMinimumSize(QSize(30, 30));
        btnAlignmenMiddle->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(btnAlignmenMiddle);

        btnAlignmenRight = new QPushButton(NoteToolWidgetClass);
        btnAlignmenRight->setObjectName(QString::fromUtf8("btnAlignmenRight"));
        btnAlignmenRight->setMinimumSize(QSize(30, 30));
        btnAlignmenRight->setMaximumSize(QSize(30, 30));

        horizontalLayout_6->addWidget(btnAlignmenRight);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btnBlod = new QPushButton(NoteToolWidgetClass);
        btnBlod->setObjectName(QString::fromUtf8("btnBlod"));
        btnBlod->setMinimumSize(QSize(30, 30));
        btnBlod->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(btnBlod);

        btnUnderLine = new QPushButton(NoteToolWidgetClass);
        btnUnderLine->setObjectName(QString::fromUtf8("btnUnderLine"));
        btnUnderLine->setMinimumSize(QSize(30, 30));
        btnUnderLine->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(btnUnderLine);

        btnItalic = new QPushButton(NoteToolWidgetClass);
        btnItalic->setObjectName(QString::fromUtf8("btnItalic"));
        btnItalic->setMinimumSize(QSize(30, 30));
        btnItalic->setMaximumSize(QSize(30, 30));

        horizontalLayout_7->addWidget(btnItalic);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btnAlignmenLeft_2 = new QPushButton(NoteToolWidgetClass);
        btnAlignmenLeft_2->setObjectName(QString::fromUtf8("btnAlignmenLeft_2"));
        btnAlignmenLeft_2->setMinimumSize(QSize(30, 30));
        btnAlignmenLeft_2->setMaximumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(btnAlignmenLeft_2);

        btnInsertPicture = new QPushButton(NoteToolWidgetClass);
        btnInsertPicture->setObjectName(QString::fromUtf8("btnInsertPicture"));
        btnInsertPicture->setMinimumSize(QSize(30, 30));
        btnInsertPicture->setMaximumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(btnInsertPicture);

        btnFormat = new QPushButton(NoteToolWidgetClass);
        btnFormat->setObjectName(QString::fromUtf8("btnFormat"));
        btnFormat->setMinimumSize(QSize(30, 30));
        btnFormat->setMaximumSize(QSize(30, 30));

        horizontalLayout_9->addWidget(btnFormat);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(86, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_11->addLayout(verticalLayout_4);

        line = new QFrame(NoteToolWidgetClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 6);
        btnColor = new QPushButton(NoteToolWidgetClass);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setMinimumSize(QSize(16, 16));
        btnColor->setMaximumSize(QSize(16, 16));
        btnColor->setAutoFillBackground(false);
        btnColor->setStyleSheet(QString::fromUtf8("background-color:#000000;\n"
"border:none;\n"
"border-radius:8px;"));

        horizontalLayout_4->addWidget(btnColor);

        btnBkColor = new QPushButton(NoteToolWidgetClass);
        btnBkColor->setObjectName(QString::fromUtf8("btnBkColor"));
        btnBkColor->setMinimumSize(QSize(16, 16));
        btnBkColor->setMaximumSize(QSize(16, 16));
        btnBkColor->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;\n"
"border:none;\n"
"border-radius:8px;"));

        horizontalLayout_4->addWidget(btnBkColor);


        verticalLayout_3->addLayout(horizontalLayout_4);

        btnFont = new QPushButton(NoteToolWidgetClass);
        btnFont->setObjectName(QString::fromUtf8("btnFont"));

        verticalLayout_3->addWidget(btnFont);

        btnInsertCurrTime = new QPushButton(NoteToolWidgetClass);
        btnInsertCurrTime->setObjectName(QString::fromUtf8("btnInsertCurrTime"));
        btnInsertCurrTime->setMinimumSize(QSize(30, 30));
        btnInsertCurrTime->setMaximumSize(QSize(30, 30));
        btnInsertCurrTime->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_3->addWidget(btnInsertCurrTime);


        horizontalLayout_11->addLayout(verticalLayout_3);

        line_3 = new QFrame(NoteToolWidgetClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(NoteToolWidgetClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cbLineHeight = new QComboBox(NoteToolWidgetClass);
        cbLineHeight->setObjectName(QString::fromUtf8("cbLineHeight"));

        horizontalLayout_3->addWidget(cbLineHeight);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(NoteToolWidgetClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cbFontFamily = new QComboBox(NoteToolWidgetClass);
        cbFontFamily->setObjectName(QString::fromUtf8("cbFontFamily"));

        horizontalLayout_2->addWidget(cbFontFamily);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(NoteToolWidgetClass);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        cbFontSize = new QComboBox(NoteToolWidgetClass);
        cbFontSize->setObjectName(QString::fromUtf8("cbFontSize"));
        cbFontSize->setEditable(true);

        horizontalLayout->addWidget(cbFontSize);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_11->addLayout(verticalLayout);

        line_4 = new QFrame(NoteToolWidgetClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_11->addWidget(line_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        btnNoteDown = new QPushButton(NoteToolWidgetClass);
        btnNoteDown->setObjectName(QString::fromUtf8("btnNoteDown"));

        verticalLayout_5->addWidget(btnNoteDown);

        btnSetName = new QPushButton(NoteToolWidgetClass);
        btnSetName->setObjectName(QString::fromUtf8("btnSetName"));

        verticalLayout_5->addWidget(btnSetName);


        horizontalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox = new QCheckBox(NoteToolWidgetClass);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_5->addWidget(checkBox);

        checkBookFlag = new QCheckBox(NoteToolWidgetClass);
        checkBookFlag->setObjectName(QString::fromUtf8("checkBookFlag"));

        horizontalLayout_5->addWidget(checkBookFlag);


        verticalLayout_2->addLayout(horizontalLayout_5);

        edFileName = new QLineEdit(NoteToolWidgetClass);
        edFileName->setObjectName(QString::fromUtf8("edFileName"));

        verticalLayout_2->addWidget(edFileName);


        horizontalLayout_11->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(0, 87, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);


        retranslateUi(NoteToolWidgetClass);

        QMetaObject::connectSlotsByName(NoteToolWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *NoteToolWidgetClass)
    {
        NoteToolWidgetClass->setWindowTitle(QCoreApplication::translate("NoteToolWidgetClass", "NoteToolWidget", nullptr));
        rdNodeMode->setText(QCoreApplication::translate("NoteToolWidgetClass", "\347\254\224\350\256\260\346\250\241\345\274\217", nullptr));
        rdCodeMode->setText(QCoreApplication::translate("NoteToolWidgetClass", "\344\273\243\347\240\201\346\250\241\345\274\217", nullptr));
        btnAlignmenLeft->setText(QString());
        btnAlignmenMiddle->setText(QString());
        btnAlignmenRight->setText(QString());
        btnBlod->setText(QString());
        btnUnderLine->setText(QString());
        btnItalic->setText(QString());
        btnAlignmenLeft_2->setText(QCoreApplication::translate("NoteToolWidgetClass", "\350\203\214\346\231\257", nullptr));
        btnInsertPicture->setText(QString());
        btnFormat->setText(QCoreApplication::translate("NoteToolWidgetClass", "\346\240\274\345\274\217\345\210\267", nullptr));
        btnColor->setText(QString());
        btnBkColor->setText(QString());
        btnFont->setText(QCoreApplication::translate("NoteToolWidgetClass", "\345\255\227\344\275\223\346\240\274\345\274\217", nullptr));
        btnInsertCurrTime->setText(QString());
        label_3->setText(QCoreApplication::translate("NoteToolWidgetClass", "\350\241\214\351\253\230", nullptr));
        label_2->setText(QCoreApplication::translate("NoteToolWidgetClass", "\345\255\227\344\275\223", nullptr));
        label->setText(QCoreApplication::translate("NoteToolWidgetClass", "\345\255\227\345\217\267", nullptr));
        cbFontSize->setCurrentText(QCoreApplication::translate("NoteToolWidgetClass", "10", nullptr));
        btnNoteDown->setText(QCoreApplication::translate("NoteToolWidgetClass", "\350\256\260\345\275\225\347\254\224\350\256\260", nullptr));
        btnSetName->setText(QCoreApplication::translate("NoteToolWidgetClass", "\350\256\276\347\275\256\346\226\207\344\273\266\345\220\215", nullptr));
        checkBox->setText(QCoreApplication::translate("NoteToolWidgetClass", "\350\241\214\345\217\267", nullptr));
        checkBookFlag->setText(QCoreApplication::translate("NoteToolWidgetClass", "\344\271\246\347\255\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NoteToolWidgetClass: public Ui_NoteToolWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTETOOLWIDGET_H
