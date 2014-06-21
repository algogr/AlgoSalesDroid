#ifndef ATTRIBUTEVALUE_H
#define ATTRIBUTEVALUE_H
#include <QObject>

class AttributeValue:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString attid READ attid WRITE setAttId )
    Q_PROPERTY(QString description READ description WRITE setDescription )
    Q_PROPERTY(QString image1 READ image1 WRITE setImage1 )
public:
    explicit AttributeValue(QObject *parent = 0);
    QString attid();
    void setAttId(QString attid);
    QString description();
    void setDescription (QString description);
    QString image1();
    void setImage1(QString imagepath);

private:
    QString mattid;
    QString mdescription;
    QString mimage1;
};

#endif // ATTRIBUTEVALUE_H
