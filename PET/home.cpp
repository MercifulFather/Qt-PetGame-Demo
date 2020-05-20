#include "home.h"
#include "ui_home.h"
#include "struct.h"
#include <string>
#include <sstream>
#include <time.h>
#include "qt_windows.h"

using namespace std;

extern z pets[3];

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    ui->bathroomwidget->hide();
    ui->restaurantwidget->hide();
    ui->hospitalwidget->hide();
    ui->toywidget->hide();
}

home::~home()
{
    delete ui;
}

void home::restaurantstatus()
{
    if(pets[1].hunger <= 20 && pets[1].thirsty <= 20)
        ui->textrestaurant->setText("       " + tr("我现在是又渴又饿"));
    else if(pets[1].hunger <= 20 && pets[1].thirsty > 20 && pets[1].thirsty <= 60)
        ui->textrestaurant->setText("       " + tr("我太饿了"));
    else if(pets[1].thirsty <= 20 && pets[1].hunger > 20 && pets[1].hunger <= 60)
        ui->textrestaurant->setText("       " + tr("我太渴了"));
    else if(pets[1].hunger > 20 && pets[1].hunger <= 60 && pets[1].thirsty > 20 && pets[1].thirsty <= 60)
        ui->textrestaurant->setText("       " + tr("吃饱喝足就是舒服"));
    else if(pets[1].hunger > 60 && pets[1].thirsty > 20 && pets[1].thirsty <= 60)
        ui->textrestaurant->setText("       " + tr("我快要撑死了"));
    else if(pets[1].thirsty > 60 && pets[1].hunger > 20 && pets[1].hunger <= 60)
        ui->textrestaurant->setText("       " + tr("我喝得胀死了"));
    else if(pets[1].hunger > 60 && pets[1].thirsty > 60)
        ui->textrestaurant->setText("       " + tr("我现在吃不下也喝不下"));
}

void home::bathroomstatus()
{
    if(pets[1].clean <= 20)
        ui->textbathroom->setText("   " + tr("哎呀我脏死了"));
    else if(pets[1].clean > 20)
        ui->textbathroom->setText("   " + tr("浑身干净就是舒服"));
}

void home::hospitalstatus()
{
    if(pets[1].health <= 20)
        ui->texthospital->setText("   " + tr("我感觉非常不舒服"));
    else if(pets[1].health > 20)
        ui->texthospital->setText("   " + tr("我感觉我身体很棒"));
}

void home::toystatus()
{
    if(pets[1].mood <= 20)
        ui->texttoy->setText("       " + tr("我心情很不好"));
    else if(pets[1].mood > 20)
        ui->texttoy->setText("       " + tr("你快乐吗?我很快乐"));
}

int home::judge ()//死了就返回1
{
    if(pets[0].hunger==0)
    {
        if(pets[1].health-1>=0)
        {
            pets[1].health--;
            pets[1].hunger++;
        }
        else if(pets[1].health<=0)
            return 1;
    }
    if(pets[0].thirsty==0)
    {
         if(pets[1].health-1>=0)
        {
            pets[1].health--;
            pets[1].thirsty++;
        }
        else if(pets[1].health<=0)
            return 1;
    }
    if(pets[0].clean==0)
    {
        if(pets[1].health-1>=0)
        {
            pets[1].health--;
            pets[1].clean++;
        }
        else if(pets[1].health<=0)
            return 1;
    }
    if(pets[0].mood==0)
    {
        if(pets[1].health-1>=0)
        {
            pets[1].health--;
            pets[1].mood++;
        }
        else if(pets[1].health<=0)
            return 1;
    }
}

void home::save()
{
    FILE *fp;
    fp=fopen("data.txt","wb+");
    rewind(fp);
    fwrite(&pets[1],sizeof(z),1,fp);
    fclose(fp);
}

void home::time1()//首次获取时间
{
    time_t t;
    struct tm * lt;
    time (&t);//获取Unix时间戳。
    lt = localtime (&t);//转为时间结构。
    pets[1].year=lt->tm_year+1900;
    pets[1].month=lt->tm_mon+1;
    pets[1].day=lt->tm_mday;
    pets[1].hour=lt->tm_hour;
    pets[1].minute=lt->tm_min;
    pets[1].year=lt->tm_year+1900;
    pets[1].month=lt->tm_mon+1;
    pets[1].day=lt->tm_mday;
    pets[1].hour=lt->tm_hour;
    pets[1].minute=lt->tm_min;
}

void home::time2()//二次获取时间
{
    time_t t;
    struct tm * lt;
    time (&t);//获取Unix时间戳。
    lt = localtime (&t);//转为时间结构。
    pets[2].year=lt->tm_year+1900;
    pets[2].month=lt->tm_mon+1;
    pets[2].day=lt->tm_mday;
    pets[2].hour=lt->tm_hour;
    pets[2].minute=lt->tm_min;
}

void home::measure ()//重新测试体力值等状态
{
    int month,day,hour,minute;
    home::time2();
    month=pets[2].month-pets[1].month;
    day=pets[2].day-pets[1].day;
    hour=pets[2].hour-pets[1].hour;
    minute=pets[2].minute-pets[1].minute;
    pets[1].power+=(minute+hour*60+day*24*60)*2;
}

int home::kiss()
{   int num;          //用当前时间种子重置随机数生成器，使每次运行生成不同的随机数
    srand((unsigned)time( NULL ) );
    num=rand()%5;
    return num;             //打印结果
}

void home::on_exitbutton_clicked()
{
    emit quit();
}

void home::receivecat()
{
    this->show();
    home::act();

}

void home::receiveoutdoor()
{
    this->show();
    home::act();
}

void home::receivepet()
{
    this->show();
    home::act();
}

void home::act()//互动
{
    home::time1();
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
    std::string weather[9] = {"晴天\0","阴天\0","小雨\0","中雨\0","雷雨\0","雷阵雨\0","阵雨\0","大风\0","多云\0"};
    pets[0] = pets[1];

    if(pets[1].hunger <= 0)
    {
        pets[0].hunger=0;
    }
    if(pets[1].thirsty <= 0)
    {
        pets[0].thirsty=0;
    }
    if(pets[1].clean <= 0)
    {
        pets[0].clean=0;
    }
    if(pets[1].mood <= 0)
    {
        pets[0].mood=0;
    }
    if(pets[1].health <= 0)
    {
        pets[0].health=0;
    }
    if(home::judge() == 1)
    {
        emit showdeath();
        this->hide();
    }
    ui->statuslabel->setText("\n"+
                             tr("    天气:   ") + QString::fromStdString(weather[kiss()]) + "\n"+
                             tr("    昵称:   ") + QString::fromStdString(pets[0].name) + "\n"+
                             tr("    年龄:   ") + QString::number(pets[0].age) + "\n"+
                             tr("    体力:   ") + QString::number(pets[0].power) + "\n"+
                             tr("    饱食指数:") + QString::number(pets[0].hunger) + "\n"+
                             tr("    含水指数:") + QString::number(pets[0].thirsty) + "\n"+
                             tr("    清洁指数:") + QString::number(pets[0].clean) + "\n"+
                             tr("    心情指数:") + QString::number(pets[0].mood) + "\n"+
                             tr("    健康指数:") + QString::number(pets[0].health) + "\n"+
                             tr("    金币数量:") + QString::number(pets[0].money) + "\n");
}

//切换场景按钮
void home::on_outdoorbutton_clicked()   //户外
{
    home::time2();
    home::measure ();
    emit showoutdoor();
    this->hide();
}

void home::on_restaurantbutton_clicked()//吃饭
{
    home::restaurantstatus();
    ui->bbqbutton->setText(tr("数量:") + QString::number(pets[1].sum[4]));
    ui->beerbutton->setText(tr("数量:") + QString::number(pets[1].sum[0]));
    ui->hamburgerbutton->setText(tr("数量:") + QString::number(pets[1].sum[1]));
    ui->icecreambutton->setText(tr("数量:") + QString::number(pets[1].sum[11]));
    ui->kfcbutton->setText(tr("数量:") + QString::number(pets[1].sum[2]));
    ui->applebutton->setText(tr("数量:") + QString::number(pets[1].sum[3]));
    ui->restaurantwidget->show();
}

void home::on_bathroombutton_clicked()  //洗澡
{
    home::bathroomstatus();
    ui->soapbutton->setText(tr("数量:") + QString::number(pets[1].sum[6]));
    ui->shampoobutton->setText(tr("数量:") + QString::number(pets[1].sum[5]));
    ui->bathroomwidget->show();
}

void home::on_hospitalbutton_clicked()  //门诊
{
    home::hospitalstatus();
    ui->medicinebutton->setText(tr("数量:") + QString::number(pets[1].sum[10]));
    ui->hospitalwidget->show();
}

void home::on_toybutton_clicked()       //玩具
{
    home::toystatus();
    ui->planebutton->setText(tr("数量:") + QString::number(pets[1].sum[8]));
    ui->bearbutton->setText(tr("数量:") + QString::number(pets[1].sum[9]));
    ui->ballbutton->setText(tr("数量:") + QString::number(pets[1].sum[7]));
    ui->toywidget->show();
}

//返回客厅场景
void home::on_backbutton2_clicked()//洗澡返回
{
    ui->bathroomwidget->hide();
}

void home::on_backbutton3_clicked()//门诊返回
{
    ui->hospitalwidget->hide();
}

void home::on_backbutton1_clicked()//吃饭返回
{
    ui->restaurantwidget->hide();
}

void home::on_backbutton4_clicked()//玩具返回
{
    ui->toywidget->hide();
}

//存档
void home::on_savebutton_clicked()
{
    home::save();
}

//使用物品按钮
void home::on_shampoobutton_clicked()
{
    if(pets[1].sum[5]-1>=0)
    {
        pets[1].clean+=3;
        pets[1].power--;
        pets[1].sum[5]--;
        home::bathroomstatus();
    }
    else
        ui->textbathroom->setText("\t" + tr("我还没买"));
    ui->shampoobutton->setText(tr("数量:") + QString::number(pets[1].sum[5]));
}

void home::on_soapbutton_clicked()
{
    if(pets[1].sum[6]-1>=0)
    {
        pets[1].clean+=6;
        pets[1].power--;
        pets[1].sum[6]--;
        home::bathroomstatus();
    }
    else
        ui->textbathroom->setText("\t" + tr("我还没买"));
    ui->soapbutton->setText(tr("数量:") + QString::number(pets[1].sum[6]));
}

void home::on_medicinebutton_clicked()
{
    if(pets[1].sum[10]-1>=0)
    {
        pets[1].health+=10;
        pets[1].sum[10]--;
        home::hospitalstatus();
    }
    else
        ui->texthospital->setText("\t" + tr("我还没买"));
    ui->medicinebutton->setText(tr("数量:") + QString::number(pets[1].sum[10]));
}

void home::on_applebutton_clicked()
{
    if(pets[1].sum[3]-1>=0)
    {
        pets[1].hunger++;
        pets[1].thirsty++;
        pets[1].sum[3]--;
        pets[1].power+=2;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->applebutton->setText(tr("数量:") + QString::number(pets[1].sum[3]));
}

void home::on_bbqbutton_clicked()
{
    if(pets[1].sum[4]-1>=0)
    {
        pets[1].hunger+=3;
        pets[1].sum[4]--;
        pets[1].power+=3;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->bbqbutton->setText(tr("数量:") + QString::number(pets[1].sum[4]));
}

void home::on_beerbutton_clicked()
{
    if(pets[1].sum[0]-1>=0)
    {
        pets[1].thirsty+=3;
        pets[1].sum[0]--;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->beerbutton->setText(tr("数量:") + QString::number(pets[1].sum[0]));
}

void home::on_hamburgerbutton_clicked()
{
    if(pets[1].sum[1]-1>=0)
    {
        pets[1].hunger++;
        pets[1].sum[1]--;
        pets[1].power+=3;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->hamburgerbutton->setText(tr("数量:") + QString::number(pets[1].sum[1]));
}

void home::on_icecreambutton_clicked()
{
    if(pets[1].sum[11]-1>=0)
    {
        pets[1].hunger++;
        pets[1].thirsty+=3;
        pets[1].sum[11]--;
        pets[1].power++;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->icecreambutton->setText(tr("数量:") + QString::number(pets[1].sum[11]));
}

void home::on_kfcbutton_clicked()
{
    if(pets[1].sum[2]-1>=0)
    {
        pets[1].hunger+=5;
        pets[1].thirsty+=1;
        pets[1].sum[2]--;
        pets[1].power+=3;
        home::restaurantstatus();
    }
    else
        ui->textrestaurant->setText("\t" + tr("我还没买"));
    ui->kfcbutton->setText(tr("数量:") + QString::number(pets[1].sum[2]));
}

void home::on_ballbutton_clicked()
{
    if(pets[1].sum[7]-1>=0)
    {
        pets[1].mood+=6;
        pets[1].power--;
        pets[1].sum[7]--;
        home::toystatus();
    }
    else
        ui->texttoy->setText("\t" + tr("我还没买"));
    ui->ballbutton->setText(tr("数量:") + QString::number(pets[1].sum[7]));
}

void home::on_bearbutton_clicked()
{
    if(pets[1].sum[9]-1>=0)
    {
        pets[1].mood+=4;
        pets[1].power--;
        pets[1].sum[9]--;
        home::toystatus();
    }
    else
        ui->texttoy->setText("\t" + tr("我还没买"));
    ui->bearbutton->setText(tr("数量:") + QString::number(pets[1].sum[9]));
}

void home::on_planebutton_clicked()
{
    if(pets[1].sum[8]-1>=0)
    {
        pets[1].mood+=4;
        pets[1].power--;
        pets[1].sum[8]--;
        home::toystatus();
    }
    else
        ui->texttoy->setText("\t" + tr("我还没买"));
    ui->planebutton->setText(tr("数量:") + QString::number(pets[1].sum[8]));
}
