/********************************************************************************
** Form generated from reading UI file 'cat.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAT_H
#define UI_CAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cat
{
public:
    QPushButton *pushButton_6;
    QPushButton *cancelbutton;
    QPushButton *comfirmbutton;
    QLabel *label;
    QWidget *widget;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *cat)
    {
        if (cat->objectName().isEmpty())
            cat->setObjectName(QString::fromUtf8("cat"));
        cat->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cat->sizePolicy().hasHeightForWidth());
        cat->setSizePolicy(sizePolicy);
        cat->setMinimumSize(QSize(610, 360));
        cat->setMaximumSize(QSize(610, 360));
        pushButton_6 = new QPushButton(cat);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(500, 330, 75, 23));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        cancelbutton = new QPushButton(cat);
        cancelbutton->setObjectName(QString::fromUtf8("cancelbutton"));
        cancelbutton->setGeometry(QRect(50, 330, 75, 23));
        cancelbutton->setCursor(QCursor(Qt::PointingHandCursor));
        cancelbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        comfirmbutton = new QPushButton(cat);
        comfirmbutton->setObjectName(QString::fromUtf8("comfirmbutton"));
        comfirmbutton->setGeometry(QRect(270, 330, 75, 23));
        comfirmbutton->setCursor(QCursor(Qt::PointingHandCursor));
        comfirmbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        label = new QLabel(cat);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 70, 291, 33));
        label->setMaximumSize(QSize(621, 351));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\271\274\345\234\206\";\n"
"color: rgb(0, 0, 0);"));
        widget = new QWidget(cat);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, -30, 611, 391));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/home.gif);"));
        label_3 = new QLabel(cat);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 180, 144, 24));
        label_3->setMaximumSize(QSize(621, 351));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setStyleSheet(QString::fromUtf8("font: 18pt \"\345\271\274\345\234\206\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(cat);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 210, 131, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\271\274\345\234\206\";"));
        label_2 = new QLabel(cat);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 120, 141, 141));
        label_2->setStyleSheet(QString::fromUtf8(""));
        widget->raise();
        pushButton_6->raise();
        cancelbutton->raise();
        comfirmbutton->raise();
        label->raise();
        label_3->raise();
        lineEdit->raise();
        label_2->raise();

        retranslateUi(cat);

        QMetaObject::connectSlotsByName(cat);
    } // setupUi

    void retranslateUi(QWidget *cat)
    {
        cat->setWindowTitle(QCoreApplication::translate("cat", "pet", nullptr));
        pushButton_6->setText(QCoreApplication::translate("cat", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        cancelbutton->setText(QCoreApplication::translate("cat", "\346\215\242\344\270\200\344\270\252", nullptr));
        comfirmbutton->setText(QCoreApplication::translate("cat", "\345\260\261\345\256\203\344\272\206", nullptr));
        label->setText(QCoreApplication::translate("cat", "\345\256\203\344\273\245\345\220\216\346\230\257\344\275\240\347\232\204\344\274\231\344\274\264\344\272\206", nullptr));
        label_3->setText(QCoreApplication::translate("cat", "\345\256\203\347\232\204\345\220\215\345\255\227\345\217\253\357\274\232", nullptr));
        lineEdit->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cat: public Ui_cat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAT_H
