#include "pet.h"
#include "struct.h"
#include "n1.h"
#include "cat.h"
#include "home.h"
#include "outdoor.h"
#include "death.h"
#include <QApplication>
#include <QTextCodec>
using namespace std;

z pets[3]; //实例化3个z类对象，名为pets*/

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
    QApplication a(argc, argv);
    pet p;
    n1 n;
    cat c;
    home h;
    death d;
    outdoor o;
    p.show();
    QObject::connect(&p,SIGNAL(shown1()),&n,SLOT(receivepet()));
    QObject::connect(&c,SIGNAL(shown1()),&n,SLOT(receivecat()));
    QObject::connect(&n,SIGNAL(showpet()),&p,SLOT(receiven1()));
    QObject::connect(&n,SIGNAL(showcat()),&c,SLOT(receiven1()));
    QObject::connect(&n,SIGNAL(showhamster()),&c,SLOT(receiven1ham()));
    QObject::connect(&n,SIGNAL(showpig()),&c,SLOT(receiven1pig()));
    QObject::connect(&c,SIGNAL(showhome()),&h,SLOT(receivecat()));
    QObject::connect(&p,SIGNAL(showhome()),&h,SLOT(receivepet()));
    QObject::connect(&o,SIGNAL(showhome()),&h,SLOT(receiveoutdoor()));
    QObject::connect(&h,SIGNAL(showoutdoor()),&o,SLOT(receivehome()));
    QObject::connect(&d,SIGNAL(showpet()),&p,SLOT(receivedeath()));
    QObject::connect(&h,SIGNAL(showdeath()),&d,SLOT(receivehome()));
    QObject::connect(&p,SIGNAL(quit()),&a,SLOT(quit()));
    QObject::connect(&n,SIGNAL(quit()),&a,SLOT(quit()));
    QObject::connect(&c,SIGNAL(quit()),&a,SLOT(quit()));
    QObject::connect(&h,SIGNAL(quit()),&a,SLOT(quit()));
    QObject::connect(&o,SIGNAL(quit()),&a,SLOT(quit()));

    return a.exec();
}
