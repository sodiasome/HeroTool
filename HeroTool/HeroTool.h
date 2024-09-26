#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HeroTool.h"
#include "TopBar.h"
#include "DrawView.h"
#include "NotePad.h"
#include "Plan.h"
#include "BigData.h"
#include "MediaHome.h"
#include "DrawToolWidget.h"
#include "TabToolStackWidget.h"
#include "NoteToolWidget.h"
#include "MediaToolWidget.h"
#include "BigDataToolWidget.h"
#include "PlanToolWidget.h"
#include <QSettings>
#include <QKeyEvent>
#include <QFileInfo>
#include <QFileDialog>

typedef struct FileNode
{
    QFileInfo *info;
    NotePad* pNotePad;//记录ui页面
    DrawView* draw;
    bool bEditting;//文件编辑过
    FileNode()
    {
        info = nullptr;
        pNotePad = nullptr;
        draw = nullptr;
        bEditting = false;
    }
}TabFile;

class HeroTool : public QMainWindow
{
    Q_OBJECT

public:
    HeroTool(QWidget *parent = nullptr);
    ~HeroTool();

    QString getCurrTime();

    enum { ModeDraw = 0, ModeNote, ModePlan, ModeBigData,ModeMedia };
    //边框检测
    enum {
        BorderLeft = 0
        , BorderRight
        , BorderTop
        , BorderBottom
        , BorderTopLeft
        , BorderTopRight
        , BorderBottomLeft
        , BorderBottomRight
        , BorderNone
    };
    int m_mode;//当前场景模式

public slots:
    //文件
    void onNewFile();
    void onOpenFile();
    void onSaveFile();
    void onSaveAnotherFile();
    void onDeleteFile();
    void onBtnSmallClicked();
    void onBtnMaxClicked();
    void onBtnCloseClicked();
    //场景
    void onBtnNoteClicked();
    void onBtnDrawClicked();
    void onBtnPlanClicked();
    void onBtnBigDataClicked();
    void onBtnMediaHomeClicked();
    //状态栏
    void onTimerStatus();
    //tab
    void onTabCloseRequested(int index);

protected:
    bool eventFilter(QObject* watched, QEvent* event) override;
    void keyPressEvent(QKeyEvent* event)override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void closeEvent(QCloseEvent* event)override;

private:
    Ui::HeroToolClass ui;
    QString m_sDefaultDir;//默认目录
    QSettings* m_iniConfig;//配置文件ini

    //工具栏
    QToolBar* m_toolBar;
    QWidget* m_toolWidget;
    //工具栏
    TopBarWidget* mTopBarWidget;
    TabToolStackWidget* m_toolStackWidget;      //工具栏页面管理
    DrawToolWidget* m_toolDrawWidget;           //绘图工具栏
    NoteToolWidget* m_toolNoteWidget;           //笔记工具栏
    MediaToolWidget* m_toolMediaWidget;         //媒体文件
    BigDataToolWidget* m_toolBigDataWidget;
    PlanToolWidget* m_toolPlanWidget;
    //center widget
    
    Plan* m_planWidget;
    BigData* mBigDataWidget;
    MediaHome* m_mediaHomeWidget;
    //底部状态栏
    QWidget* m_statusWidget;
    QLabel* m_lbCurrTime;
    //tab页面记录
    QMap<QString,TabFile*> m_mapTabInfo;     //页面信息
    NotePad* m_notepad;
    DrawView* m_draw;
    //鼠标
    bool m_bMousePress;                 //鼠标是否按下状态
    QRect m_rectMousePress;             //鼠标按下区域
    int m_nBorderPress;                 //鼠标点击边框

    void _initUi();
    void _connectSlot();
    void _connectNotepad(NotePad* notepad);
    void _connectDrawSence(DrawView* drawSence);

    int _checkMouseBorder(QPoint* point);
    QWidget* _tabWidget(int nIndex);
};
