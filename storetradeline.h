#ifndef STORETRADELINE_H
#define STORETRADELINE_H

#include <QObject>

class StoreTradeLine : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString matcode READ matcode WRITE setMatcode )
    Q_PROPERTY(QString matdescription READ matdescription WRITE setMatdescription )
    Q_PROPERTY(QString custranid READ custranid WRITE setCustranid )
    Q_PROPERTY(int qty READ qty WRITE setQty)
    Q_PROPERTY(float price READ price WRITE setPrice )
    Q_PROPERTY(float discount READ discount WRITE setDiscount )
    Q_PROPERTY(float value READ value WRITE setValue )

public:
    explicit StoreTradeLine(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString matcode();
    void setMatcode (QString matcode);
    QString matdescription();
    void setMatdescription(QString matdescription);
    QString custranid();
    void setCustranid(QString custranid);
    int qty();
    void setQty(int qty);
    float price();
    void setPrice(float price);
    float discount();
    void setDiscount(float discount);
    float value();
    void setValue(float value);


signals:

public slots:

private:
    QString mid;
    QString mmatcode;
    QString mmatdescription;
    QString mcustranid;
    int mqty;
    float mprice;
    float mdiscount;
    float mvalue;
};

#endif // STORETRADELINE_H
