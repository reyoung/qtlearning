#include "window.h"

Window::Window(QWidget *parent)
    : QWidget(parent)
{
    this->pushButton = new QPushButton(this);
    this->label = new QLabel(this);
    this->label->setText(tr("Hello Qt"));
    this->pushButton->setText(tr("&Close"));
    this->setWindowTitle(tr("Hello World"));
    this->layout = new QVBoxLayout(this);
    this->setLayout(this->layout);
    this->layout->addWidget(this->label);
    this->layout->addWidget(this->pushButton);
    this->connect(this->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

Window::~Window()
{

}
