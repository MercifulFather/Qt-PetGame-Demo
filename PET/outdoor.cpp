#include "outdoor.h"
#include "ui_outdoor.h"
#include "struct.h"
#include <string>
#include "pet.h"
#include <time.h>
#include <Windows.h>

using namespace std;
extern z pets[3];

outdoor::outdoor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::outdoor)
{
    ui->setupUi(this);
    ui->workwidget->hide();
    ui->shopwidget->hide();
    ui->textlabel->hide();
    ui->parkwidget->hide();
    ui->riverwidget->hide();
    ui->stationwidget->hide();
    ui->poolwidget->hide();
    QMovie *movie = new QMovie("image/park.gif");
    ui->parklabel->setMovie(movie);
    movie->start();
}

outdoor::~outdoor()
{
    delete ui;
}
//存档
void outdoor::save()
{
    FILE *fp;
    fp=fopen("data.txt","wb+");
    rewind(fp);
    fwrite(&pets[1],sizeof(z),1,fp);
    fclose(fp);
}

void outdoor::receivehome()
{
    ui->textlabel->hide();
    this->show();
    outdoor::act();
}

void outdoor::on_exitbutton_clicked()
{
    emit quit();
}

//打工
void outdoor::on_workbutton_clicked()
{
    ui->workwidget->show();
}

//商店
void outdoor::on_shopbutton_clicked()
{
    ui->shoplabel->setText(" ");
    ui->shopwidget->show();
}

//回家
void outdoor::on_homebutton_clicked()
{
    emit showhome();
    this->hide();
}

void outdoor::act()
{
    QMovie *movie;
    if(pets[1].type == 1)
    {
        movie = new QMovie("image/cat.gif");
        ui->imagelabel->setMovie(movie);
    }
    else if(pets[1].type == 2)
    {
        movie = new QMovie("image/hamster.gif");
        ui->imagelabel->setMovie(movie);
    }
    else if(pets[1].type == 3)
    {
        movie = new QMovie("image/pig.gif");
        ui->imagelabel->setMovie(movie);
    }
    movie->start();
}


void outdoor::on_savebutton_clicked()
{
    outdoor::save();
}

//打工界面按钮
void outdoor::on_niwajiangbutton_clicked()  //泥瓦匠
{
    if(pets[1].power-3 >= 0)
    {
        ui->workwidget->hide();
        pets[1].hunger-=3;
        pets[1].clean-=3;
        pets[1].thirsty-=4;
        pets[1].money+=25;
        pets[1].power-=3;
        pets[1].mood-=4;
        ui->textlabel->setText("  " + tr("我获得了25金币!"));
        ui->textlabel->show();
    }
    else
    {
        ui->workwidget->hide();
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
    //ui->textlabel->hide();
}

void outdoor::on_baoanbutton_clicked()      //保安
{
    if(pets[1].power-1 >= 0)
    {
        ui->workwidget->hide();
        pets[1].hunger-=3;
        pets[1].thirsty-=3;
        pets[1].clean-=1;
        pets[1].money+=7;
        pets[1].power-=1;
        pets[2].mood-=2;
        ui->textlabel->show();
        ui->textlabel->setText("  " + tr("我获得了7金币!"));
    }
    else
    {
        ui->workwidget->hide();
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
    //ui->textlabel->hide();
}

void outdoor::on_kuaidiyuanbutton_clicked() //快递员
{
    if(pets[1].power-2 >= 0)
    {
        ui->workwidget->hide();
        pets[1].hunger-=4;
        pets[1].thirsty-=3;
        pets[1].clean-=2;
        pets[1].money+=16;
        pets[1].power-=2;
        pets[1].mood-=2;
        ui->textlabel->show();
        ui->textlabel->setText("  " + tr("我获得了16金币!"));
    }
    else
    {
        ui->workwidget->hide();
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
    //ui->textlabel->hide();
}

void outdoor::on_mujiangbutton_clicked()    //木匠
{
    if(pets[1].power-2 >= 0)
    {
        ui->workwidget->hide();
        pets[1].hunger-=3;
        pets[1].thirsty-=3;
        pets[1].clean-=2;
        pets[1].money+=16;
        pets[1].power-=2;
        pets[1].mood-=3;
        ui->textlabel->show();
        ui->textlabel->setText("  " + tr("我获得了16金币!"));
    }
    else
    {
        ui->workwidget->hide();
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
    //ui->textlabel->hide();
}

void outdoor::on_yuandingbutton_clicked()   //园丁
{
    if(pets[1].power-3 >= 0)
    {
        ui->workwidget->hide();
        pets[1].hunger-=4;
        pets[1].thirsty-=3;
        pets[1].clean-=1;
        pets[1].money+=7;
        pets[1].power-=1;
        pets[1].mood-=1;
        ui->textlabel->show();
        ui->textlabel->setText("  " + tr("我获得了7金币!"));
    }
    else
    {
        ui->workwidget->hide();
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
    //ui->textlabel->hide();
}

//散步场景按钮
void outdoor::on_park_clicked()         //公园
{
    if(pets[1].power-3 >= 0)
    {
        pets[1].mood += 5;
        pets[1].power -= 1;
        ui->parkwidget->show();
        ui->textpark->setText("  " + tr("心情") + "+5\n" +
                              "  " + tr("体力") + "-1");
    }
    else
    {
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
}

void outdoor::on_riverbutton_clicked()  //江边
{
    if(pets[1].power-3 >= 0)
    {
        pets[1].mood += 5;
        pets[1].power -= 1;
        ui->riverwidget->show();
        ui->textriver->setText("  " + tr("心情") + "+5\n" +
                              "  " + tr("体力") + "-1");
    }
    else
    {
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
}

void outdoor::on_stationbutton_clicked()//车站
{
    if(pets[1].power-3 >= 0)
    {
        pets[1].mood += 3;
        pets[1].power -= 1;
        ui->stationwidget->show();
        ui->textstation->setText("  " + tr("心情") + "+3\n" +
                              "  " + tr("体力") + "-1");
    }
    else
    {
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
}

void outdoor::on_poolbutton_clicked()   //池塘
{
    if(pets[1].power-3 >= 0)
    {
        pets[1].mood += 6;
        pets[1].power -= 1;
        ui->poolwidget->show();
        ui->textpool->setText("  " + tr("心情") + "+6\n" +
                              "  " + tr("体力") + "-1");
    }
    else
    {
        ui->textlabel->setText("  " + tr("我太累了，需要休\n  息一下哦!"));
        ui->textlabel->show();
    }
}

//返回户外场景
void outdoor::on_backbutton3_clicked()//公园返回
{
    ui->parkwidget->hide();
}

void outdoor::on_backbutton4_clicked()//江边返回
{
    ui->riverwidget->hide();
}

void outdoor::on_backbutton5_clicked()//车站返回
{
    ui->stationwidget->hide();
}

void outdoor::on_backbutton6_clicked()//池塘返回
{
    ui->poolwidget->hide();
}

void outdoor::on_backbutton_clicked() //商店返回
{
    ui->shopwidget->hide();
}

//商品购买按钮
void outdoor::on_apple_clicked()
{
    if(pets[1].money-2>=0)
    {
        pets[1].money-=2;
        pets[1].sum[3]++;
        ui->shoplabel->setText("\t" + tr("买个小苹果回去啃"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_bbq_clicked()
{
    if(pets[1].money-5>=0)
    {
        pets[1].money-=5;
        pets[1].sum[4]++;
        ui->shoplabel->setText("\t" + tr("回去吃顿烧烤"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_beer_clicked()
{
    if(pets[1].money-3>=0)
    {
            pets[1].money-=3;
            pets[1].sum[0]++;
            ui->shoplabel->setText("\t" + tr("啤酒得配BBQ"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_hamburger_clicked()
{
    if(pets[1].money-3>=0)
    {
        pets[1].money-=3;
        pets[1].sum[1]++;
        ui->shoplabel->setText("\t" + tr("有点想吃汉堡"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_icecream_clicked()
{
    if(pets[1].money-2>=0)
    {
        pets[1].money-=2;
        pets[1].sum[11]++;
        ui->shoplabel->setText("\t" + tr("夏天就要吃冰淇淋"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_kfc_clicked()
{
    if(pets[1].money-10>=0)
    {
        pets[1].money-=10;
        pets[1].sum[2]++;
        ui->shoplabel->setText("\t" + tr("垃圾食品真的好吃"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_medicine_clicked()
{
    if(pets[1].money-5>=0)
    {
        pets[1].money-=5;
        pets[1].sum[10]++;
        ui->shoplabel->setText("\t" + tr("想健康得吃药"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_shampoo_clicked()
{
    if(pets[1].money-3>=0)
    {
        pets[1].money-=3;
        pets[1].sum[5]++;
        ui->shoplabel->setText("\t" + tr("头发快该洗了"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_soap_clicked()
{
    if(pets[1].money-5>=0)
    {
        pets[1].money-=5;
        pets[1].sum[6]++;
        ui->shoplabel->setText("\t" + tr("我爱洗澡"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_ball_clicked()
{
    if(pets[1].money-5>=0)
    {
        pets[1].money-=5;
        pets[1].sum[7]++;
        ui->shoplabel->setText("\t" + tr("买个回去给别航玩"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_bear_clicked()
{
    if(pets[1].money-4>=0)
    {
        pets[1].money-=4;
        pets[1].sum[9]++;
        ui->shoplabel->setText("\t" + tr("买个回去给别航玩"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}

void outdoor::on_plane_clicked()
{
    if(pets[1].money-4>=0)
    {
        pets[1].money-=4;
        pets[1].sum[8]++;
        ui->shoplabel->setText("\t" + tr("我要上天"));
    }
    else
        ui->shoplabel->setText("\t" + tr("钱不够了"));
}
