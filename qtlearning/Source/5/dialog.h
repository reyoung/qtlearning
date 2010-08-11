#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void changeEvent(QEvent *e);
private slots:
    void decEditSlot(QString str);
    void binEditSlot(QString str);
    void hexEditSlot(QString str);
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
