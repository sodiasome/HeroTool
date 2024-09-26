#include "TabToolStackWidget.h"
#include <QHBoxLayout>

TabToolStackWidget::TabToolStackWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	_initUi();
	_connect();
}

TabToolStackWidget::~TabToolStackWidget()
{}

void TabToolStackWidget::addToolWidget(QWidget * widget)
{
	if (widget == nullptr)
		return;
	m_toolPage->addWidget(widget);
	
}

void TabToolStackWidget::setCurrPageIndex(int nIndex)
{
	m_toolPage->setCurrentIndex(nIndex);
}

void TabToolStackWidget::_initUi()
{
	this->setFixedHeight(100);
	m_toolPage = new QStackedWidget;
	m_toolPage->setCurrentIndex(0);

	QHBoxLayout* myLayout = new QHBoxLayout;
	myLayout->setMargin(0);
	myLayout->addWidget(m_toolPage);
	setLayout(myLayout);
}
void TabToolStackWidget::_connect()
{
}

