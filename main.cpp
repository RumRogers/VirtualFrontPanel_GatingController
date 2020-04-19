#include "View/startup.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	Ps::Startup startup;
	startup.show();

    return a.exec();
}
