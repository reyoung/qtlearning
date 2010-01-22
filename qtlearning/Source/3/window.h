#ifndef WINDOW_H
#define WINDOW_H

#include <QtGui/QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();
private:
    QLabel* label;
    QPushButton* pushButton;
    QVBoxLayout* layout;
};

#endif // WINDOW_H
