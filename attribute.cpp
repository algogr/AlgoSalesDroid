#include "attribute.h"

Attribute::Attribute(QObject *parent) :
    QObject(parent)
{
}

QString Attribute::id()
{
    return mid;
}

void Attribute::setId(QString id)
{
    mid=id;
}

QString Attribute::description()
{
    return mdescription;
}

void Attribute::setDescription(QString description)
{
    mdescription=description;
}

QString Attribute::shortcut()
{
    return mshortcut;
}

void Attribute::setShortcut(QString shortcut)
{
    mshortcut=shortcut;
}


