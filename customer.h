#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>

class Customer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString code READ code WRITE setCode )
    Q_PROPERTY(QString name READ name WRITE setName )
    Q_PROPERTY(QString street READ street WRITE setStreet )
    Q_PROPERTY(QString district READ district WRITE setDistrict )
    Q_PROPERTY(QString phone1 READ phone1 WRITE setPhone1 )
    Q_PROPERTY(QString phone2 READ phone2 WRITE setPhone2 )
    Q_PROPERTY(QString fax READ fax WRITE setFax )
    Q_PROPERTY(QString geoid READ geoid WRITE setGeoId )
    Q_PROPERTY(QString email READ email WRITE setEmail )
    Q_PROPERTY(float balance READ balance WRITE setBalance )
    Q_PROPERTY(float plafon READ plafon WRITE setPlafon )
    Q_PROPERTY(float openchecques READ openchecques WRITE setOpenChecques )
    Q_PROPERTY(float sales READ sales WRITE setSales )
    Q_PROPERTY(QString status READ status WRITE setStatus )

public:
    explicit Customer(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString code();
    void setCode(QString code);
    QString name();
    void setName(QString name);
    QString street();
    void setStreet(QString street);
    QString district();
    void setDistrict(QString district);
    QString city();
    void setCity(QString city);
    QString phone1();
    void setPhone1(QString phone1);
    QString phone2();
    void setPhone2(QString phone2);
    QString fax();
    void setFax(QString fax);
    QString geoid();
    void setGeoId(QString geoid);
    QString email();
    void setEmail(QString email);
    float balance();
    void setBalance(float balance);
    float plafon();
    void setPlafon(float plafon);
    float openchecques();
    void setOpenChecques(float openchecques);
    float sales();
    void setSales(float sales);
    QString status();
    void setStatus(QString status);




signals:

public slots:

private:
    QString mid;
    QString mcode;
    QString mname;
    QString mstreet;
    QString mdistrict;
    QString mcity;
    QString mphone1;
    QString mphone2;
    QString mfax;
    QString mgeoid;
    QString memail;
    float mbalance;
    float mplafon;
    float mopenchecques;
    float msales;
    QString mstatus;



};

#endif // CUSTOMER_H
