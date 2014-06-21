#include "customer.h"

Customer::Customer(QObject *parent) :
    QObject(parent)
{
}

QString Customer::id()
{
    return mid;
}

void Customer::setId(QString id)
{
    mid=id;
}

QString Customer::code()
{
    return mcode;
}

void Customer::setCode(QString code)
{
    mcode=code;
}

QString Customer::name()
{
    return mname;
}

void Customer::setName(QString name)
{
    mname=name;
}

QString Customer::street()
{
    return mstreet;
}

void Customer::setStreet(QString street)
{
    mstreet=street;
}

QString Customer::district()
{
    return mdistrict;
}

void Customer::setDistrict(QString district)
{
    mdistrict=district;
}

QString Customer::city()
{
    return mcity;
}

void Customer::setCity(QString city)
{
    mcity=city;
}

QString Customer::phone1()
{
    return mphone1;
}

void Customer::setPhone1(QString phone1)
{
    mphone1=phone1;
}

QString Customer::phone2()
{
    return mphone2;
}

void Customer::setPhone2(QString phone2)
{
    mphone2=phone2;
}

QString Customer::fax()
{
    return mfax;
}

void Customer::setFax(QString fax)
{
    mfax=fax;
}

QString Customer::geoid()
{
    return mgeoid;
}

void Customer::setGeoId(QString geoid)
{
    mgeoid=geoid;
}

QString Customer::email()
{
    return memail;
}

void Customer::setEmail(QString email)
{
    memail=email;
}

float Customer::balance()
{
    return mbalance;
}

void Customer::setBalance(float balance)
{
    mbalance=balance;
}

float Customer::plafon()
{
    return mplafon;
}

void Customer::setPlafon(float plafon)
{
    mplafon=plafon;
}

float Customer::openchecques()
{
    return mopenchecques;
}

void Customer::setOpenChecques(float openchecques)
{
    mopenchecques=openchecques;
}

float Customer::sales()
{
    return msales;
}

void Customer::setSales(float sales)
{
    msales=sales;
}

QString Customer::status()
{
    return mstatus;
}

void Customer::setStatus(QString status)
{
    mstatus=status;
}


