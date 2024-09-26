/********************************************************************************
** Form generated from reading UI file 'DrawToolWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWTOOLWIDGET_H
#define UI_DRAWTOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawToolWidgetClass
{
public:
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btnRect;
    QToolButton *btnCircle;
    QToolButton *btnTriangle;
    QToolButton *btnPolygon;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *btnLine;
    QToolButton *btnPen;
    QToolButton *btnText;
    QToolButton *btnErase;
    QFrame *line_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnColor;
    QPushButton *btnBrushColor;
    QPushButton *btnBkColor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QToolButton *toolButton_15;
    QLineEdit *edPenWidth;
    QFrame *line;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *toolButton_13;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *toolButton_16;
    QToolButton *toolButton_17;
    QFrame *line_3;
    QFormLayout *formLayout;
    QToolButton *toolButton_18;
    QToolButton *btnZoomIn;
    QToolButton *toolButton_22;
    QToolButton *btnZoomOut;
    QToolButton *btnZoomOut_2;
    QToolButton *btnMoveLock;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_4;
    QToolButton *toolButton_20;
    QToolButton *toolButton_21;
    QToolButton *btnDeleteSel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *DrawToolWidgetClass)
    {
        if (DrawToolWidgetClass->objectName().isEmpty())
            DrawToolWidgetClass->setObjectName(QString::fromUtf8("DrawToolWidgetClass"));
        DrawToolWidgetClass->resize(584, 106);
        horizontalLayout_8 = new QHBoxLayout(DrawToolWidgetClass);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnRect = new QToolButton(DrawToolWidgetClass);
        btnRect->setObjectName(QString::fromUtf8("btnRect"));
        btnRect->setMinimumSize(QSize(40, 40));
        btnRect->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btnRect);

        btnCircle = new QToolButton(DrawToolWidgetClass);
        btnCircle->setObjectName(QString::fromUtf8("btnCircle"));
        btnCircle->setMinimumSize(QSize(40, 40));
        btnCircle->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btnCircle);

        btnTriangle = new QToolButton(DrawToolWidgetClass);
        btnTriangle->setObjectName(QString::fromUtf8("btnTriangle"));
        btnTriangle->setMinimumSize(QSize(40, 40));
        btnTriangle->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btnTriangle);

        btnPolygon = new QToolButton(DrawToolWidgetClass);
        btnPolygon->setObjectName(QString::fromUtf8("btnPolygon"));
        btnPolygon->setMinimumSize(QSize(40, 40));
        btnPolygon->setMaximumSize(QSize(40, 40));

        horizontalLayout_3->addWidget(btnPolygon);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnLine = new QToolButton(DrawToolWidgetClass);
        btnLine->setObjectName(QString::fromUtf8("btnLine"));
        btnLine->setMinimumSize(QSize(40, 40));
        btnLine->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnLine);

        btnPen = new QToolButton(DrawToolWidgetClass);
        btnPen->setObjectName(QString::fromUtf8("btnPen"));
        btnPen->setMinimumSize(QSize(40, 40));
        btnPen->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnPen);

        btnText = new QToolButton(DrawToolWidgetClass);
        btnText->setObjectName(QString::fromUtf8("btnText"));
        btnText->setMinimumSize(QSize(40, 40));
        btnText->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnText);

        btnErase = new QToolButton(DrawToolWidgetClass);
        btnErase->setObjectName(QString::fromUtf8("btnErase"));
        btnErase->setMinimumSize(QSize(40, 40));
        btnErase->setMaximumSize(QSize(40, 40));

        horizontalLayout_4->addWidget(btnErase);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_2);

        line_2 = new QFrame(DrawToolWidgetClass);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnColor = new QPushButton(DrawToolWidgetClass);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setMinimumSize(QSize(16, 16));
        btnColor->setMaximumSize(QSize(16, 16));
        btnColor->setAutoFillBackground(false);
        btnColor->setStyleSheet(QString::fromUtf8("background-color:#000000;\n"
"border:none;\n"
"border-radius:8px;"));

        horizontalLayout_2->addWidget(btnColor);

        btnBrushColor = new QPushButton(DrawToolWidgetClass);
        btnBrushColor->setObjectName(QString::fromUtf8("btnBrushColor"));
        btnBrushColor->setMinimumSize(QSize(16, 16));
        btnBrushColor->setMaximumSize(QSize(16, 16));
        btnBrushColor->setAutoFillBackground(false);
        btnBrushColor->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;\n"
"border:2px solid #000000;\n"
"border-radius:8px;"));

        horizontalLayout_2->addWidget(btnBrushColor);

        btnBkColor = new QPushButton(DrawToolWidgetClass);
        btnBkColor->setObjectName(QString::fromUtf8("btnBkColor"));
        btnBkColor->setMinimumSize(QSize(16, 16));
        btnBkColor->setMaximumSize(QSize(16, 16));
        btnBkColor->setStyleSheet(QString::fromUtf8("background-color:#FFFFFF;\n"
"border:none;\n"
"border-radius:8px;"));

        horizontalLayout_2->addWidget(btnBkColor);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(DrawToolWidgetClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        toolButton_15 = new QToolButton(DrawToolWidgetClass);
        toolButton_15->setObjectName(QString::fromUtf8("toolButton_15"));
        toolButton_15->setMinimumSize(QSize(50, 25));
        toolButton_15->setMaximumSize(QSize(50, 25));

        horizontalLayout->addWidget(toolButton_15);


        verticalLayout->addLayout(horizontalLayout);

        edPenWidth = new QLineEdit(DrawToolWidgetClass);
        edPenWidth->setObjectName(QString::fromUtf8("edPenWidth"));
        edPenWidth->setMaximumSize(QSize(50, 16777215));

        verticalLayout->addWidget(edPenWidth);


        horizontalLayout_7->addLayout(verticalLayout);

        line = new QFrame(DrawToolWidgetClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        toolButton_13 = new QToolButton(DrawToolWidgetClass);
        toolButton_13->setObjectName(QString::fromUtf8("toolButton_13"));
        toolButton_13->setMinimumSize(QSize(50, 25));
        toolButton_13->setMaximumSize(QSize(50, 25));

        horizontalLayout_5->addWidget(toolButton_13);

        label_3 = new QLabel(DrawToolWidgetClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        toolButton_16 = new QToolButton(DrawToolWidgetClass);
        toolButton_16->setObjectName(QString::fromUtf8("toolButton_16"));
        toolButton_16->setMinimumSize(QSize(50, 25));
        toolButton_16->setMaximumSize(QSize(50, 25));

        horizontalLayout_6->addWidget(toolButton_16);

        toolButton_17 = new QToolButton(DrawToolWidgetClass);
        toolButton_17->setObjectName(QString::fromUtf8("toolButton_17"));
        toolButton_17->setMinimumSize(QSize(50, 25));
        toolButton_17->setMaximumSize(QSize(50, 25));

        horizontalLayout_6->addWidget(toolButton_17);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_3);

        line_3 = new QFrame(DrawToolWidgetClass);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_3);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        toolButton_18 = new QToolButton(DrawToolWidgetClass);
        toolButton_18->setObjectName(QString::fromUtf8("toolButton_18"));
        toolButton_18->setMinimumSize(QSize(50, 25));
        toolButton_18->setMaximumSize(QSize(50, 25));

        formLayout->setWidget(0, QFormLayout::LabelRole, toolButton_18);

        btnZoomIn = new QToolButton(DrawToolWidgetClass);
        btnZoomIn->setObjectName(QString::fromUtf8("btnZoomIn"));
        btnZoomIn->setMinimumSize(QSize(50, 25));
        btnZoomIn->setMaximumSize(QSize(50, 25));

        formLayout->setWidget(1, QFormLayout::LabelRole, btnZoomIn);

        toolButton_22 = new QToolButton(DrawToolWidgetClass);
        toolButton_22->setObjectName(QString::fromUtf8("toolButton_22"));
        toolButton_22->setMinimumSize(QSize(50, 25));
        toolButton_22->setMaximumSize(QSize(50, 25));

        formLayout->setWidget(1, QFormLayout::FieldRole, toolButton_22);

        btnZoomOut = new QToolButton(DrawToolWidgetClass);
        btnZoomOut->setObjectName(QString::fromUtf8("btnZoomOut"));
        btnZoomOut->setMinimumSize(QSize(50, 25));
        btnZoomOut->setMaximumSize(QSize(50, 25));

        formLayout->setWidget(2, QFormLayout::LabelRole, btnZoomOut);

        btnZoomOut_2 = new QToolButton(DrawToolWidgetClass);
        btnZoomOut_2->setObjectName(QString::fromUtf8("btnZoomOut_2"));
        btnZoomOut_2->setMinimumSize(QSize(50, 25));
        btnZoomOut_2->setMaximumSize(QSize(50, 25));

        formLayout->setWidget(2, QFormLayout::FieldRole, btnZoomOut_2);

        btnMoveLock = new QToolButton(DrawToolWidgetClass);
        btnMoveLock->setObjectName(QString::fromUtf8("btnMoveLock"));
        btnMoveLock->setMinimumSize(QSize(30, 30));
        btnMoveLock->setMaximumSize(QSize(30, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, btnMoveLock);


        horizontalLayout_7->addLayout(formLayout);

        line_4 = new QFrame(DrawToolWidgetClass);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        toolButton_20 = new QToolButton(DrawToolWidgetClass);
        toolButton_20->setObjectName(QString::fromUtf8("toolButton_20"));
        toolButton_20->setMinimumSize(QSize(30, 30));
        toolButton_20->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_20);

        toolButton_21 = new QToolButton(DrawToolWidgetClass);
        toolButton_21->setObjectName(QString::fromUtf8("toolButton_21"));
        toolButton_21->setMinimumSize(QSize(30, 30));
        toolButton_21->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(toolButton_21);

        btnDeleteSel = new QToolButton(DrawToolWidgetClass);
        btnDeleteSel->setObjectName(QString::fromUtf8("btnDeleteSel"));
        btnDeleteSel->setMinimumSize(QSize(30, 30));
        btnDeleteSel->setMaximumSize(QSize(30, 30));

        verticalLayout_4->addWidget(btnDeleteSel);


        horizontalLayout_7->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(69, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        retranslateUi(DrawToolWidgetClass);

        QMetaObject::connectSlotsByName(DrawToolWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *DrawToolWidgetClass)
    {
        DrawToolWidgetClass->setWindowTitle(QCoreApplication::translate("DrawToolWidgetClass", "DrawToolWidget", nullptr));
        btnRect->setText(QString());
        btnCircle->setText(QString());
        btnTriangle->setText(QString());
        btnPolygon->setText(QString());
        btnLine->setText(QString());
        btnPen->setText(QString());
        btnText->setText(QString());
        btnErase->setText(QString());
        btnColor->setText(QString());
        btnBrushColor->setText(QString());
        btnBkColor->setText(QString());
        label_2->setText(QCoreApplication::translate("DrawToolWidgetClass", "\346\245\267\344\275\223", nullptr));
        toolButton_15->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\255\227\344\275\223", nullptr));
        edPenWidth->setText(QCoreApplication::translate("DrawToolWidgetClass", "10", nullptr));
        toolButton_13->setText(QCoreApplication::translate("DrawToolWidgetClass", "\346\227\213\350\275\254", nullptr));
        label_3->setText(QCoreApplication::translate("DrawToolWidgetClass", "360\302\260", nullptr));
        toolButton_16->setText(QCoreApplication::translate("DrawToolWidgetClass", "\346\260\264\345\271\263\347\277\273\350\275\254", nullptr));
        toolButton_17->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\236\202\347\233\264\347\277\273\350\275\254", nullptr));
        toolButton_18->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\261\202\347\272\247", nullptr));
        btnZoomIn->setText(QCoreApplication::translate("DrawToolWidgetClass", "\347\274\251\345\260\217", nullptr));
        toolButton_22->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\235\220\346\240\207\347\263\273", nullptr));
        btnZoomOut->setText(QCoreApplication::translate("DrawToolWidgetClass", "\346\224\276\345\244\247", nullptr));
        btnZoomOut_2->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\210\273\345\272\246\345\260\272", nullptr));
        btnMoveLock->setText(QString());
        toolButton_20->setText(QCoreApplication::translate("DrawToolWidgetClass", "\346\250\241\346\235\277", nullptr));
        toolButton_21->setText(QCoreApplication::translate("DrawToolWidgetClass", "\345\212\250\347\224\273", nullptr));
        btnDeleteSel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DrawToolWidgetClass: public Ui_DrawToolWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWTOOLWIDGET_H
