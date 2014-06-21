#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQml>
#include "sqlquerymodel.h"
#include "product.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Product product;
    QQmlApplicationEngine engine;
    qmlRegisterType<SqlQueryModel>("SqlQueryModel", 1, 0, "SqlQueryModel");
    //qmlRegisterType<SqlQueryModel>("Product", 1, 0, "Product");
    engine.rootContext()->setContextProperty("product", &product);
    engine.load(QUrl(QStringLiteral("qrc:///main.qml")));

    return app.exec();
}
