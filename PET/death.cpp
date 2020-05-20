#include "death.h"
#include "ui_death.h"
#include "struct.h"
using namespace std;

extern z pets[3];

death::death(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::death)
{
    ui->setupUi(this);
}

death::~death()
{
    delete ui;
}

void death::on_backbutton_clicked()
{
    remove("data.txt");
    emit showpet();
    this->hide();
}

void death::receivehome()
{
    ui->label->setText(QString::fromStdString(pets[1].name) + tr("已经DIE掉了"));
    this->show();
}
