#include "utils.h"
#include <QDebug>

namespace Ps
{
	static QString DESTRUCTOR_MSG = QStringLiteral("Running the %1 destructor.");

	void Utils::DestructorMsg(const QString& msg)
	{
		qDebug() << DESTRUCTOR_MSG.arg(msg);
	}

	void Utils::DestructorMsg(const QObject * const qObject)
	{
		// I should verify how efficient this is. Looks like "reflection", thus expensive.
		DestructorMsg(qObject->metaObject()->className());
	}
}
