#include "cat.h"
#include "ui_cat.h"
#include "struct.h"
#include <string>
#include "pet.h"
using namespace std;
extern z pets[3];

cat::cat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cat)
{
    ui->setupUi(this);
}

cat::~cat()
{
    delete ui;
}

void cat::receiven1()    //接收n1界面选择cat信号
{
    this->show();
    pets[1].type = 1;       //初始化宠物属性
    pets[1].age = 0;
    pets[1].health = 20;
    pets[1].hunger = 20;
    pets[1].thirsty = 20;
    pets[1].mood = 20;
    pets[1].clean = 20;
    pets[1].money = 20;//无上限
    pets[1].power= 20;
    QMovie *movie = new QMovie("image/cat.gif");
    ui->label_2->setMovie(movie);
    movie->start();
}



void cat::on_pushButton_6_clicked()  //点击退出按钮
{
    emit quit();
}

void cat::receiven1ham()             //接收n1界面选择hamster信号
{
    this->show();
    pets[1].type = 2;       //初始化宠物属性
    pets[1].age = 0;
    pets[1].health = 20;
    pets[1].hunger = 20;
    pets[1].thirsty = 20;
    pets[1].mood = 20;
    pets[1].clean = 20;
    pets[1].money = 20;//无上限
    pets[1].power= 20;
    QMovie *movie1 = new QMovie("image/hamster.gif");
    ui->label_2->setMovie(movie1);
    movie1->start();
}

void cat::receiven1pig()             //接收n1界面选择pig信号
{
    this->show();
    pets[1].type = 3;       //初始化宠物属性
    pets[1].age = 0;
    pets[1].health = 20;
    pets[1].hunger = 20;
    pets[1].thirsty = 20;
    pets[1].mood = 20;
    pets[1].clean = 20;
    pets[1].money = 20;//无上限
    pets[1].power= 20;
    QMovie *movie2 = new QMovie("image/pig.gif");
    ui->label_2->setMovie(movie2);
    movie2->start();
}

void cat::on_cancelbutton_clicked()   //返回上一级界面按钮
{
    emit shown1();
    this->hide();
}

void cat::on_comfirmbutton_clicked()  //确认选择进入下一界面按钮
{
    remove("data.txt");
    pets[1].name = ui->lineEdit->text().toLocal8Bit().data();
    emit showhome();
    this->hide();
}
