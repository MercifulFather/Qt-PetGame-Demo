#ifndef PET_H
#define PET_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class pet;
}

class pet : public QMainWindow
{
    Q_OBJECT

public:
    explicit pet(QWidget *parent = nullptr);
    ~pet();
    void loading();

private slots:
    void receiven1();
    void receivedeath();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

    void on_continuebutton_clicked();

signals:
    void shown1();
    void showhome();
    void quit();
private:
    Ui::pet *ui;
};

#endif // PET_H
