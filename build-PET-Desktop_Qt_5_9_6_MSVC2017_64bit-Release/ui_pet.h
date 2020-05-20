/********************************************************************************
** Form generated from reading UI file 'pet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PET_H
#define UI_PET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pet
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QLabel *label_2;
    QPushButton *continuebutton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QMainWindow *pet)
    {
        if (pet->objectName().isEmpty())
            pet->setObjectName(QStringLiteral("pet"));
        pet->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pet->sizePolicy().hasHeightForWidth());
        pet->setSizePolicy(sizePolicy);
        pet->setMinimumSize(QSize(610, 360));
        pet->setMaximumSize(QSize(610, 360));
        centralWidget = new QWidget(pet);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -30, 611, 391));
        widget->setMouseTracking(false);
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/home.gif);\n"
"font: 25 24pt \"\345\276\256\350\275\257\351\233\205\351\273\221 Light\";"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 160, 281, 121));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 16pt \"\345\271\274\345\234\206\";\n"
""));
        continuebutton = new QPushButton(centralWidget);
        continuebutton->setObjectName(QStringLiteral("continuebutton"));
        continuebutton->setGeometry(QRect(270, 330, 75, 23));
        continuebutton->setCursor(QCursor(Qt::PointingHandCursor));
        continuebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 330, 75, 23));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 330, 75, 23));
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 70, 320, 33));
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);\n"
"font: 24pt \"\345\271\274\345\234\206\";"));
        pet->setCentralWidget(centralWidget);

        retranslateUi(pet);

        QMetaObject::connectSlotsByName(pet);
    } // setupUi

    void retranslateUi(QMainWindow *pet)
    {
        pet->setWindowTitle(QApplication::translate("pet", "pet", Q_NULLPTR));
        label_2->setText(QApplication::translate("pet", "  \346\202\250\350\277\230\346\262\241\346\234\211\345\210\233\345\273\272\346\210\226\345\255\230\346\241\243", Q_NULLPTR));
        continuebutton->setText(QApplication::translate("pet", "\346\227\247\347\232\204\346\234\213\345\217\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("pet", "\346\226\260\347\232\204\344\274\231\344\274\264", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("pet", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
        label->setText(QApplication::translate("pet", "\346\254\242\350\277\216\346\235\245\345\210\260\347\224\265\345\255\220\345\256\240\347\211\251\344\270\226\347\225\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pet: public Ui_pet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PET_H
