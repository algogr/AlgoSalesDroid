#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include <QDesktopServices>
#include "sqlquerymodel.h"
#include "product.h"
#include <QQuickItem>
#include "QQuickView"
#include "QDesktopServices"
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Product product;
    QQmlApplicationEngine engine;
    qmlRegisterType<SqlQueryModel>("SqlQueryModel", 1, 0, "SqlQueryModel");


    //qmlRegisterType<SqlQueryModel>("Product", 1, 0, "Product");
    engine.rootContext()->setContextProperty("product", &product);

    //QString link = "http://maps.google.com/maps?&daddr=βενιζελου 57 καβαλα";
    //QDesktopServices::openUrl(link);
    //https://qt-project.org/forums/viewthread/35346

    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));
    SqlQueryModel sqlquerymodel;
    //QObject* item=engine.rootContext()->findChild <QObject*>("mainwindow");
    QObject *item=engine.rootObjects().front();
    QObject::connect(item, SIGNAL(mapclicked(QString,QString)),&sqlquerymodel, SLOT(findlocation(QString,QString)));

    return app.exec();
}
