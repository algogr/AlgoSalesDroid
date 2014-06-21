#include "product.h"

Product::Product(QObject *parent) :
    QObject(parent)
{
}

QString Product::id()
{
    return mid;
}

void Product::setId(QString id)
{
    mid=id;
}

QString Product::code()
{
    return mcode;
}

void Product::setCode(QString code)
{
    mcode=code;
}

QString Product::description()
{
    return mdescription;
}

void Product::setDescription(QString description)
{
    mdescription=description;
}

QString Product::longdescription()
{
    return mlongdescription;
}

void Product::setLongDescription(QString longdescription)
{
    mlongdescription=longdescription;
}

QString Product::longtext()
{
    return mlongtext;
}

void Product::setLongText(QString LongText)
{
    mlongtext=LongText;
}

QString Product::image1()
{
    return mimage1;
}

void Product::setImage1(QString image)
{
    mimage1=image;
}

QString Product::image2()
{
    return mimage2;
}

void Product::setImage2(QString image)
{
    mimage2=image;
}

QString Product::image3()
{
    return mimage3;
}

void Product::setImage3(QString image)
{
    mimage3=image;
}

QString Product::catid()
{
    return mcatid;
}

void Product::setCatId(QString id)
{
    mcatid=id;
}

QString Product::subcatid()
{
    return msubcatid;
}

void Product::setSubCatId(QString id)
{
    msubcatid=id;
}

