#ifndef SUBCATEGORY_H
#define SUBCATEGORY_H


#include "category.h"


class SubCategory : public Category
{
    Q_OBJECT
    Q_PROPERTY(QString category READ categoryId WRITE setCategoryId )

public:
    explicit SubCategory(Category *parent = 0);
    QString categoryId();
    void setCategoryId(QString catid);
signals:

public slots:

private:

    QString mcategoryid;

};

#endif // SUBCATEGORY_H
