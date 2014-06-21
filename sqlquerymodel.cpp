#include "sqlquerymodel.h"
#include "category.h"
#include "subcategory.h"
#include "product.h"
#include "attribute.h"
#include "attributevalue.h"
#include "customer.h"
SqlQueryModel::SqlQueryModel(QSqlQueryModel *parent) :
    QSqlQueryModel(parent)
{
}


bool SqlQueryModel::opendb()
{
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    bool open;
    // Adjust for Windows, OSX or Symbian deploy
    //mydb.setDatabaseName("/home/jim/workspace/HourGlassDroid/hourglass.sqlite");
    mydb.setDatabaseName("/home/jim/workspace/AlgoSalesDroid/algosalesdroid.db");
    //mydb.setDatabaseName("/data/app/hourglass.sqlite");
    open=mydb.open();
    qDebug()<< mydb <<mydb.isOpen();
    if (!open)
    {
        qDebug()<<mydb.lastError();
    }
    qDebug()<<"Anoixa:"<<open;
    return open;
}

QList <QObject*> SqlQueryModel::getCategories()
{
    opendb();
    QSqlQuery query;
    QString querystr="SELECT id,description,image1,image2 from category";
    query.exec(querystr);
    QList <QObject*> categories;
    while (query.next())
    {
        Category* category=new Category();
        category->setId(query.value(0).toString());
        category->setDescription(query.value(1).toString());
        category->setImage1(query.value(2).toString());
        category->setImage2(query.value(3).toString());
        categories.append(category);
    }
    return categories;
}

QList <QObject *> SqlQueryModel::getSubCategories(QString catid)
{
    QSqlQuery query;
    QString querystr="SELECT id,description,image1,image2 from subcategory where categoryid="+catid;
    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> subcategories;
    while (query.next())
    {
        SubCategory* subcategory=new SubCategory();
        subcategory->setId(query.value(0).toString());
        subcategory->setDescription(query.value(1).toString());
        subcategory->setImage1(query.value(2).toString());
        subcategory->setImage2(query.value(3).toString());
        subcategories.append(subcategory);
    }
    return subcategories;

}

QVariant SqlQueryModel::getProductField(QString productid,QString fieldname)
{
    QSqlQuery query;
    QString querystr="SELECT code,description,longdescription,longtext,image1,image2,image3 from item where id="+productid;
    qDebug()<<querystr;
    query.exec(querystr);
    //Product *product = new Product();
    query.next();
    //product->setId(productid);
    //product->setCode(query.value(0).toString());
    //product->setDescription(query.value(1).toString());
    //product->setLongDescription(query.value(2).toString());
    //product->setLongText(query.value(3).toString());
    //product->setImage1(query.value(4).toString());
    //product->setImage2(query.value(5).toString());
    //product->setImage3(query.value(6).toString());
    //return (QObject*) product;
    QVariant value = query.value(fieldname);
    qDebug()<<"descr:"<<value;
    return value;

}

QList <QObject *> SqlQueryModel::getProductsbySub(QString subcatid)
{
    QSqlQuery query;
    QString querystr="SELECT id,code,description,longdescription,longtext,image1,image2,image3 from item where subcatid="+subcatid;
    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> products;
    while (query.next())
    {
        Product* product=new Product();
        product->setId(query.value(0).toString());
        product->setCode(query.value(1).toString());
        product->setDescription(query.value(2).toString());
        product->setLongDescription(query.value(3).toString());
        product->setLongText(query.value(4).toString());
        product->setImage1(query.value(5).toString());
        product->setImage2(query.value(6).toString());
        product->setImage3(query.value(7).toString());
        products.append(product);
    }
    return products;

}

QList <QObject*> SqlQueryModel::getProductAttrs(QString itemid)
{
    QSqlQuery query;
    QString querystr="select att.id,att.description,att.shortcut from attributes att,item_attributes i where i.attid=att.id and i.itemid="+itemid;
    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> attributes;
    while (query.next())
    {
        Attribute* attribute=new Attribute();
        attribute->setId(query.value(0).toString());
        attribute->setDescription(query.value(1).toString());
        attribute->setShortcut(query.value(2).toString());
        attributes.append(attribute);
    }
    return attributes;
}

QList <QObject*> SqlQueryModel::getAttributeValues(QString attid)
{
    QSqlQuery query;
    QString querystr="select v.description,v.image1 from attribute_values v where v.attid="+attid;
    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> attribute_values;
    QString imagePath = QDir::currentPath()+"/";
    imagePath="file://"+imagePath;
    while (query.next())
    {
        AttributeValue* attributevalue=new AttributeValue();
        attributevalue->setDescription(query.value(0).toString());
        attributevalue->setImage1(imagePath+query.value(1).toString());
        attribute_values.append(attributevalue);
    }
    return attribute_values;
}

QList <QObject*>  SqlQueryModel::getCustomerList()
{
    opendb();
    QSqlQuery query;
    QString querystr="select c.id,c.name,a.status from customer c,aging a where a.cusid=c.id";
    query.exec(querystr);
    QList <QObject*> customers;
    while(query.next())
    {
        Customer* customer=new Customer();
        customer->setId(query.value(0).toString());
        customer->setName(query.value(1).toString());
        customer->setStatus(query.value(2).toString());
        customers.append(customer);
    }
    return customers;

}

QVariant SqlQueryModel::getCustomerField(QString cusid,QString fieldname)
{
    QSqlQuery query;
    QString querystr="SELECT * from customer c,aging a where c.id=a.cusid and c.id="+cusid;
    qDebug()<<querystr;
    query.exec(querystr);
    //Product *product = new Product();
    query.next();
    //product->setId(productid);
    //product->setCode(query.value(0).toString());
    //product->setDescription(query.value(1).toString());
    //product->setLongDescription(query.value(2).toString());
    //product->setLongText(query.value(3).toString());
    //product->setImage1(query.value(4).toString());
    //product->setImage2(query.value(5).toString());
    //product->setImage3(query.value(6).toString());
    //return (QObject*) product;
    QVariant value = query.value(fieldname);
    qDebug()<<"descr:"<<value;
    return value;

}
