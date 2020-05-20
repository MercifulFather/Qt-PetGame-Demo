/********************************************************************************
** Form generated from reading UI file 'death.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEATH_H
#define UI_DEATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_death
{
public:
    QLabel *label;
    QPushButton *backbutton;
    QWidget *widget;
    QLabel *label_2;

    void setupUi(QWidget *death)
    {
        if (death->objectName().isEmpty())
            death->setObjectName(QString::fromUtf8("death"));
        death->resize(610, 360);
        death->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(death);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 70, 271, 33));
        label->setMaximumSize(QSize(621, 351));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\271\274\345\234\206\";\n"
"color: rgb(255, 255, 255);\n"
""));
        backbutton = new QPushButton(death);
        backbutton->setObjectName(QString::fromUtf8("backbutton"));
        backbutton->setGeometry(QRect(200, 180, 211, 51));
        backbutton->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\271\274\345\234\206\";\n"
"border-image: url(:/image/button.png);"));
        widget = new QWidget(death);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -50, 651, 550));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/death.jpg);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 280, 121, 131));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/tombstone.png);"));
        widget->raise();
        backbutton->raise();
        label->raise();

        retranslateUi(death);

        QMetaObject::connectSlotsByName(death);
    } // setupUi

    void retranslateUi(QWidget *death)
    {
        death->setWindowTitle(QCoreApplication::translate("death", "pet", nullptr));
        label->setText(QString());
        backbutton->setText(QCoreApplication::translate("death", "\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class death: public Ui_death {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEATH_H
