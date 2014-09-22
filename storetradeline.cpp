#include "storetradeline.h"

StoreTradeLine::StoreTradeLine(QObject *parent) :
    QObject(parent)
{
}

QString StoreTradeLine::id()
{
    return mid;
}

void StoreTradeLine::setId(QString id)
{
    mid=id;
}

QString StoreTradeLine::matcode()
{
    return mmatcode;
}

void StoreTradeLine::setMatcode(QString matcode)
{
    mmatcode=matcode;
}

QString StoreTradeLine::matdescription()
{
    return mmatdescription;
}

void StoreTradeLine::setMatdescription(QString matdescription)
{
    mmatdescription=matdescription;
}

QString StoreTradeLine::custranid()
{
    return mcustranid;
}

void StoreTradeLine::setCustranid(QString custranid)
{
    mcustranid=custranid;
}

int StoreTradeLine::qty()
{
    return mqty;
}

void StoreTradeLine::setQty(int qty)
{
    mqty=qty;
}

float StoreTradeLine::price()
{
    return mprice;
}

void StoreTradeLine::setPrice(float price)
{
    mprice=price;
}

float StoreTradeLine::discount()
{
    return mdiscount;
}

void StoreTradeLine::setDiscount(float discount)
{
    mdiscount=discount;
}

float StoreTradeLine::value()
{
    return mvalue;
}

void StoreTradeLine::setValue(float value)
{
    mvalue=value;
}
