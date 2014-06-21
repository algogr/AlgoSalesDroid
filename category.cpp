#include "category.h"

Category::Category(QObject *parent) :
    QObject(parent)
{
}

QString Category::id()
{
    return mid;
}

void Category::setId(QString id)
{
    mid=id;
}

QString Category::description()
{
    return mdescription;
}

void Category::setDescription(QString descr)
{
    mdescription=descr;
}

QString Category::image1()
{
    return mimage1;
}

void Category::setImage1(QString path)
{
    mimage1=path;
}

QString Category::image2()
{
    return mimage2;
}

void Category::setImage2(QString path)
{
    mimage2=path;
}


