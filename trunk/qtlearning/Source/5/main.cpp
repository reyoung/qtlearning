#include <QApplication>
#include "dialog.h"
int main(int argc,char** argv)
{
    QApplication app(argc,argv);
    Dialog dia(0);
    dia.show();
    return app.exec();
}
