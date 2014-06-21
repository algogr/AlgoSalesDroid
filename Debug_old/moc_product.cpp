/****************************************************************************
** Meta object code from reading C++ file 'product.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../product.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'product.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Product_t {
    QByteArrayData data[10];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Product_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Product_t qt_meta_stringdata_Product = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 2),
QT_MOC_LITERAL(2, 11, 11),
QT_MOC_LITERAL(3, 23, 15),
QT_MOC_LITERAL(4, 39, 8),
QT_MOC_LITERAL(5, 48, 6),
QT_MOC_LITERAL(6, 55, 6),
QT_MOC_LITERAL(7, 62, 6),
QT_MOC_LITERAL(8, 69, 5),
QT_MOC_LITERAL(9, 75, 8)
    },
    "Product\0id\0description\0longdescription\0"
    "longtext\0image1\0image2\0image3\0catid\0"
    "subcatid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Product[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095003,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095003,

       0        // eod
};

void Product::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Product::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Product.data,
      qt_meta_data_Product,  qt_static_metacall, 0, 0}
};


const QMetaObject *Product::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Product::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Product.stringdata))
        return static_cast<void*>(const_cast< Product*>(this));
    return QObject::qt_metacast(_clname);
}

int Product::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = description(); break;
        case 2: *reinterpret_cast< QString*>(_v) = longdescription(); break;
        case 3: *reinterpret_cast< QString*>(_v) = longtext(); break;
        case 4: *reinterpret_cast< QString*>(_v) = image1(); break;
        case 5: *reinterpret_cast< QString*>(_v) = image2(); break;
        case 6: *reinterpret_cast< QString*>(_v) = image3(); break;
        case 7: *reinterpret_cast< QString*>(_v) = catid(); break;
        case 8: *reinterpret_cast< QString*>(_v) = subcatid(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLongDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: setLongText(*reinterpret_cast< QString*>(_v)); break;
        case 4: setImage1(*reinterpret_cast< QString*>(_v)); break;
        case 5: setImage2(*reinterpret_cast< QString*>(_v)); break;
        case 6: setImage2(*reinterpret_cast< QString*>(_v)); break;
        case 7: setCatId(*reinterpret_cast< QString*>(_v)); break;
        case 8: setSubCatId(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
