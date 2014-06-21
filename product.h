#ifndef PRODUCT_H
#define PRODUCT_H

#include <QObject>

class Product : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString description READ description WRITE setDescription )
    Q_PROPERTY(QString longdescription READ longdescription WRITE setLongDescription )
    Q_PROPERTY(QString longtext READ longtext WRITE setLongText)
    Q_PROPERTY(QString image1 READ image1 WRITE setImage1 )
    Q_PROPERTY(QString image2 READ image2 WRITE setImage2 )
    Q_PROPERTY(QString image3 READ image3 WRITE setImage2 )
    Q_PROPERTY(QString catid READ catid WRITE setCatId )
    Q_PROPERTY(QString subcatid READ subcatid WRITE setSubCatId )
public:
    explicit Product(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString code();
    void setCode(QString code);
    QString description();
    void setDescription(QString description);
    QString longdescription();
    void setLongDescription(QString longdescription);
    QString longtext();
    void setLongText(QString LongText);
    QString image1();
    void setImage1(QString image);
    QString image2();
    void setImage2(QString image);
    QString image3();
    void setImage3(QString image);
    QString catid();
    void setCatId(QString id);
    QString subcatid();
    void setSubCatId(QString id);

signals:

public slots:

private:
    QString mid;
    QString mcode;
    QString mdescription;
    QString mlongdescription;
    QString mlongtext;
    QString mimage1;
    QString mimage2;
    QString mimage3;
    QString mcatid;
    QString msubcatid;

};

#endif // PRODUCT_H
