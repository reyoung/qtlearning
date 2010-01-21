#include <QApplication>
#include <QPushButton>

int main(int argc,char** argv)
{
    QApplication app(argc,argv);
    QPushButton pushButton(0);
    pushButton.setText("Hello Qt");
    QObject::connect(&pushButton,SIGNAL(clicked()),&pushButton,SLOT(close()));
    pushButton.show();
    return app.exec();
}
