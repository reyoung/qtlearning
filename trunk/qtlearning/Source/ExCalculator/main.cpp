#include <QtGui/QApplication>
#include "caculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Caculator w;
#if defined(Q_WS_S60) || defined(Q_WS_MAEMO_5)
    w.showMaximized();
#else
    w.show();
#endif
    return a.exec();
}
