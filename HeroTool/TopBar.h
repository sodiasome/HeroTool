#pragma once
#pragma execution_character_set("utf-8")

#include <QWidget>
#include <QMap>
#include "ui_TopBar.h"

class TopBarWidget : public QWidget
{
	Q_OBJECT

public:
	TopBarWidget(QWidget *parent = nullptr);
	~TopBarWidget();
	void updateFile(QString sFile,QString sColor="#009600");

	enum { ModeDraw = 0, ModeNote, ModePlan, ModeBigData, ModeMedia };
protected:
	virtual void showEvent(QShowEvent* event) override;

signals:
	//button
	void btnSmallClicked();
	void btnMaxClicked();
	void btnCloseClicked();
	//file
	void newFile();
	void openFile();
	void saveFile();
	void antherSaveFile();
	void deleteFile();
	void defaultDir();
	void setNoteDownDir();
	//edit
	void setThemeColor(QString sColor);
	//tools
	void showToolBar(bool bShow);
	
	//notepad
	void btnNoteClicked();
	void btnDrawClicked();
	//plan
	void btnPlanClicked();
	//big data
	void btnBigDataClicked();
	//media
	void btnMediaHomeClicked();
public slots:
	void onBtnModeClicked(int nIdClicked);
public:
	QAction* m_toolItem;//显示工具栏

private:
	void _initUi();
	void _initStyleSheet();
	void _connectSlot();

	Ui::TopBarClass ui;
	QButtonGroup* m_btnGroup;
};
