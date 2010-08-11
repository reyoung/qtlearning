#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->connect(ui->decLineEdit,SIGNAL(textChanged(QString)),this,SLOT(decEditSlot(QString)));
    this->connect(ui->binLineEdit,SIGNAL(textChanged(QString)),this,SLOT(binEditSlot(QString)));
    this->connect(ui->hexLineEdit,SIGNAL(textChanged(QString)),this,SLOT(hexEditSlot(QString)));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::decEditSlot(QString str)
{
    bool ok;
    int num=str.toInt(&ok,10);
    if(ok)
    {
        this->ui->binLineEdit->setText(QString::number(num,2));
        this->ui->hexLineEdit->setText(QString::number(num,16));
    }
    else
    {
        this->ui->binLineEdit->setText(tr("ERROR"));
        this->ui->hexLineEdit->setText(tr("ERROR"));
    }
}

void Dialog::binEditSlot(QString str)
{
    bool ok;
    int num=str.toInt(&ok,2);
    if(ok)
    {
        this->ui->decLineEdit->setText(QString::number(num,10));
        this->ui->hexLineEdit->setText(QString::number(num,16));
    }
    else
    {
        this->ui->decLineEdit->setText(tr("ERROR"));
        this->ui->hexLineEdit->setText(tr("ERROR"));
    }
}

void Dialog::hexEditSlot(QString str)
{
    bool ok;
    int num=str.toInt(&ok,16);
    if(ok)
    {
        this->ui->decLineEdit->setText(QString::number(num,10));
        this->ui->binLineEdit->setText(QString::number(num,2));
    }
    else
    {
        this->ui->decLineEdit->setText(tr("ERROR"));
        this->ui->binLineEdit->setText(tr("ERROR"));
    }
}
