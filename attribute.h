#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <QObject>

class Attribute : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString description READ description WRITE setDescription )
    Q_PROPERTY(QString shortcut READ shortcut WRITE setShortcut )
public:
    explicit Attribute(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString description();
    void setDescription (QString description);
    QString shortcut();
    void setShortcut(QString shortcut);

signals:

public slots:

private:
    QString mid;
    QString mdescription;
    QString mshortcut;
};

#endif // ATTRIBUTE_H
