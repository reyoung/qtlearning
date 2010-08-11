#include "caculator.h"
#include "ui_caculator.h"

Caculator::Caculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Caculator)
{
    ui->setupUi(this);
}

Caculator::~Caculator()
{
    delete ui;
}

void Caculator::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
