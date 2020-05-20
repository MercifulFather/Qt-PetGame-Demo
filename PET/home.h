#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = nullptr);
    ~home();
    void act();
    int kiss();
    void measure();
    void time1();
    void time2();
    void save();
    int judge();
    void restaurantstatus();
    void bathroomstatus();
    void hospitalstatus();
    void toystatus();

private slots:
    void on_exitbutton_clicked();
    void receivecat();
    void receivepet();
    void receiveoutdoor();
    void on_outdoorbutton_clicked();

    void on_restaurantbutton_clicked();

    void on_bathroombutton_clicked();

    void on_hospitalbutton_clicked();

    void on_toybutton_clicked();

    void on_backbutton2_clicked();

    void on_backbutton3_clicked();

    void on_backbutton1_clicked();

    void on_backbutton4_clicked();

    void on_savebutton_clicked();

    void on_shampoobutton_clicked();

    void on_soapbutton_clicked();

    void on_medicinebutton_clicked();

    void on_applebutton_clicked();

    void on_bbqbutton_clicked();

    void on_beerbutton_clicked();

    void on_hamburgerbutton_clicked();

    void on_icecreambutton_clicked();

    void on_kfcbutton_clicked();

    void on_ballbutton_clicked();

    void on_bearbutton_clicked();

    void on_planebutton_clicked();

signals:
    void quit();
    void showoutdoor();
    void showdeath();
private:
    Ui::home *ui;
};

#endif // HOME_H
