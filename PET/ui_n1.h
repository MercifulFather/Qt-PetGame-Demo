/********************************************************************************
** Form generated from reading UI file 'n1.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_N1_H
#define UI_N1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_n1
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QLabel *label;
    QPushButton *hamsterbutton;
    QPushButton *pigbutton;
    QPushButton *instructionbutton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QWidget *instructionwidget;
    QLabel *structionlabel;
    QPushButton *backbutton;
    QLabel *textlabel;

    void setupUi(QWidget *n1)
    {
        if (n1->objectName().isEmpty())
            n1->setObjectName(QString::fromUtf8("n1"));
        n1->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(n1->sizePolicy().hasHeightForWidth());
        n1->setSizePolicy(sizePolicy);
        n1->setMinimumSize(QSize(610, 360));
        n1->setMaximumSize(QSize(610, 360));
        pushButton = new QPushButton(n1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 330, 75, 23));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        widget = new QWidget(n1);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -30, 611, 391));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/home.gif);"));
        label = new QLabel(n1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 70, 224, 33));
        label->setMaximumSize(QSize(621, 351));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\271\274\345\234\206\";\n"
"color: rgb(0, 0, 0);"));
        hamsterbutton = new QPushButton(n1);
        hamsterbutton->setObjectName(QString::fromUtf8("hamsterbutton"));
        hamsterbutton->setGeometry(QRect(260, 150, 71, 71));
        hamsterbutton->setCursor(QCursor(Qt::PointingHandCursor));
        hamsterbutton->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/hamster.gif);"));
        pigbutton = new QPushButton(n1);
        pigbutton->setObjectName(QString::fromUtf8("pigbutton"));
        pigbutton->setGeometry(QRect(420, 120, 101, 101));
        pigbutton->setCursor(QCursor(Qt::PointingHandCursor));
        pigbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/pig.gif);"));
        instructionbutton = new QPushButton(n1);
        instructionbutton->setObjectName(QString::fromUtf8("instructionbutton"));
        instructionbutton->setGeometry(QRect(270, 330, 75, 23));
        instructionbutton->setCursor(QCursor(Qt::PointingHandCursor));
        instructionbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        pushButton_8 = new QPushButton(n1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(500, 330, 75, 23));
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        pushButton_2 = new QPushButton(n1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 120, 91, 111));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/cat.gif);"));
        instructionwidget = new QWidget(n1);
        instructionwidget->setObjectName(QString::fromUtf8("instructionwidget"));
        instructionwidget->setGeometry(QRect(0, 0, 611, 390));
        structionlabel = new QLabel(instructionwidget);
        structionlabel->setObjectName(QString::fromUtf8("structionlabel"));
        structionlabel->setGeometry(QRect(0, 0, 611, 361));
        structionlabel->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\271\274\345\234\206\";\n"
"color: rgb(255, 255, 255);"));
        backbutton = new QPushButton(instructionwidget);
        backbutton->setObjectName(QString::fromUtf8("backbutton"));
        backbutton->setGeometry(QRect(444, 40, 121, 41));
        backbutton->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        textlabel = new QLabel(instructionwidget);
        textlabel->setObjectName(QString::fromUtf8("textlabel"));
        textlabel->setGeometry(QRect(0, 0, 611, 361));
        textlabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 127);\n"
"font: 75 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));
        structionlabel->raise();
        textlabel->raise();
        backbutton->raise();
        widget->raise();
        pushButton->raise();
        label->raise();
        hamsterbutton->raise();
        pigbutton->raise();
        instructionbutton->raise();
        pushButton_8->raise();
        pushButton_2->raise();
        instructionwidget->raise();

        retranslateUi(n1);

        QMetaObject::connectSlotsByName(n1);
    } // setupUi

    void retranslateUi(QWidget *n1)
    {
        n1->setWindowTitle(QCoreApplication::translate("n1", "pet", nullptr));
        pushButton->setText(QCoreApplication::translate("n1", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("n1", "\350\257\267\351\200\211\346\213\251\344\275\240\347\232\204\344\274\231\344\274\264", nullptr));
        hamsterbutton->setText(QString());
        pigbutton->setText(QString());
        instructionbutton->setText(QCoreApplication::translate("n1", "\345\210\253\347\202\271\350\277\231\344\270\252", nullptr));
        pushButton_8->setText(QCoreApplication::translate("n1", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QString());
        structionlabel->setText(QString());
        backbutton->setText(QCoreApplication::translate("n1", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        textlabel->setText(QCoreApplication::translate("n1", "        \346\270\270\346\210\217\350\257\264\346\230\216\357\274\232\n"
"        1\343\200\201\346\255\244\346\270\270\346\210\217\345\217\257\344\273\245\345\255\230\346\241\243\357\274\214\345\210\206\344\270\272\346\226\260\350\200\201\347\224\250\346\210\267\357\274\214\350\200\201\347\224\250\346\210\267\345\255\230\346\241\243\345\217\252\345\255\230\344\270\200\344\275\215\357\274\214\n"
"        \346\226\260\345\273\272\345\220\216\350\200\201\347\224\250\346\210\267\345\255\230\346\241\243\344\276\277\345\210\240\351\231\244\343\200\202\n"
"        2\343\200\201\346\226\260\347\224\250\346\210\267\351\200\211\346\213\251\351\242\206\345\217\226\345\256\240\347\211\251\345\220\216\357\274\214\344\276\277\346\234\211\344\270\200\344\270\252\345\210\235\345\247\213\345\261\236\346\200\247\357\274\214\345\201\245\345\272\267\345\200\274\344\274\232\n"
"        \351\232\217\347\235\200\351\245\261\351\243\237\345\272\246\345\222\214\351\245\245\346\270\264\345\272\246\346\270\205\346\264\201\345\272\246\350"
                        "\277\207\344\275\216\345\207\217\345\260\221\357\274\214\345\201\245\345\272\267\345\200\274\345\210\260\350\276\2760\346\227\266\357\274\214\345\260\261\n"
"        \344\274\232\345\257\274\350\207\264\346\255\273\344\272\241\343\200\202\n"
"        3\343\200\201\345\277\203\346\203\205\345\200\274\344\274\232\351\232\217\347\235\200\344\275\240\347\232\204\346\264\273\345\212\250\345\242\236\345\212\240\346\210\226\345\207\217\345\260\221\343\200\202\n"
"        4\343\200\201\351\207\221\351\222\261\345\217\257\344\273\245\347\224\250\346\235\245\344\271\260\347\211\251\345\223\201\357\274\214\345\217\257\344\273\245\347\224\250\346\211\223\345\267\245\350\216\267\345\217\226\351\207\221\351\222\261\343\200\202\n"
"        5\343\200\201\346\211\223\345\267\245\346\227\266\344\275\223\345\212\233\344\274\232\346\240\271\346\215\256\344\270\215\345\220\214\345\267\245\344\275\234\345\207\217\345\260\221\357\274\214\346\240\271\346\215\256\345\234\250\345\256\266\345\276\205\347\235\200\347\232\204\346\227\266\351"
                        "\227\264\n"
"        \347\232\204\351\225\277\347\237\255\346\201\242\345\244\215\347\233\270\345\272\224\347\232\204\344\275\223\345\212\233\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class n1: public Ui_n1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_N1_H
