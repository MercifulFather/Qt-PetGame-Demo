/********************************************************************************
** Form generated from reading UI file 'n1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_N1_H
#define UI_N1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_n1
{
public:
    QPushButton *pushButton;
    QWidget *widget;

    void setupUi(QWidget *n1)
    {
        if (n1->objectName().isEmpty())
            n1->setObjectName(QStringLiteral("n1"));
        n1->resize(592, 323);
        pushButton = new QPushButton(n1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 230, 171, 81));
        widget = new QWidget(n1);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-1, -1, 591, 341));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/image/8702352_124256521198_2.jpg);"));
        widget->raise();
        pushButton->raise();

        retranslateUi(n1);

        QMetaObject::connectSlotsByName(n1);
    } // setupUi

    void retranslateUi(QWidget *n1)
    {
        n1->setWindowTitle(QApplication::translate("n1", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("n1", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class n1: public Ui_n1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_N1_H
