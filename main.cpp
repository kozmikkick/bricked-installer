#include <QtGui/QApplication>
#include <QTimer>

#include "dragons.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    dragons d;
    d.show();

    return a.exec();
}
