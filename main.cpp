#include "plotter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Plotter w;
    w.show();

    return a.exec();
}
