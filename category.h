#ifndef CATEGORY_H
#define CATEGORY_H

#include <QObject>
#include <QtCore>


class Category : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString description READ description WRITE setDescription )
    Q_PROPERTY(QString image1 READ image1 WRITE setImage1 )
    Q_PROPERTY(QString image2 READ image2 WRITE setImage2 )

public:
    explicit Category(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString description();
    void setDescription(QString descr);
    QString image1();
    void setImage1(QString path);
    QString image2();
    void setImage2(QString path);



signals:

public slots:

protected:
    QString mid;
    QString mdescription;
    QString mimage1;
    QString mimage2;



};

#endif // CATEGORY_H
