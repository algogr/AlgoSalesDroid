#ifndef BASKETLINE_H
#define BASKETLINE_H

#include <QObject>

class basketline : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString code READ code WRITE setCode)
    Q_PROPERTY(QString description READ description WRITE setDescription )
    Q_PROPERTY(QString quantity READ quantity WRITE setQuantity )

public:
    explicit basketline(QObject *parent = 0);
    void setCode(QString code);
    void setDescription(QString description);
    void setQuantity(QString quantity);
    QString code();
    QString description();
    QString quantity();

protected:
    QString mcode,mdescription,mquantity;


signals:



public slots:

};

#endif // BASKETLINE_H
