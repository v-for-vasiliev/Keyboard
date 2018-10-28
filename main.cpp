#include <QtGui/QApplication>
#include "keyboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Keyboard w;
    w.show();

    return a.exec();
}
