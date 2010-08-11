#ifndef CACULATOR_H
#define CACULATOR_H

#include <QWidget>

namespace Ui {
    class Caculator;
}

class Caculator : public QWidget {
    Q_OBJECT
public:
    explicit Caculator(QWidget *parent = 0);
    ~Caculator();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Caculator *ui;
};

#endif // CACULATOR_H
