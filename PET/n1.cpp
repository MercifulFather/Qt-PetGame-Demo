#include "n1.h"
#include "ui_n1.h"
#include "struct.h"
using namespace std;

n1::n1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::n1)
{
    ui->setupUi(this);
    ui->instructionwidget->hide();
    QMovie *movie = new QMovie("image/instruction.gif");
    ui->structionlabel->setMovie(movie);
    movie->start();
}

n1::~n1()
{
    delete ui;
}

void n1::receivepet()
{
    this->show();
}

void n1::receivecat()
{
    this->show();
}

void n1::on_pushButton_clicked()
{
    emit showpet();
    this->hide();
}

void n1::on_pushButton_2_clicked()
{
    emit showcat();
    this->hide();
}

void n1::on_pushButton_8_clicked()
{
    emit quit();
}

void n1::on_hamsterbutton_clicked()
{
    emit showhamster();
    this->hide();
}

void n1::on_pigbutton_clicked()
{
    emit showpig();
    this->hide();
}

void n1::on_backbutton_clicked()
{
    ui->instructionwidget->hide();
}

void n1::on_instructionbutton_clicked()
{
    ui->instructionwidget->show();
}
