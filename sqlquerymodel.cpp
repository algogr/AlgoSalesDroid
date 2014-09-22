#include "sqlquerymodel.h"
#include "category.h"
#include "subcategory.h"
#include "product.h"
#include "attribute.h"
#include "attributevalue.h"
#include "customer.h"
#include "customertransaction.h"
#include "storetradeline.h"
#include "aginganalysis.h"
#include "basketline.h"
#include "QQuickView"
#include "QDesktopServices"

SqlQueryModel::SqlQueryModel(QSqlQueryModel *parent) :
    QSqlQueryModel(parent)
{
    //QQuickView view(QUrl::fromLocalFile("CusFixedData.qml"));
    //QObject *item = (QObject*) view.rootObject();
    //QObject::connect(item, SIGNAL(qmlSignal(mapclicked(QString,QString))),this, SLOT(findlocation(QString,QString)));
    //connect(object,SIGNAL(findlocation),this,findlocation(addrd,city);)
}


bool SqlQueryModel::opendb()
{
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    bool open;
    // Adjust for Windows, OSX or Symbian deploy
    //mydb.setDatabaseName("/home/jim/workspace/HourGlassDroid/hourglass.sqlite");
    QString dbpath = QDir::currentPath()+"/";
    qDebug()<<dbpath+"algosalesdroid.db";
    mydb.setDatabaseName(dbpath+"algosalesdroid.db");
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

QList <QObject*> SqlQueryModel::getCustTransactions(QString cusid)
{
    QSqlQuery query;
    QString querystr="SELECT trndate,tradecode,totalamount*isdebit,\
            totalamount*iscredit,\
            case when ((iscredit=0) and (isdebit=0)) then totalamount\
            else (select sum(c1.totalamount*(c1.isdebit-c1.iscredit)) \
                  from customertrans c1 where c1.id<=c.id and c.cusid=c1.cusid)+\
            (select sum(totalamount) from customertrans c2 where c.cusid=c2.cusid and ((c2.iscredit=0) and (c2.isdebit=0))) end,id \
            from customertrans c\
            where c.cusid="+cusid+" order by c.id";

    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> customertransactions;

    while (query.next())
    {
        CustomerTransaction* customertransaction=new CustomerTransaction();
        customertransaction->setTrndate(query.value(0).toString());
        customertransaction->setTradecode(query.value(1).toString());
        customertransaction->setDebit(query.value(2).toFloat());
        customertransaction->setCredit(query.value(3).toFloat());
        customertransaction->setBalance(query.value(4).toFloat());
        customertransaction->setId(query.value(5).toString());
        customertransactions.append(customertransaction);
    }
    return customertransactions;
}


QList <QObject*> SqlQueryModel::getTransactionItems(QString custranid)
{
    QSqlQuery query;
    QString querystr="SELECT m.code,m.description,st.qty,st.price,st.discount,st.value \
            from material m,storetradelines st \
            where m.id=st.matid and st.custranid="+custranid;

    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> storetradelines;

    while (query.next())
    {
        StoreTradeLine* storetradeline=new StoreTradeLine();
        storetradeline->setMatcode(query.value(0).toString());
        storetradeline->setMatdescription(query.value(1).toString());
        storetradeline->setQty(query.value(2).toInt());
        storetradeline->setPrice(query.value(3).toFloat());
        storetradeline->setDiscount(query.value(4).toFloat());
        storetradeline->setValue(query.value(5).toFloat());
        storetradelines.append(storetradeline);
    }
    return storetradelines;
}

QList <QObject*> SqlQueryModel::getAgingAnalysis(QString cusid)
{
    QSqlQuery query;
    QString querystr="SELECT previousfiscal,month1,month2,month3,month4,month5,month6,month7,month8,month9,\
            month10,month11,month12,balance \
            from aging where cusid="+cusid;

    qDebug()<<querystr;
    query.exec(querystr);
    QList <QObject*> monthaging;
    query.next();
    for (int i=0;i<=13;i++)
    {
        AgingAnalysis *aging=new AgingAnalysis();
        aging->setMonth(i);
        if (aging->month()==0)
        {
            aging->setYear("Προηγούμενη Xρήση");
            aging->setMonth("");
        }
        else if (aging->month()==13)
        {
           aging->setYear("Συνολικό Υπόλοιπο");
                aging->setMonth("");
        }


        else if (aging->month()<=6)
            aging->setYear("2014");
        else
            aging->setYear("2013");
        aging->setAmount(query.value(i).toFloat());
        monthaging.append(aging);

    }




    return monthaging;
}

void SqlQueryModel::findlocation(const QString &street,const QString &city)
{
    QString link = "http://maps.google.com/maps?&daddr="+street+" "+city;
    qDebug()<<"SQLQM:"<<link;
    QDesktopServices::openUrl(link);
}

void SqlQueryModel::insertBasket (QString cusid,QString iteid,QString quantity)
{
    QSqlQuery query;
    QString querystr="insert into basket (cusid,iteid,quantity) values ("+cusid+","+iteid+","+quantity+")";
    qDebug()<<querystr;
    query.exec(querystr);
}

QList<QObject*> SqlQueryModel::getBasketList()
{
    QSqlQuery query;
    QString querystr="SELECT i.code,i.description,b.quantity from basket b,item i where i.id=b.iteid";
    query.exec(querystr);
    qDebug()<<querystr;
    QList<QObject*> basketlines;
    while(query.next())
    {
        basketline* line=new basketline();
        line->setCode(query.value(0).toString());
        line->setDescription(query.value(1).toString());
        line->setQuantity(query.value(2).toString());
        qDebug()<<query.value(0).toString();
        qDebug()<<basketlines;
        basketlines.append(line);
    }
    return basketlines;

}
