#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

namespace Ps
{
	class SetupTab;

	class MainView : public QMainWindow
	{
			Q_OBJECT

		public:
			explicit MainView(QWidget *parent, SetupTab& setupTab);
			~MainView();

		private:
			Ui::MainView *ui;
			SetupTab& m_setupTab;
	};
}

#endif // MAINVIEW_H
