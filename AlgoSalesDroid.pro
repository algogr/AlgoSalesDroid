TEMPLATE = app

QT += qml quick widgets sql

SOURCES += main.cpp \
    category.cpp \
    attribute.cpp \
    subcategory.cpp \
    sqlquerymodel.cpp \
    product.cpp \
    attributevalue.cpp \
    customer.cpp \
    customertransaction.cpp \
    storetradeline.cpp \
    aginganalysis.cpp \
    basketline.cpp

RESOURCES += qml.qrc \
    resources.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    category.h \
    attribute.h \
    subcategory.h \
    sqlquerymodel.h \
    product.h \
    attributevalue.h \
    customer.h \
    customertransaction.h \
    storetradeline.h \
    aginganalysis.h \
    basketline.h

OTHER_FILES +=
