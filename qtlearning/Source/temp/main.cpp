#include <QtGui/QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton b("superjunior only 13!!!");
    b.resize(100,100);
    QObject::connect(&b,SIGNAL(clicked()),&b,SLOT(close()));
    b.show();
    return a.exec();
}
