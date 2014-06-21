#ifndef SQLQUERYMODEL_H
#define SQLQUERYMODEL_H

#include <QObject>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QtCore>
#include <QList>


class SqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit SqlQueryModel(QSqlQueryModel *parent = 0);
    Q_INVOKABLE bool opendb();
    Q_INVOKABLE QList <QObject*> getCategories();
    Q_INVOKABLE QList <QObject*> getSubCategories(QString catid);
    Q_INVOKABLE QVariant getProductField(QString itemid,QString fieldname);
    Q_INVOKABLE QList <QObject*> getProductsbySub(QString subcatid);
    Q_INVOKABLE QList <QObject*> getProductAttrs(QString itemid);
    Q_INVOKABLE QList <QObject*> getAttributeValues(QString attid);
    Q_INVOKABLE QList <QObject*> getCustomerList();
    Q_INVOKABLE QVariant getCustomerField(QString cusid,QString fieldname);


signals:

public slots:

private:
    QSqlDatabase mydb;

};

#endif // SQLQUERYMODEL_H
