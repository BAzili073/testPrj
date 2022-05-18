#include <QCoreApplication>
#include "testlib.h"
#include <test_class.h>
#include <QThread>

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
