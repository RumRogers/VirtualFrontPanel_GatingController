#pragma once
#include <QWidget>

namespace Ps{
	class Utils
	{
		public:
			static void DestructorMsg(const QString& msg);
			static void DestructorMsg(const QObject * const qObject);

		private:
			explicit Utils(const Utils& rhs) = delete;
			Utils& operator= (const Utils& rhs) = delete;
	};
}


