/********************************************************************************
** Form generated from reading UI file 'outdoor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTDOOR_H
#define UI_OUTDOOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            outdoor->setObjectName(QStringLiteral("outdoor"));
        outdoor->resize(610, 360);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outdoor->sizePolicy().hasHeightForWidth());
        outdoor->setSizePolicy(sizePolicy);
        outdoor->setMinimumSize(QSize(610, 360));
        outdoor->setMaximumSize(QSize(610, 360));
        exitbutton = new QPushButton(outdoor);
        exitbutton->setObjectName(QStringLiteral("exitbutton"));
        exitbutton->setGeometry(QRect(500, 330, 75, 23));
        exitbutton->setCursor(QCursor(Qt::PointingHandCursor));
        exitbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        homebutton = new QPushButton(outdoor);
        homebutton->setObjectName(QStringLiteral("homebutton"));
        homebutton->setGeometry(QRect(270, 330, 75, 23));
        homebutton->setCursor(QCursor(Qt::PointingHandCursor));
        homebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        savebutton = new QPushButton(outdoor);
        savebutton->setObjectName(QStringLiteral("savebutton"));
        savebutton->setGeometry(QRect(50, 330, 75, 23));
        savebutton->setCursor(QCursor(Qt::PointingHandCursor));
        savebutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        imagelabel = new QLabel(outdoor);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setGeometry(QRect(250, 130, 181, 181));
        widget = new QWidget(outdoor);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 611, 391));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/image/rain.gif);"));
        workbutton = new QPushButton(outdoor);
        workbutton->setObjectName(QStringLiteral("workbutton"));
        workbutton->setGeometry(QRect(500, 30, 75, 23));
        workbutton->setCursor(QCursor(Qt::PointingHandCursor));
        workbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textlabel = new QLabel(outdoor);
        textlabel->setObjectName(QStringLiteral("textlabel"));
        textlabel->setGeometry(QRect(280, 40, 181, 111));
        textlabel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/textbox.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        workwidget = new QWidget(outdoor);
        workwidget->setObjectName(QStringLiteral("workwidget"));
        workwidget->setGeometry(QRect(0, 0, 610, 360));
        workwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/work.gif);"));
        niwajiangbutton = new QPushButton(workwidget);
        niwajiangbutton->setObjectName(QStringLiteral("niwajiangbutton"));
        niwajiangbutton->setGeometry(QRect(450, 20, 75, 23));
        niwajiangbutton->setCursor(QCursor(Qt::PointingHandCursor));
        niwajiangbutton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/button.png);"));
        baoanbutton = new QPushButton(workwidget);
        baoanbutton->setObjectName(QStringLiteral("baoanbutton"));
        baoanbutton->setGeometry(QRect(450, 60, 75, 23));
        baoanbutton->setCursor(QCursor(Qt::PointingHandCursor));
        baoanbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        kuaidiyuanbutton = new QPushButton(workwidget);
        kuaidiyuanbutton->setObjectName(QStringLiteral("kuaidiyuanbutton"));
        kuaidiyuanbutton->setGeometry(QRect(450, 100, 75, 23));
        kuaidiyuanbutton->setCursor(QCursor(Qt::PointingHandCursor));
        kuaidiyuanbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        mujiangbutton = new QPushButton(workwidget);
        mujiangbutton->setObjectName(QStringLiteral("mujiangbutton"));
        mujiangbutton->setGeometry(QRect(450, 140, 75, 23));
        mujiangbutton->setCursor(QCursor(Qt::PointingHandCursor));
        mujiangbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        yuandingbutton = new QPushButton(workwidget);
        yuandingbutton->setObjectName(QStringLiteral("yuandingbutton"));
        yuandingbutton->setGeometry(QRect(450, 180, 75, 23));
        yuandingbutton->setCursor(QCursor(Qt::PointingHandCursor));
        yuandingbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        shopwidget = new QWidget(outdoor);
        shopwidget->setObjectName(QStringLiteral("shopwidget"));
        shopwidget->setGeometry(QRect(0, 0, 610, 360));
        shopwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/shop.gif);"));
        backbutton = new QPushButton(shopwidget);
        backbutton->setObjectName(QStringLiteral("backbutton"));
        backbutton->setGeometry(QRect(444, 40, 121, 41));
        backbutton->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        label = new QLabel(shopwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 60, 411, 281));
        label->setStyleSheet(QStringLiteral("border-image: url(:/image/goods.png);"));
        label_2 = new QLabel(shopwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 54, 61));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/image/apple.gif);"));
        label_3 = new QLabel(shopwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 250, 61, 51));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/image/ball.gif);"));
        label_4 = new QLabel(shopwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 240, 54, 61));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/image/bear.png);"));
        label_5 = new QLabel(shopwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 10, 54, 61));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/image/bbq.gif);"));
        label_6 = new QLabel(shopwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, -20, 81, 101));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/image/beer.gif);"));
        label_7 = new QLabel(shopwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 30, 41, 51));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/image/hamburger.gif);"));
        label_8 = new QLabel(shopwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(340, 0, 41, 71));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/image/icecream.gif);"));
        label_9 = new QLabel(shopwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 100, 51, 51));
        label_9->setStyleSheet(QStringLiteral("border-image: url(:/image/kfc.png);"));
        label_10 = new QLabel(shopwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 170, 71, 71));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/image/medicine.png);"));
        label_11 = new QLabel(shopwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(180, 240, 54, 71));
        label_11->setStyleSheet(QStringLiteral("border-image: url(:/image/plane.png);"));
        label_12 = new QLabel(shopwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 170, 54, 51));
        label_12->setStyleSheet(QStringLiteral("border-image: url(:/image/shampoo.png);"));
        label_13 = new QLabel(shopwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(180, 170, 81, 61));
        label_13->setStyleSheet(QStringLiteral("border-image: url(:/image/soap.png);"));
        apple = new QPushButton(shopwidget);
        apple->setObjectName(QStringLiteral("apple"));
        apple->setGeometry(QRect(20, 70, 51, 20));
        apple->setCursor(QCursor(Qt::PointingHandCursor));
        apple->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bbq = new QPushButton(shopwidget);
        bbq->setObjectName(QStringLiteral("bbq"));
        bbq->setGeometry(QRect(90, 70, 51, 20));
        bbq->setCursor(QCursor(Qt::PointingHandCursor));
        bbq->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        hamburger = new QPushButton(shopwidget);
        hamburger->setObjectName(QStringLiteral("hamburger"));
        hamburger->setGeometry(QRect(250, 70, 51, 20));
        hamburger->setCursor(QCursor(Qt::PointingHandCursor));
        hamburger->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        beer = new QPushButton(shopwidget);
        beer->setObjectName(QStringLiteral("beer"));
        beer->setGeometry(QRect(170, 70, 51, 20));
        beer->setCursor(QCursor(Qt::PointingHandCursor));
        beer->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        icecream = new QPushButton(shopwidget);
        icecream->setObjectName(QStringLiteral("icecream"));
        icecream->setGeometry(QRect(340, 70, 51, 20));
        icecream->setCursor(QCursor(Qt::PointingHandCursor));
        icecream->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        kfc = new QPushButton(shopwidget);
        kfc->setObjectName(QStringLiteral("kfc"));
        kfc->setGeometry(QRect(20, 150, 51, 20));
        kfc->setCursor(QCursor(Qt::PointingHandCursor));
        kfc->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        soap = new QPushButton(shopwidget);
        soap->setObjectName(QStringLiteral("soap"));
        soap->setGeometry(QRect(190, 230, 51, 20));
        soap->setCursor(QCursor(Qt::PointingHandCursor));
        soap->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        medicine = new QPushButton(shopwidget);
        medicine->setObjectName(QStringLiteral("medicine"));
        medicine->setGeometry(QRect(20, 230, 51, 20));
        medicine->setCursor(QCursor(Qt::PointingHandCursor));
        medicine->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        shampoo = new QPushButton(shopwidget);
        shampoo->setObjectName(QStringLiteral("shampoo"));
        shampoo->setGeometry(QRect(110, 230, 51, 20));
        shampoo->setCursor(QCursor(Qt::PointingHandCursor));
        shampoo->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        plane = new QPushButton(shopwidget);
        plane->setObjectName(QStringLiteral("plane"));
        plane->setGeometry(QRect(190, 310, 51, 20));
        plane->setCursor(QCursor(Qt::PointingHandCursor));
        plane->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        ball = new QPushButton(shopwidget);
        ball->setObjectName(QStringLiteral("ball"));
        ball->setGeometry(QRect(20, 310, 51, 20));
        ball->setCursor(QCursor(Qt::PointingHandCursor));
        ball->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        bear = new QPushButton(shopwidget);
        bear->setObjectName(QStringLiteral("bear"));
        bear->setGeometry(QRect(100, 310, 51, 20));
        bear->setCursor(QCursor(Qt::PointingHandCursor));
        bear->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        shoplabel = new QLabel(shopwidget);
        shoplabel->setObjectName(QStringLiteral("shoplabel"));
        shoplabel->setGeometry(QRect(410, 90, 171, 81));
        shoplabel->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txetb.png);\n"
"font: 10pt \"\345\271\274\345\234\206\";"));
        shopbutton = new QPushButton(outdoor);
        shopbutton->setObjectName(QStringLiteral("shopbutton"));
        shopbutton->setGeometry(QRect(500, 80, 75, 23));
        shopbutton->setCursor(QCursor(Qt::PointingHandCursor));
        shopbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        poolbutton = new QPushButton(outdoor);
        poolbutton->setObjectName(QStringLiteral("poolbutton"));
        poolbutton->setGeometry(QRect(30, 180, 75, 23));
        poolbutton->setCursor(QCursor(Qt::PointingHandCursor));
        poolbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        riverbutton = new QPushButton(outdoor);
        riverbutton->setObjectName(QStringLiteral("riverbutton"));
        riverbutton->setGeometry(QRect(30, 80, 75, 23));
        riverbutton->setCursor(QCursor(Qt::PointingHandCursor));
        riverbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        park = new QPushButton(outdoor);
        park->setObjectName(QStringLiteral("park"));
        park->setGeometry(QRect(30, 30, 75, 23));
        park->setCursor(QCursor(Qt::PointingHandCursor));
        park->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        stationbutton = new QPushButton(outdoor);
        stationbutton->setObjectName(QStringLiteral("stationbutton"));
        stationbutton->setGeometry(QRect(30, 130, 75, 23));
        stationbutton->setCursor(QCursor(Qt::PointingHandCursor));
        stationbutton->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        parkwidget = new QWidget(outdoor);
        parkwidget->setObjectName(QStringLiteral("parkwidget"));
        parkwidget->setGeometry(QRect(0, 0, 610, 360));
        backbutton3 = new QPushButton(parkwidget);
        backbutton3->setObjectName(QStringLiteral("backbutton3"));
        backbutton3->setGeometry(QRect(444, 40, 121, 41));
        backbutton3->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton3->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        parklabel = new QLabel(parkwidget);
        parklabel->setObjectName(QStringLiteral("parklabel"));
        parklabel->setGeometry(QRect(-20, -20, 631, 381));
        textpark = new QLabel(parkwidget);
        textpark->setObjectName(QStringLiteral("textpark"));
        textpark->setGeometry(QRect(40, 20, 211, 101));
        textpark->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        parklabel->raise();
        backbutton3->raise();
        textpark->raise();
        riverwidget = new QWidget(outdoor);
        riverwidget->setObjectName(QStringLiteral("riverwidget"));
        riverwidget->setGeometry(QRect(0, 0, 610, 360));
        riverwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/river.gif);"));
        backbutton4 = new QPushButton(riverwidget);
        backbutton4->setObjectName(QStringLiteral("backbutton4"));
        backbutton4->setGeometry(QRect(444, 40, 121, 41));
        backbutton4->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton4->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textriver = new QLabel(riverwidget);
        textriver->setObjectName(QStringLiteral("textriver"));
        textriver->setGeometry(QRect(40, 20, 211, 101));
        textriver->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        stationwidget = new QWidget(outdoor);
        stationwidget->setObjectName(QStringLiteral("stationwidget"));
        stationwidget->setGeometry(QRect(0, 0, 610, 360));
        stationwidget->setStyleSheet(QStringLiteral("border-image: url(:/image/station.gif);"));
        backbutton5 = new QPushButton(stationwidget);
        backbutton5->setObjectName(QStringLiteral("backbutton5"));
        backbutton5->setGeometry(QRect(444, 40, 121, 41));
        backbutton5->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton5->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textstation = new QLabel(stationwidget);
        textstation->setObjectName(QStringLiteral("textstation"));
        textstation->setGeometry(QRect(40, 20, 211, 101));
        textstation->setStyleSheet(QString::fromUtf8("border-image: url(:/image/txeta.png);\n"
"font: 14pt \"\345\271\274\345\234\206\";"));
        poolwidget = new QWidget(outdoor);
        poolwidget->setObjectName(QStringLiteral("poolwidget"));
        poolwidget->setGeometry(QRect(0, 0, 610, 360));
        poolwidget->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/pool.gif);"));
        backbutton6 = new QPushButton(poolwidget);
        backbutton6->setObjectName(QStringLiteral("backbutton6"));
        backbutton6->setGeometry(QRect(444, 40, 121, 41));
        backbutton6->setCursor(QCursor(Qt::PointingHandCursor));
        backbutton6->setStyleSheet(QStringLiteral("border-image: url(:/image/button.png);"));
        textpool = new QLabel(poolwidget);
        textpool->setObjectName(QStringLiteral("textpool"));
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
        outdoor->setWindowTitle(QApplication::translate("outdoor", "pet", Q_NULLPTR));
        exitbutton->setText(QApplication::translate("outdoor", "\351\200\200\345\207\272\346\270\270\346\210\217", Q_NULLPTR));
        homebutton->setText(QApplication::translate("outdoor", "\345\233\236\345\256\266", Q_NULLPTR));
        savebutton->setText(QApplication::translate("outdoor", "\345\255\230\346\241\243", Q_NULLPTR));
        imagelabel->setText(QApplication::translate("outdoor", "image", Q_NULLPTR));
        workbutton->setText(QApplication::translate("outdoor", "\346\211\223\345\267\245", Q_NULLPTR));
        textlabel->setText(QString());
        niwajiangbutton->setText(QApplication::translate("outdoor", "\346\263\245\347\223\246\345\214\240", Q_NULLPTR));
        baoanbutton->setText(QApplication::translate("outdoor", "\344\277\235\345\256\211", Q_NULLPTR));
        kuaidiyuanbutton->setText(QApplication::translate("outdoor", "\345\277\253\351\200\222\345\221\230", Q_NULLPTR));
        mujiangbutton->setText(QApplication::translate("outdoor", "\346\234\250\345\214\240", Q_NULLPTR));
        yuandingbutton->setText(QApplication::translate("outdoor", "\345\233\255\344\270\201", Q_NULLPTR));
        backbutton->setText(QApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
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
        apple->setText(QApplication::translate("outdoor", "2\345\205\203", Q_NULLPTR));
        bbq->setText(QApplication::translate("outdoor", "5\345\205\203", Q_NULLPTR));
        hamburger->setText(QApplication::translate("outdoor", "3\345\205\203", Q_NULLPTR));
        beer->setText(QApplication::translate("outdoor", "3\345\205\203", Q_NULLPTR));
        icecream->setText(QApplication::translate("outdoor", "1\345\205\203", Q_NULLPTR));
        kfc->setText(QApplication::translate("outdoor", "10\345\205\203", Q_NULLPTR));
        soap->setText(QApplication::translate("outdoor", "5\345\205\203", Q_NULLPTR));
        medicine->setText(QApplication::translate("outdoor", "5\345\205\203", Q_NULLPTR));
        shampoo->setText(QApplication::translate("outdoor", "3\345\205\203", Q_NULLPTR));
        plane->setText(QApplication::translate("outdoor", "4\345\205\203", Q_NULLPTR));
        ball->setText(QApplication::translate("outdoor", "5\345\205\203", Q_NULLPTR));
        bear->setText(QApplication::translate("outdoor", "4\345\205\203", Q_NULLPTR));
        shoplabel->setText(QString());
        shopbutton->setText(QApplication::translate("outdoor", "\345\225\206\345\272\227", Q_NULLPTR));
        poolbutton->setText(QApplication::translate("outdoor", "\346\261\240\345\241\230", Q_NULLPTR));
        riverbutton->setText(QApplication::translate("outdoor", "\346\261\237\350\276\271", Q_NULLPTR));
        park->setText(QApplication::translate("outdoor", "\345\205\254\345\233\255", Q_NULLPTR));
        stationbutton->setText(QApplication::translate("outdoor", "\350\275\246\347\253\231", Q_NULLPTR));
        backbutton3->setText(QApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        parklabel->setText(QString());
        textpark->setText(QString());
        backbutton4->setText(QApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        textriver->setText(QString());
        backbutton5->setText(QApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        textstation->setText(QString());
        backbutton6->setText(QApplication::translate("outdoor", "\347\246\273\345\274\200\350\277\231\345\204\277", Q_NULLPTR));
        textpool->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class outdoor: public Ui_outdoor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTDOOR_H
