#include "attributevalue.h"

AttributeValue::AttributeValue(QObject* parent):
    QObject(parent)
{
}

QString AttributeValue::attid()
{
    return mattid;
}

void AttributeValue::setAttId(QString attid)
{
    mattid=attid;
}

QString AttributeValue::description()
{
    return mdescription;
}

void AttributeValue::setDescription(QString description)
{
    mdescription=description;
}

QString AttributeValue::image1()
{
    return mimage1;
}

void AttributeValue::setImage1(QString imagepath)
{
    mimage1=imagepath;
}
