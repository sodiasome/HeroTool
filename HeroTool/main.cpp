#include "HeroTool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HeroTool w;
    w.show();
    return a.exec();
}
