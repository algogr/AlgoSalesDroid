#include "customertransaction.h"

CustomerTransaction::CustomerTransaction(QObject *parent) :
    QObject(parent)
{
}

QString CustomerTransaction::id()
{
    return mid;
}

void CustomerTransaction::setId(QString id)
{
    mid=id;
}

QString CustomerTransaction::cuscode()
{
    return mcuscode;
}

void CustomerTransaction::setCuscode(QString cuscode)
{
    mcuscode=cuscode;
}

QString CustomerTransaction::cusid()
{
    return mcusid;
}

void CustomerTransaction::setCusid(QString cusid)
{
    mcusid=cusid;
}

QString CustomerTransaction::trndate()
{
    return mtrndate;
}

void CustomerTransaction::setTrndate(QString trndate)
{
    mtrndate=trndate;
}

QString CustomerTransaction::tradecode()
{
    return mtradecode;
}

void CustomerTransaction::setTradecode(QString tradecode)
{
    mtradecode=tradecode;
}



int CustomerTransaction::isdebit()
{
    return misdebit;
}


void CustomerTransaction::setIsdebit(int isdebit)
{
    misdebit=isdebit;
}

int CustomerTransaction::iscredit()
{
    return miscredit;
}

void CustomerTransaction::setIscredit(int iscredit)
{
    miscredit=iscredit;
}

float CustomerTransaction::netvalue()
{
    return mnetvalue;
}

void CustomerTransaction::setNetvalue(float netvalue)
{
    mnetvalue=netvalue;
}

float CustomerTransaction::vatamount()
{
    return mvatamount;
}

void CustomerTransaction::setVatamount(float vatamount)
{
    mvatamount=vatamount;
}

float CustomerTransaction::totalamount()
{
    return mtotalamount;
}

void CustomerTransaction::setTotalamount(float totalamount)
{
    mtotalamount=totalamount;
}

QString CustomerTransaction::ftrid()
{
    return mftrid;
}

void CustomerTransaction::setFtrid(QString ftrid)
{
    mftrid=ftrid;
}

float CustomerTransaction::debit()
{
    return mdebit;
}

void CustomerTransaction::setDebit(float debit)
{
    mdebit=debit;
}

float CustomerTransaction::credit()
{
    return mcredit;
}

void CustomerTransaction::setCredit(float credit)
{
    mcredit=credit;
}

float CustomerTransaction::balance()
{
    return mbalance;
}

void CustomerTransaction::setBalance(float balance)
{
    mbalance=balance;
}
