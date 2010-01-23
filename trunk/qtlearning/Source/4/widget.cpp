#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->connect(ui->blueSlider,SIGNAL(valueChanged(int)),this,SLOT(colorChange()));
    this->connect(ui->greenSlider,SIGNAL(valueChanged(int)),this,SLOT(colorChange()));
    this->connect(ui->redSlider,SIGNAL(valueChanged(int)),this,SLOT(colorChange()));
    this->colorChange();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeEvent(QEvent *e)
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

void Widget::colorChange()
{
    QPixmap pixmap(ui->colorLabel->size());
    pixmap.fill(QColor::fromRgb(this->ui->redSlider->value(),this->ui->greenSlider->value(),this->ui->blueSlider->value()));
    this->ui->colorLabel->setPixmap(pixmap);
}
