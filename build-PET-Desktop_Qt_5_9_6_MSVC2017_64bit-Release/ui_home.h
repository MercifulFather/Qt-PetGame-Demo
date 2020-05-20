/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QPushButton *exitbutton;
    QPushButton *outdoorbutton;
    QPushButton *savebutton;
    QWidget *widget;
    QLabel *statuslabel;
    QLabel *imagelabel;
    QWidget *bathroomwidget;
    QPushButton *backbutton2;
    QLabel *label_3;
    QLabel *shampoo;
    QLabel *soap;
    QPushButton *shampoobutton;
    QPushButton *soapbutton;
    QLabel *textbathroom;
    QWidget *restaurantwidget;
    QLabel *label_2;
    QPushButton *backbutton1;
    QLabel *beer;
    QLabel *apple;
    QLabel *hamburger;
    QLabel *bbq;
    QLabel *kfc;
    QLabel *icecream;
    QPushButton *beerbutton;
    QPushButton *applebutton;
    QPushButton *bbqbutton;
    QPushButton *hamburgerbutton;
    QPushButton *icecreambutton;
    QPushButton *kfcbutton;
    QLabel *textrestaurant;
    QPushButton *restaurantbutton;
    QPushButton *bathroombutton;
    QWidget *hospitalwidget;
    QLabel *label_4;
    QPushButton *backbutton3;
    QLabel *medicine;
    QPushButton *medicinebutton;
    QLabel *texthospital;
    QPushButton *hospitalbutton;
    QPushButton *toybutton;
    QWidget *toywidget;
    QLabel *label;
    QPushButton *backbutton4;
    QPushButton *ballbutton;
    QPushButton *planebutton;
    QPushButton *bearbutton;
    QLabel *bear;
    QLabel *plane;
    QLabel *ball;
    QLabel *texttoy;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(home->sizePolicy().hasHeightForWidth());
        home->setSizePolicy(sizePolicy);
        home->setMinimumSize(QSize(610, 360));
        home->setMaximumSize(QSize(610, 360));
        exitbutton = new QPushButton(home);
        exitbutton->setObjectName(QStringLiteral("exitbutton"));
        exitbutton->setGeometry(QRect(500, 330, 75, 23));
        exitbutton->setCursor(QCursor(Qt::PointingHandCursor));
        exitbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        outdoorbutton = new QPushButton(home);
        outdoorbutton->setObjectName(QStringLiteral("outdoorbutton"));
        outdoorbutton->setGeometry(QRect(270, 330, 75, 23));
        outdoorbutton->setCursor(QCursor(Qt::PointingHandCursor));
        outdoorbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        savebutton = new QPushButton(home);
        savebutton->setObjectName(QStringLiteral("savebutton"));
        savebutton->setGeometry(QRect(50, 330, 75, 23));
        savebutton->setCursor(QCursor(Qt::PointingHandCursor));
        savebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        widget = new QWidget(home);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -30, 611, 391));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/image/homein.gif);"));
        statuslabel = new QLabel(home);
        statuslabel->setObjectName(QStringLiteral("statuslabel"));
        statuslabel->setGeometry(QRect(30, 30, 181, 281));
        statuslabel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/frame.jpg);\n"
"font: 12pt \"\345\271\274\345\234\206\";"));
        imagelabel = new QLabel(home);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setGeometry(QRect(250, 130, 181, 181));
        bathroomwidget = new QWidget(home);
        bathroomwidget->setObjectName(QStringLiteral("bathroomwidget"));
        bathroomwidget->setGeometry(QRect(0, 0, 610, 360));
        bathroomwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/bathroom.gif);"));
        backbutton2 = new QPushButton(bathroomwidget);
        backbutton2->setObjectName(QStringLiteral("backbutton2"));
        backbutton2->setGeometry(QRect(444, 40, 121, 41));
        backbutton2->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton2->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        label_3 = new QLabel(bathroomwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 100, 171, 221));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/image/box.png);"));
        shampoo = new QLabel(bathroomwidget);
        shampoo->setObjectName(QStringLiteral("shampoo"));
        shampoo->setGeometry(QRect(490, 140, 71, 61));
        shampoo->setStyleSheet(QStringLiteral("border-image: url(:/image/shampoo.png);"));
        soap = new QLabel(bathroomwidget);
        soap->setObjectName(QStringLiteral("soap"));
        soap->setGeometry(QRect(480, 250, 91, 71));
        soap->setStyleSheet(QStringLiteral("border-image: url(:/image/soap.png);"));
        shampoobutton = new QPushButton(bathroomwidget);
        shampoobutton->setObjectName(QStringLiteral("shampoobutton"));
        shampoobutton->setGeometry(QRect(420, 170, 61, 23));
        shampoobutton->setCursor(QCursor(Qt::PointingHandCursor));
        shampoobutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        soapbutton = new QPushButton(bathroomwidget);
        soapbutton->setObjectName(QStringLiteral("soapbutton"));
        soapbutton->setGeometry(QRect(420, 280, 61, 23));
        soapbutton->setCursor(QCursor(Qt::PointingHandCursor));
        soapbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textbathroom = new QLabel(bathroomwidget);
        textbathroom->setObjectName(QStringLiteral("textbathroom"));
        textbathroom->setGeometry(QRect(180, 30, 181, 101));
        textbathroom->setStyleSheet(QStringLiteral("border-image: url(:/image/txeta.png);"));
        restaurantwidget = new QWidget(home);
        restaurantwidget->setObjectName(QStringLiteral("restaurantwidget"));
        restaurantwidget->setGeometry(QRect(0, 0, 610, 360));
        restaurantwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/restaurant.gif);"));
        label_2 = new QLabel(restaurantwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 200, 280));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/box.png);"));
        backbutton1 = new QPushButton(restaurantwidget);
        backbutton1->setObjectName(QStringLiteral("backbutton1"));
        backbutton1->setGeometry(QRect(444, 40, 121, 41));
        backbutton1->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton1->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        beer = new QLabel(restaurantwidget);
        beer->setObjectName(QStringLiteral("beer"));
        beer->setGeometry(QRect(30, 10, 81, 101));
        beer->setStyleSheet(QStringLiteral("border-image: url(:/image/beer.gif);"));
        apple = new QLabel(restaurantwidget);
        apple->setObjectName(QStringLiteral("apple"));
        apple->setGeometry(QRect(160, 40, 71, 81));
        apple->setStyleSheet(QLatin1String("border-image: url(:/image/apple.gif);\n"
""));
        hamburger = new QLabel(restaurantwidget);
        hamburger->setObjectName(QStringLiteral("hamburger"));
        hamburger->setGeometry(QRect(170, 120, 51, 61));
        hamburger->setStyleSheet(QStringLiteral("border-image: url(:/image/hamburger.gif);"));
        bbq = new QLabel(restaurantwidget);
        bbq->setObjectName(QStringLiteral("bbq"));
        bbq->setGeometry(QRect(40, 110, 61, 61));
        bbq->setStyleSheet(QStringLiteral("border-image: url(:/image/bbq.gif);"));
        kfc = new QLabel(restaurantwidget);
        kfc->setObjectName(QStringLiteral("kfc"));
        kfc->setGeometry(QRect(40, 180, 61, 51));
        kfc->setStyleSheet(QStringLiteral("border-image: url(:/image/kfc.png);"));
        icecream = new QLabel(restaurantwidget);
        icecream->setObjectName(QStringLiteral("icecream"));
        icecream->setGeometry(QRect(50, 240, 41, 61));
        icecream->setStyleSheet(QStringLiteral("border-image: url(:/image/icecream.gif);"));
        beerbutton = new QPushButton(restaurantwidget);
        beerbutton->setObjectName(QStringLiteral("beerbutton"));
        beerbutton->setGeometry(QRect(110, 70, 51, 21));
        beerbutton->setCursor(QCursor(Qt::PointingHandCursor));
        beerbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        applebutton = new QPushButton(restaurantwidget);
        applebutton->setObjectName(QStringLiteral("applebutton"));
        applebutton->setGeometry(QRect(230, 70, 51, 21));
        applebutton->setCursor(QCursor(Qt::PointingHandCursor));
        applebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bbqbutton = new QPushButton(restaurantwidget);
        bbqbutton->setObjectName(QStringLiteral("bbqbutton"));
        bbqbutton->setGeometry(QRect(110, 140, 51, 21));
        bbqbutton->setCursor(QCursor(Qt::PointingHandCursor));
        bbqbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        hamburgerbutton = new QPushButton(restaurantwidget);
        hamburgerbutton->setObjectName(QStringLiteral("hamburgerbutton"));
        hamburgerbutton->setGeometry(QRect(230, 140, 51, 21));
        hamburgerbutton->setCursor(QCursor(Qt::PointingHandCursor));
        hamburgerbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        icecreambutton = new QPushButton(restaurantwidget);
        icecreambutton->setObjectName(QStringLiteral("icecreambutton"));
        icecreambutton->setGeometry(QRect(110, 270, 51, 21));
        icecreambutton->setCursor(QCursor(Qt::PointingHandCursor));
        icecreambutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        kfcbutton = new QPushButton(restaurantwidget);
        kfcbutton->setObjectName(QStringLiteral("kfcbutton"));
        kfcbutton->setGeometry(QRect(110, 200, 51, 21));
        kfcbutton->setCursor(QCursor(Qt::PointingHandCursor));
        kfcbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textrestaurant = new QLabel(restaurantwidget);
        textrestaurant->setObjectName(QStringLiteral("textrestaurant"));
        textrestaurant->setGeometry(QRect(410, 100, 181, 101));
        textrestaurant->setStyleSheet(QStringLiteral("border-image: url(:/image/txetb.png);"));
        restaurantbutton = new QPushButton(home);
        restaurantbutton->setObjectName(QStringLiteral("restaurantbutton"));
        restaurantbutton->setGeometry(QRect(500, 30, 75, 23));
        restaurantbutton->setCursor(QCursor(Qt::PointingHandCursor));
        restaurantbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bathroombutton = new QPushButton(home);
        bathroombutton->setObjectName(QStringLiteral("bathroombutton"));
        bathroombutton->setGeometry(QRect(500, 80, 75, 23));
        bathroombutton->setCursor(QCursor(Qt::PointingHandCursor));
        bathroombutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        hospitalwidget = new QWidget(home);
        hospitalwidget->setObjectName(QStringLiteral("hospitalwidget"));
        hospitalwidget->setGeometry(QRect(0, 0, 610, 360));
        hospitalwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/hospital.gif);"));
        label_4 = new QLabel(hospitalwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 120, 161, 201));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/image/box.png);"));
        backbutton3 = new QPushButton(hospitalwidget);
        backbutton3->setObjectName(QStringLiteral("backbutton3"));
        backbutton3->setGeometry(QRect(444, 40, 121, 41));
        backbutton3->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton3->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        medicine = new QLabel(hospitalwidget);
        medicine->setObjectName(QStringLiteral("medicine"));
        medicine->setGeometry(QRect(330, 150, 91, 91));
        medicine->setStyleSheet(QStringLiteral("border-image: url(:/image/medicine.png);"));
        medicinebutton = new QPushButton(hospitalwidget);
        medicinebutton->setObjectName(QStringLiteral("medicinebutton"));
        medicinebutton->setGeometry(QRect(330, 240, 75, 23));
        medicinebutton->setCursor(QCursor(Qt::PointingHandCursor));
        medicinebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        texthospital = new QLabel(hospitalwidget);
        texthospital->setObjectName(QStringLiteral("texthospital"));
        texthospital->setGeometry(QRect(40, 30, 181, 101));
        texthospital->setStyleSheet(QStringLiteral("border-image: url(:/image/txeta.png);"));
        hospitalbutton = new QPushButton(home);
        hospitalbutton->setObjectName(QStringLiteral("hospitalbutton"));
        hospitalbutton->setGeometry(QRect(500, 130, 75, 23));
        hospitalbutton->setCursor(QCursor(Qt::PointingHandCursor));
        hospitalbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        toybutton = new QPushButton(home);
        toybutton->setObjectName(QStringLiteral("toybutton"));
        toybutton->setGeometry(QRect(500, 180, 75, 23));
        toybutton->setCursor(QCursor(Qt::PointingHandCursor));
        toybutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        toywidget = new QWidget(home);
        toywidget->setObjectName(QStringLiteral("toywidget"));
        toywidget->setGeometry(QRect(0, 0, 610, 360));
        toywidget->setStyleSheet(QStringLiteral("border-image: url(:/image/toy.jpg);"));
        label = new QLabel(toywidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 200, 280));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/box.png);"));
        backbutton4 = new QPushButton(toywidget);
        backbutton4->setObjectName(QStringLiteral("backbutton4"));
        backbutton4->setGeometry(QRect(444, 40, 121, 41));
        backbutton4->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton4->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        ballbutton = new QPushButton(toywidget);
        ballbutton->setObjectName(QStringLiteral("ballbutton"));
        ballbutton->setGeometry(QRect(140, 80, 75, 23));
        ballbutton->setCursor(QCursor(Qt::PointingHandCursor));
        ballbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        planebutton = new QPushButton(toywidget);
        planebutton->setObjectName(QStringLiteral("planebutton"));
        planebutton->setGeometry(QRect(140, 140, 75, 23));
        planebutton->setCursor(QCursor(Qt::PointingHandCursor));
        planebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bearbutton = new QPushButton(toywidget);
        bearbutton->setObjectName(QStringLiteral("bearbutton"));
        bearbutton->setGeometry(QRect(140, 210, 75, 23));
        bearbutton->setCursor(QCursor(Qt::PointingHandCursor));
        bearbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bear = new QLabel(toywidget);
        bear->setObjectName(QStringLiteral("bear"));
        bear->setGeometry(QRect(60, 160, 71, 81));
        bear->setStyleSheet(QStringLiteral("border-image: url(:/image/bear.png);"));
        plane = new QLabel(toywidget);
        plane->setObjectName(QStringLiteral("plane"));
        plane->setGeometry(QRect(70, 110, 51, 61));
        plane->setStyleSheet(QStringLiteral("border-image: url(:/image/plane.png);"));
        ball = new QLabel(toywidget);
        ball->setObjectName(QStringLiteral("ball"));
        ball->setGeometry(QRect(60, 50, 61, 51));
        ball->setStyleSheet(QStringLiteral("border-image: url(:/image/ball.gif);"));
        texttoy = new QLabel(toywidget);
        texttoy->setObjectName(QStringLiteral("texttoy"));
        texttoy->setGeometry(QRect(390, 100, 181, 101));
        texttoy->setStyleSheet(QStringLiteral("border-image: url(:/image/txetb.png);"));
        widget->raise();
        statuslabel->raise();
        imagelabel->raise();
        restaurantbutton->raise();
        bathroombutton->raise();
        hospitalbutton->raise();
        toybutton->raise();
        outdoorbutton->raise();
        hospitalwidget->raise();
        bathroomwidget->raise();
        restaurantwidget->raise();
        toywidget->raise();
        savebutton->raise();
        exitbutton->raise();

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QApplication::translate("home", "pet", Q_NULLPTR));
        exitbutton->setText(QApplication::translate("home", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
        outdoorbutton->setText(QApplication::translate("home", "\346\210\267\345\244\226", Q_NULLPTR));
        savebutton->setText(QApplication::translate("home", "\345\255\230\346\241\243", Q_NULLPTR));
        statuslabel->setText(QApplication::translate("home", "\345\261\236\346\200\247", Q_NULLPTR));
        imagelabel->setText(QApplication::translate("home", "image", Q_NULLPTR));
        backbutton2->setText(QApplication::translate("home", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        label_3->setText(QString());
        shampoo->setText(QString());
        soap->setText(QString());
        shampoobutton->setText(QString());
        soapbutton->setText(QString());
        textbathroom->setText(QString());
        label_2->setText(QString());
        backbutton1->setText(QApplication::translate("home", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        beer->setText(QString());
        apple->setText(QString());
        hamburger->setText(QString());
        bbq->setText(QString());
        kfc->setText(QString());
        icecream->setText(QString());
        beerbutton->setText(QString());
        applebutton->setText(QString());
        bbqbutton->setText(QString());
        hamburgerbutton->setText(QString());
        icecreambutton->setText(QString());
        kfcbutton->setText(QString());
        textrestaurant->setText(QString());
        restaurantbutton->setText(QApplication::translate("home", "\345\220\203\351\245\255", Q_NULLPTR));
        bathroombutton->setText(QApplication::translate("home", "\346\264\227\346\274\261", Q_NULLPTR));
        label_4->setText(QString());
        backbutton3->setText(QApplication::translate("home", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        medicine->setText(QString());
        medicinebutton->setText(QString());
        texthospital->setText(QString());
        hospitalbutton->setText(QApplication::translate("home", "\351\227\250\350\257\212", Q_NULLPTR));
        toybutton->setText(QApplication::translate("home", "\347\216\251\345\205\267", Q_NULLPTR));
        label->setText(QString());
        backbutton4->setText(QApplication::translate("home", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        ballbutton->setText(QString());
        planebutton->setText(QString());
        bearbutton->setText(QString());
        bear->setText(QString());
        plane->setText(QString());
        ball->setText(QString());
        texttoy->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
