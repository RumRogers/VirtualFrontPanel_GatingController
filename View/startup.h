#pragma once
#include <QObject>

namespace Ps
{
	class MainView;
	class SetupTab;

	// Startup is not meant to be used as a base class
	// thus we mark it as "final"
	class Startup final : public QObject
	{
			Q_OBJECT
		public:
			explicit Startup();
			~Startup();

			void show() const;
		private:
			explicit Startup(const Startup& rhs) = delete;
			Startup& operator= (const Startup& rhs) = delete;

			// Since m_mainView should be initialized after m_setupTab,
			// remember to declare it first and follow order in constructor
			// initializer list!
			SetupTab& m_setupTab;
			MainView& m_mainView;
	};
}


