#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPixmap>
#include <QColor>

namespace Ui {
    class Widget;
}

class Widget : public QWidget {
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
    ~Widget();

protected:
    void changeEvent(QEvent *e);
private slots:
    void colorChange();
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
