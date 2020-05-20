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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pet
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *pet)
    {
        if (pet->objectName().isEmpty())
            pet->setObjectName(QStringLiteral("pet"));
        pet->resize(610, 330);
        centralWidget = new QWidget(pet);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 611, 351));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/image/8702352_124256521198_2.jpg);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 300, 75, 23));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 300, 75, 23));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 300, 75, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(410, 290, 51, 41));
        pet->setCentralWidget(centralWidget);

        retranslateUi(pet);

        QMetaObject::connectSlotsByName(pet);
    } // setupUi

    void retranslateUi(QMainWindow *pet)
    {
        pet->setWindowTitle(QApplication::translate("pet", "pet", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pet", "\346\226\260\347\232\204\344\274\231\344\274\264", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("pet", "\346\227\247\347\232\204\346\234\213\345\217\213", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("pet", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pet: public Ui_pet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PET_H
