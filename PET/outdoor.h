#ifndef OUTDOOR_H
#define OUTDOOR_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class outdoor;
}

class outdoor : public QMainWindow
{
    Q_OBJECT

public:
    explicit outdoor(QWidget *parent = nullptr);
    ~outdoor();
    void act();
    void save();

private slots:
    void receivehome();
    void on_exitbutton_clicked();

    void on_workbutton_clicked();

    void on_homebutton_clicked();

    void on_niwajiangbutton_clicked();

    void on_baoanbutton_clicked();

    void on_kuaidiyuanbutton_clicked();

    void on_mujiangbutton_clicked();

    void on_yuandingbutton_clicked();

    void on_shopbutton_clicked();

    void on_backbutton_clicked();

    void on_savebutton_clicked();

    void on_park_clicked();

    void on_backbutton3_clicked();

    void on_backbutton4_clicked();

    void on_backbutton5_clicked();

    void on_backbutton6_clicked();

    void on_riverbutton_clicked();

    void on_stationbutton_clicked();

    void on_poolbutton_clicked();

    void on_apple_clicked();

    void on_bbq_clicked();

    void on_beer_clicked();

    void on_hamburger_clicked();

    void on_icecream_clicked();

    void on_kfc_clicked();

    void on_medicine_clicked();

    void on_shampoo_clicked();

    void on_soap_clicked();

    void on_ball_clicked();

    void on_bear_clicked();

    void on_plane_clicked();

signals:
    void quit();
    void showhome();
private:
    Ui::outdoor *ui;
};

#endif // OUTDOOR_H
