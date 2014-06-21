//#include "category.h"
#include "subcategory.h"


SubCategory::SubCategory(Category *parent) :
    Category(parent)
{
    Category();
}

QString SubCategory::categoryId()
{
    return mcategoryid;
}

void SubCategory::setCategoryId(QString catid)
{
    mcategoryid=catid;
}
