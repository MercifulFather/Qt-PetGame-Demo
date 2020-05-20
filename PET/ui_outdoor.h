/********************************************************************************
** Form generated from reading UI file 'outdoor.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTDOOR_H
#define UI_OUTDOOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_outdoor
{
public:
    QPushButton *exitbutton;
    QPushButton *homebutton;
    QPushButton *savebutton;
    QLabel *imagelabel;
    QWidget *widget;
    QPushButton *workbutton;
    QLabel *textlabel;
    QWidget *workwidget;
    QPushButton *niwajiangbutton;
    QPushButton *baoanbutton;
    QPushButton *kuaidiyuanbutton;
    QPushButton *mujiangbutton;
    QPushButton *yuandingbutton;
    QWidget *shopwidget;
    QPushButton *backbutton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *apple;
    QPushButton *bbq;
    QPushButton *hamburger;
    QPushButton *beer;
    QPushButton *icecream;
    QPushButton *kfc;
    QPushButton *soap;
    QPushButton *medicine;
    QPushButton *shampoo;
    QPushButton *plane;
    QPushButton *ball;
    QPushButton *bear;
    QLabel *shoplabel;
    QPushButton *shopbutton;
    QPushButton *poolbutton;
    QPushButton *riverbutton;
    QPushButton *park;
    QPushButton *stationbutton;
    QWidget *parkwidget;
    QPushButton *backbutton3;
    QLabel *parklabel;
    QLabel *textpark;
    QWidget *riverwidget;
    QPushButton *backbutton4;
    QLabel *textriver;
    QWidget *stationwidget;
    QPushButton *backbutton5;
    QLabel *textstation;
    QWidget *poolwidget;
    QPushButton *backbutton6;
    QLabel *textpool;

    void setupUi(QWidget *outdoor)
    {
        if (outdoor->objectName().isEmpty())
            outdoor->setObjectName(QString::fromUtf8("outdoor"));
        outdoor->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outdoor->sizePolicy().hasHeightForWidth());
        outdoor->setSizePolicy(sizePolicy);
        outdoor->setMinimumSize(QSize(610, 360));
        outdoor->setMaximumSize(QSize(610, 360));
        exitbutton = new QPushButton(outdoor);
        exitbutton->setObjectName(QString::fromUtf8("exitbutton"));
        exitbutton->setGeometry(QRect(500, 330, 75, 23));
        exitbutton->setCursor(QCursor(Qt::PointingHandCursor));
        exitbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        homebutton = new QPushButton(outdoor);
        homebutton->setObjectName(QString::fromUtf8("homebutton"));
        homebutton->setGeometry(QRect(270, 330, 75, 23));
        homebutton->setCursor(QCursor(Qt::PointingHandCursor));
        homebutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        savebutton = new QPushButton(outdoor);
        savebutton->setObjectName(QString::fromUtf8("savebutton"));
        savebutton->setGeometry(QRect(50, 330, 75, 23));
        savebutton->setCursor(QCursor(Qt::PointingHandCursor));
        savebutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        imagelabel = new QLabel(outdoor);
        imagelabel->setObjectName(QString::fromUtf8("imagelabel"));
        imagelabel->setGeometry(QRect(250, 130, 181, 181));
        widget = new QWidget(outdoor);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 611, 391));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/rain.gif);"));
        workbutton = new QPushButton(outdoor);
        workbutton->setObjectName(QString::fromUtf8("workbutton"));
        workbutton->setGeometry(QRect(500, 30, 75, 23));
        workbutton->setCursor(QCursor(Qt::PointingHandCursor));
        workbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        textlabel = new QLabel(outdoor);
        textlabel->setObjectName(QString::fromUtf8("textlabel"));
        textlabel->setGeometry(QRect(280, 40, 181, 111));
        textlabel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/textbox.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        workwidget = new QWidget(outdoor);
        workwidget->setObjectName(QString::fromUtf8("workwidget"));
        workwidget->setGeometry(QRect(0, 0, 610, 360));
        workwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/work.gif);"));
        niwajiangbutton = new QPushButton(workwidget);
        niwajiangbutton->setObjectName(QString::fromUtf8("niwajiangbutton"));
        niwajiangbutton->setGeometry(QRect(450, 20, 75, 23));
        niwajiangbutton->setCursor(QCursor(Qt::PointingHandCursor));
        niwajiangbutton->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/button.png);"));
        baoanbutton = new QPushButton(workwidget);
        baoanbutton->setObjectName(QString::fromUtf8("baoanbutton"));
        baoanbutton->setGeometry(QRect(450, 60, 75, 23));
        baoanbutton->setCursor(QCursor(Qt::PointingHandCursor));
        baoanbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        kuaidiyuanbutton = new QPushButton(workwidget);
        kuaidiyuanbutton->setObjectName(QString::fromUtf8("kuaidiyuanbutton"));
        kuaidiyuanbutton->setGeometry(QRect(450, 100, 75, 23));
        kuaidiyuanbutton->setCursor(QCursor(Qt::PointingHandCursor));
        kuaidiyuanbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        mujiangbutton = new QPushButton(workwidget);
        mujiangbutton->setObjectName(QString::fromUtf8("mujiangbutton"));
        mujiangbutton->setGeometry(QRect(450, 140, 75, 23));
        mujiangbutton->setCursor(QCursor(Qt::PointingHandCursor));
        mujiangbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        yuandingbutton = new QPushButton(workwidget);
        yuandingbutton->setObjectName(QString::fromUtf8("yuandingbutton"));
        yuandingbutton->setGeometry(QRect(450, 180, 75, 23));
        yuandingbutton->setCursor(QCursor(Qt::PointingHandCursor));
        yuandingbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        shopwidget = new QWidget(outdoor);
        shopwidget->setObjectName(QString::fromUtf8("shopwidget"));
        shopwidget->setGeometry(QRect(0, 0, 610, 360));
        shopwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/shop.gif);"));
        backbutton = new QPushButton(shopwidget);
        backbutton->setObjectName(QString::fromUtf8("backbutton"));
        backbutton->setGeometry(QRect(444, 40, 121, 41));
        backbutton->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        label = new QLabel(shopwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 60, 411, 281));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/goods.png);"));
        label_2 = new QLabel(shopwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 54, 61));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/apple.gif);"));
        label_3 = new QLabel(shopwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 250, 61, 51));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/ball.gif);"));
        label_4 = new QLabel(shopwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 240, 54, 61));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/bear.png);"));
        label_5 = new QLabel(shopwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 10, 54, 61));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/bbq.gif);"));
        label_6 = new QLabel(shopwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, -20, 81, 101));
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/beer.gif);"));
        label_7 = new QLabel(shopwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(260, 30, 41, 51));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/hamburger.gif);"));
        label_8 = new QLabel(shopwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(340, 0, 41, 71));
        label_8->setStyleSheet(QString::fromUtf8("border-image: url(:/image/icecream.gif);"));
        label_9 = new QLabel(shopwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 100, 51, 51));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/image/kfc.png);"));
        label_10 = new QLabel(shopwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 170, 71, 71));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/image/medicine.png);"));
        label_11 = new QLabel(shopwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 240, 54, 71));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/image/plane.png);"));
        label_12 = new QLabel(shopwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(110, 170, 54, 51));
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/image/shampoo.png);"));
        label_13 = new QLabel(shopwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(180, 170, 81, 61));
        label_13->setStyleSheet(QString::fromUtf8("border-image: url(:/image/soap.png);"));
        apple = new QPushButton(shopwidget);
        apple->setObjectName(QString::fromUtf8("apple"));
        apple->setGeometry(QRect(20, 70, 51, 20));
        apple->setCursor(QCursor(Qt::PointingHandCursor));
        apple->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        bbq = new QPushButton(shopwidget);
        bbq->setObjectName(QString::fromUtf8("bbq"));
        bbq->setGeometry(QRect(90, 70, 51, 20));
        bbq->setCursor(QCursor(Qt::PointingHandCursor));
        bbq->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        hamburger = new QPushButton(shopwidget);
        hamburger->setObjectName(QString::fromUtf8("hamburger"));
        hamburger->setGeometry(QRect(250, 70, 51, 20));
        hamburger->setCursor(QCursor(Qt::PointingHandCursor));
        hamburger->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        beer = new QPushButton(shopwidget);
        beer->setObjectName(QString::fromUtf8("beer"));
        beer->setGeometry(QRect(170, 70, 51, 20));
        beer->setCursor(QCursor(Qt::PointingHandCursor));
        beer->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        icecream = new QPushButton(shopwidget);
        icecream->setObjectName(QString::fromUtf8("icecream"));
        icecream->setGeometry(QRect(340, 70, 51, 20));
        icecream->setCursor(QCursor(Qt::PointingHandCursor));
        icecream->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        kfc = new QPushButton(shopwidget);
        kfc->setObjectName(QString::fromUtf8("kfc"));
        kfc->setGeometry(QRect(20, 150, 51, 20));
        kfc->setCursor(QCursor(Qt::PointingHandCursor));
        kfc->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        soap = new QPushButton(shopwidget);
        soap->setObjectName(QString::fromUtf8("soap"));
        soap->setGeometry(QRect(190, 230, 51, 20));
        soap->setCursor(QCursor(Qt::PointingHandCursor));
        soap->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        medicine = new QPushButton(shopwidget);
        medicine->setObjectName(QString::fromUtf8("medicine"));
        medicine->setGeometry(QRect(20, 230, 51, 20));
        medicine->setCursor(QCursor(Qt::PointingHandCursor));
        medicine->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        shampoo = new QPushButton(shopwidget);
        shampoo->setObjectName(QString::fromUtf8("shampoo"));
        shampoo->setGeometry(QRect(110, 230, 51, 20));
        shampoo->setCursor(QCursor(Qt::PointingHandCursor));
        shampoo->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        plane = new QPushButton(shopwidget);
        plane->setObjectName(QString::fromUtf8("plane"));
        plane->setGeometry(QRect(190, 310, 51, 20));
        plane->setCursor(QCursor(Qt::PointingHandCursor));
        plane->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        ball = new QPushButton(shopwidget);
        ball->setObjectName(QString::fromUtf8("ball"));
        ball->setGeometry(QRect(20, 310, 51, 20));
        ball->setCursor(QCursor(Qt::PointingHandCursor));
        ball->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        bear = new QPushButton(shopwidget);
        bear->setObjectName(QString::fromUtf8("bear"));
        bear->setGeometry(QRect(100, 310, 51, 20));
        bear->setCursor(QCursor(Qt::PointingHandCursor));
        bear->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        shoplabel = new QLabel(shopwidget);
        shoplabel->setObjectName(QString::fromUtf8("shoplabel"));
        shoplabel->setGeometry(QRect(410, 90, 171, 81));
        shoplabel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txetb.png);\n"
"font: 10pt \"\345\271\274\345\234\206\";"));
        shopbutton = new QPushButton(outdoor);
        shopbutton->setObjectName(QString::fromUtf8("shopbutton"));
        shopbutton->setGeometry(QRect(500, 80, 75, 23));
        shopbutton->setCursor(QCursor(Qt::PointingHandCursor));
        shopbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        poolbutton = new QPushButton(outdoor);
        poolbutton->setObjectName(QString::fromUtf8("poolbutton"));
        poolbutton->setGeometry(QRect(30, 180, 75, 23));
        poolbutton->setCursor(QCursor(Qt::PointingHandCursor));
        poolbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        riverbutton = new QPushButton(outdoor);
        riverbutton->setObjectName(QString::fromUtf8("riverbutton"));
        riverbutton->setGeometry(QRect(30, 80, 75, 23));
        riverbutton->setCursor(QCursor(Qt::PointingHandCursor));
        riverbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        park = new QPushButton(outdoor);
        park->setObjectName(QString::fromUtf8("park"));
        park->setGeometry(QRect(30, 30, 75, 23));
        park->setCursor(QCursor(Qt::PointingHandCursor));
        park->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        stationbutton = new QPushButton(outdoor);
        stationbutton->setObjectName(QString::fromUtf8("stationbutton"));
        stationbutton->setGeometry(QRect(30, 130, 75, 23));
        stationbutton->setCursor(QCursor(Qt::PointingHandCursor));
        stationbutton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        parkwidget = new QWidget(outdoor);
        parkwidget->setObjectName(QString::fromUtf8("parkwidget"));
        parkwidget->setGeometry(QRect(0, 0, 610, 360));
        backbutton3 = new QPushButton(parkwidget);
        backbutton3->setObjectName(QString::fromUtf8("backbutton3"));
        backbutton3->setGeometry(QRect(444, 40, 121, 41));
        backbutton3->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        parklabel = new QLabel(parkwidget);
        parklabel->setObjectName(QString::fromUtf8("parklabel"));
        parklabel->setGeometry(QRect(-20, -20, 631, 381));
        textpark = new QLabel(parkwidget);
        textpark->setObjectName(QString::fromUtf8("textpark"));
        textpark->setGeometry(QRect(40, 20, 211, 101));
        textpark->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        parklabel->raise();
        backbutton3->raise();
        textpark->raise();
        riverwidget = new QWidget(outdoor);
        riverwidget->setObjectName(QString::fromUtf8("riverwidget"));
        riverwidget->setGeometry(QRect(0, 0, 610, 360));
        riverwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/river.gif);"));
        backbutton4 = new QPushButton(riverwidget);
        backbutton4->setObjectName(QString::fromUtf8("backbutton4"));
        backbutton4->setGeometry(QRect(444, 40, 121, 41));
        backbutton4->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        textriver = new QLabel(riverwidget);
        textriver->setObjectName(QString::fromUtf8("textriver"));
        textriver->setGeometry(QRect(40, 20, 211, 101));
        textriver->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        stationwidget = new QWidget(outdoor);
        stationwidget->setObjectName(QString::fromUtf8("stationwidget"));
        stationwidget->setGeometry(QRect(0, 0, 610, 360));
        stationwidget->setStyleSheet(QString::fromUtf8("border-image: url(:/image/station.gif);"));
        backbutton5 = new QPushButton(stationwidget);
        backbutton5->setObjectName(QString::fromUtf8("backbutton5"));
        backbutton5->setGeometry(QRect(444, 40, 121, 41));
        backbutton5->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        textstation = new QLabel(stationwidget);
        textstation->setObjectName(QString::fromUtf8("textstation"));
        textstation->setGeometry(QRect(40, 20, 211, 101));
        textstation->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        poolwidget = new QWidget(outdoor);
        poolwidget->setObjectName(QString::fromUtf8("poolwidget"));
        poolwidget->setGeometry(QRect(0, 0, 610, 360));
        poolwidget->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/pool.gif);"));
        backbutton6 = new QPushButton(poolwidget);
        backbutton6->setObjectName(QString::fromUtf8("backbutton6"));
        backbutton6->setGeometry(QRect(444, 40, 121, 41));
        backbutton6->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/button.png);"));
        textpool = new QLabel(poolwidget);
        textpool->setObjectName(QString::fromUtf8("textpool"));
        textpool->setGeometry(QRect(40, 20, 211, 101));
        textpool->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        widget->raise();
        workbutton->raise();
        imagelabel->raise();
        textlabel->raise();
        shopbutton->raise();
        homebutton->raise();
        poolbutton->raise();
        riverbutton->raise();
        park->raise();
        stationbutton->raise();
        parkwidget->raise();
        shopwidget->raise();
        workwidget->raise();
        riverwidget->raise();
        stationwidget->raise();
        poolwidget->raise();
        exitbutton->raise();
        savebutton->raise();

        retranslateUi(outdoor);

        QMetaObject::connectSlotsByName(outdoor);
    } // setupUi

    void retranslateUi(QWidget *outdoor)
    {
        outdoor->setWindowTitle(QCoreApplication::translate("outdoor", "pet", nullptr));
        exitbutton->setText(QCoreApplication::translate("outdoor", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        homebutton->setText(QCoreApplication::translate("outdoor", "\345\233\236\345\256\266", nullptr));
        savebutton->setText(QCoreApplication::translate("outdoor", "\345\255\230\346\241\243", nullptr));
        imagelabel->setText(QCoreApplication::translate("outdoor", "image", nullptr));
        workbutton->setText(QCoreApplication::translate("outdoor", "\346\211\223\345\267\245", nullptr));
        textlabel->setText(QString());
        niwajiangbutton->setText(QCoreApplication::translate("outdoor", "\346\263\245\347\223\246\345\214\240", nullptr));
        baoanbutton->setText(QCoreApplication::translate("outdoor", "\344\277\235\345\256\211", nullptr));
        kuaidiyuanbutton->setText(QCoreApplication::translate("outdoor", "\345\277\253\351\200\222\345\221\230", nullptr));
        mujiangbutton->setText(QCoreApplication::translate("outdoor", "\346\234\250\345\214\240", nullptr));
        yuandingbutton->setText(QCoreApplication::translate("outdoor", "\345\233\255\344\270\201", nullptr));
        backbutton->setText(QCoreApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        apple->setText(QCoreApplication::translate("outdoor", "2\345\205\203", nullptr));
        bbq->setText(QCoreApplication::translate("outdoor", "5\345\205\203", nullptr));
        hamburger->setText(QCoreApplication::translate("outdoor", "3\345\205\203", nullptr));
        beer->setText(QCoreApplication::translate("outdoor", "3\345\205\203", nullptr));
        icecream->setText(QCoreApplication::translate("outdoor", "1\345\205\203", nullptr));
        kfc->setText(QCoreApplication::translate("outdoor", "10\345\205\203", nullptr));
        soap->setText(QCoreApplication::translate("outdoor", "5\345\205\203", nullptr));
        medicine->setText(QCoreApplication::translate("outdoor", "5\345\205\203", nullptr));
        shampoo->setText(QCoreApplication::translate("outdoor", "3\345\205\203", nullptr));
        plane->setText(QCoreApplication::translate("outdoor", "4\345\205\203", nullptr));
        ball->setText(QCoreApplication::translate("outdoor", "5\345\205\203", nullptr));
        bear->setText(QCoreApplication::translate("outdoor", "4\345\205\203", nullptr));
        shoplabel->setText(QString());
        shopbutton->setText(QCoreApplication::translate("outdoor", "\345\225\206\345\272\227", nullptr));
        poolbutton->setText(QCoreApplication::translate("outdoor", "\346\261\240\345\241\230", nullptr));
        riverbutton->setText(QCoreApplication::translate("outdoor", "\346\261\237\350\276\271", nullptr));
        park->setText(QCoreApplication::translate("outdoor", "\345\205\254\345\233\255", nullptr));
        stationbutton->setText(QCoreApplication::translate("outdoor", "\350\275\246\347\253\231", nullptr));
        backbutton3->setText(QCoreApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        parklabel->setText(QString());
        textpark->setText(QString());
        backbutton4->setText(QCoreApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        textriver->setText(QString());
        backbutton5->setText(QCoreApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        textstation->setText(QString());
        backbutton6->setText(QCoreApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", nullptr));
        textpool->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class outdoor: public Ui_outdoor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTDOOR_H
