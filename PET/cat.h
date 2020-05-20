#ifndef CAT_H
#define CAT_H

#include <QMainWindow>
#include <QMovie>

namespace Ui {
class cat;
}

class cat : public QMainWindow
{
    Q_OBJECT

public:
    explicit cat(QWidget *parent = nullptr);
    ~cat();

private slots:
    void receiven1();
    void receiven1ham();
    void receiven1pig();
    void on_pushButton_6_clicked();

    void on_cancelbutton_clicked();

    void on_comfirmbutton_clicked();

signals:
    void quit();
    void shown1();
    void showhome();
private:
    Ui::cat *ui;
};

#endif // CAT_H
