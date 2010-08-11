/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu Jan 28 20:57:53 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *binLabel;
    QLineEdit *binLineEdit;
    QLabel *decLabel;
    QLineEdit *decLineEdit;
    QLabel *hexLabel;
    QLineEdit *hexLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(274, 123);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        binLabel = new QLabel(Dialog);
        binLabel->setObjectName(QString::fromUtf8("binLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, binLabel);

        binLineEdit = new QLineEdit(Dialog);
        binLineEdit->setObjectName(QString::fromUtf8("binLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, binLineEdit);

        decLabel = new QLabel(Dialog);
        decLabel->setObjectName(QString::fromUtf8("decLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, decLabel);

        decLineEdit = new QLineEdit(Dialog);
        decLineEdit->setObjectName(QString::fromUtf8("decLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, decLineEdit);

        hexLabel = new QLabel(Dialog);
        hexLabel->setObjectName(QString::fromUtf8("hexLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, hexLabel);

        hexLineEdit = new QLineEdit(Dialog);
        hexLineEdit->setObjectName(QString::fromUtf8("hexLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, hexLineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0, QApplication::UnicodeUTF8));
        binLabel->setText(QApplication::translate("Dialog", "Bin:", 0, QApplication::UnicodeUTF8));
        decLabel->setText(QApplication::translate("Dialog", "Dec:", 0, QApplication::UnicodeUTF8));
        hexLabel->setText(QApplication::translate("Dialog", "Hex:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Dialog", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
