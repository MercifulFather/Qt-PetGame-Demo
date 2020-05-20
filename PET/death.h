#ifndef DEATH_H
#define DEATH_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class death;
}

class death : public QMainWindow
{
    Q_OBJECT

public:
    explicit death(QWidget *parent = nullptr);
    ~death();

private slots:
    void receivehome();
    void on_backbutton_clicked();

signals:
    void showpet();
private:
    Ui::death *ui;
};

#endif // DEATH_H
