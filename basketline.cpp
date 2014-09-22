#include "basketline.h"

basketline::basketline(QObject *parent) :
    QObject(parent)
{
}

void basketline::setCode(QString code)
{
    mcode=code;
}

void basketline::setDescription(QString description)
{
    mdescription=description;
}

void basketline::setQuantity(QString quantity)
{
    mquantity=quantity;
}

QString basketline::code()
{
    return mcode;
}

QString basketline::description()
{
    return mdescription;
}

QString basketline::quantity()
{
    return mquantity;
}
