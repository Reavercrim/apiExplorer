#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("ReaverSoft");
    QCoreApplication::setOrganizationDomain("Reav.er");
    QCoreApplication::setApplicationName("Fdp Finder");

    MainWindow w;
    w.show();

    return a.exec();
}
