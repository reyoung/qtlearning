/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Jan 23 21:09:19 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *colorLabel;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *redSpin;
    QSlider *redSlider;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *greenSpin;
    QSlider *greenSlider;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpinBox *blueSpin;
    QSlider *blueSlider;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(164, 243);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        colorLabel = new QLabel(Widget);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(colorLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        redSpin = new QSpinBox(Widget);
        redSpin->setObjectName(QString::fromUtf8("redSpin"));
        redSpin->setMaximum(255);

        verticalLayout->addWidget(redSpin);

        redSlider = new QSlider(Widget);
        redSlider->setObjectName(QString::fromUtf8("redSlider"));
        redSlider->setMaximum(255);
        redSlider->setOrientation(Qt::Vertical);

        verticalLayout->addWidget(redSlider);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        greenSpin = new QSpinBox(Widget);
        greenSpin->setObjectName(QString::fromUtf8("greenSpin"));
        greenSpin->setMaximum(255);

        verticalLayout_2->addWidget(greenSpin);

        greenSlider = new QSlider(Widget);
        greenSlider->setObjectName(QString::fromUtf8("greenSlider"));
        greenSlider->setMaximum(255);
        greenSlider->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(greenSlider);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        blueSpin = new QSpinBox(Widget);
        blueSpin->setObjectName(QString::fromUtf8("blueSpin"));
        blueSpin->setMaximum(255);

        verticalLayout_3->addWidget(blueSpin);

        blueSlider = new QSlider(Widget);
        blueSlider->setObjectName(QString::fromUtf8("blueSlider"));
        blueSlider->setMaximum(255);
        blueSlider->setOrientation(Qt::Vertical);

        verticalLayout_3->addWidget(blueSlider);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(Widget);
        QObject::connect(blueSpin, SIGNAL(valueChanged(int)), blueSlider, SLOT(setValue(int)));
        QObject::connect(blueSlider, SIGNAL(valueChanged(int)), blueSpin, SLOT(setValue(int)));
        QObject::connect(redSlider, SIGNAL(valueChanged(int)), redSpin, SLOT(setValue(int)));
        QObject::connect(redSpin, SIGNAL(valueChanged(int)), redSlider, SLOT(setValue(int)));
        QObject::connect(greenSlider, SIGNAL(valueChanged(int)), greenSpin, SLOT(setValue(int)));
        QObject::connect(greenSpin, SIGNAL(valueChanged(int)), greenSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        colorLabel->setText(QApplication::translate("Widget", "colorLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Red", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "Green", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "Blue", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
