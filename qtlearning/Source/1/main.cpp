#include <QApplication>
#include <QLabel>
int main(int argc,char** argv)
{
    QApplication app(argc,argv);
    QLabel* label;
    label = new QLabel(0);
    label->setText("Hello Qt");
    label->show();
    return app.exec();
}
