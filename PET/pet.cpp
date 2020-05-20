#include "pet.h"
#include "ui_pet.h"
#include "struct.h"
using namespace std;

extern z pets[3];

pet::pet(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pet)
{
    ui->setupUi(this);
    ui->label_2->hide();
}

pet::~pet()
{
    delete ui;
}

void pet::loading()
{
    FILE *fp;
    int i;
    if((fp=fopen("data.txt","rb+")) == NULL)
        ui->label_2->show();
    else
    {
        rewind(fp);
        for(i=0;feof(fp)==0;i++)
        {
            fread(&pets[1],sizeof(z),1,fp);
        }
        fclose(fp);
    }
}

void pet::receiven1()
{
    ui->label_2->hide();
    this->show();
}

void pet::receivedeath()
{
    ui->label_2->hide();
    this->show();
}

void pet::on_pushButton_2_clicked()
{
    emit shown1();
    this->hide();
}

void pet::on_pushButton_3_clicked()
{
    emit quit();
}

void pet::on_continuebutton_clicked()
{
    pet::loading();
    emit showhome();
    this->hide();
}
