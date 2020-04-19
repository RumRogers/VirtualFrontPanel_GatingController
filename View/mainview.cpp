#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "utils.h"

namespace Ps
{
	MainView::MainView(QWidget *parent, SetupTab& setupTab)
		: QMainWindow(parent)
		, ui(new Ui::MainView), m_setupTab(setupTab)
	{
		ui->setupUi(this);
		m_setupTab.setParent(this);
		ui->tabSetup = &m_setupTab;
		ui->loSetupTab->addWidget(&m_setupTab);
	}

	MainView::~MainView()
	{
		Utils::DestructorMsg(this);
		delete ui;
	}
}


