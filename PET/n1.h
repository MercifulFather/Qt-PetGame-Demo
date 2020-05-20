#ifndef N1_H
#define N1_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class n1;
}

class n1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit n1(QWidget *parent = nullptr);
    ~n1();

private slots:
    void receivepet();
    void receivecat();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_hamsterbutton_clicked();

    void on_pigbutton_clicked();

    void on_backbutton_clicked();

    void on_instructionbutton_clicked();

signals:
    void showpet();
    void showcat();
    void showhamster();
    void showpig();
    void quit();
private:
    Ui::n1 *ui;
};

#endif // N1_H
