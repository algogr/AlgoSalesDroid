/****************************************************************************
** Meta object code from reading C++ file 'customer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../customer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Customer_t {
    QByteArrayData data[16];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Customer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Customer_t qt_meta_stringdata_Customer = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 2),
QT_MOC_LITERAL(2, 12, 4),
QT_MOC_LITERAL(3, 17, 4),
QT_MOC_LITERAL(4, 22, 6),
QT_MOC_LITERAL(5, 29, 8),
QT_MOC_LITERAL(6, 38, 6),
QT_MOC_LITERAL(7, 45, 6),
QT_MOC_LITERAL(8, 52, 3),
QT_MOC_LITERAL(9, 56, 5),
QT_MOC_LITERAL(10, 62, 5),
QT_MOC_LITERAL(11, 68, 7),
QT_MOC_LITERAL(12, 76, 6),
QT_MOC_LITERAL(13, 83, 12),
QT_MOC_LITERAL(14, 96, 5),
QT_MOC_LITERAL(15, 102, 6)
    },
    "Customer\0id\0code\0name\0street\0district\0"
    "phone1\0phone2\0fax\0geoid\0email\0balance\0"
    "plafon\0openchecques\0sales\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Customer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      15,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095003,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Float, 0x00095103,
      12, QMetaType::Float, 0x00095103,
      13, QMetaType::Float, 0x00095003,
      14, QMetaType::Float, 0x00095103,
      15, QMetaType::QString, 0x00095103,

       0        // eod
};

void Customer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Customer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Customer.data,
      qt_meta_data_Customer,  qt_static_metacall, 0, 0}
};


const QMetaObject *Customer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Customer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Customer.stringdata))
        return static_cast<void*>(const_cast< Customer*>(this));
    return QObject::qt_metacast(_clname);
}

int Customer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = code(); break;
        case 2: *reinterpret_cast< QString*>(_v) = name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = street(); break;
        case 4: *reinterpret_cast< QString*>(_v) = district(); break;
        case 5: *reinterpret_cast< QString*>(_v) = phone1(); break;
        case 6: *reinterpret_cast< QString*>(_v) = phone2(); break;
        case 7: *reinterpret_cast< QString*>(_v) = fax(); break;
        case 8: *reinterpret_cast< QString*>(_v) = geoid(); break;
        case 9: *reinterpret_cast< QString*>(_v) = email(); break;
        case 10: *reinterpret_cast< float*>(_v) = balance(); break;
        case 11: *reinterpret_cast< float*>(_v) = plafon(); break;
        case 12: *reinterpret_cast< float*>(_v) = openchecques(); break;
        case 13: *reinterpret_cast< float*>(_v) = sales(); break;
        case 14: *reinterpret_cast< QString*>(_v) = status(); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: setCode(*reinterpret_cast< QString*>(_v)); break;
        case 2: setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setStreet(*reinterpret_cast< QString*>(_v)); break;
        case 4: setDistrict(*reinterpret_cast< QString*>(_v)); break;
        case 5: setPhone1(*reinterpret_cast< QString*>(_v)); break;
        case 6: setPhone2(*reinterpret_cast< QString*>(_v)); break;
        case 7: setFax(*reinterpret_cast< QString*>(_v)); break;
        case 8: setGeoId(*reinterpret_cast< QString*>(_v)); break;
        case 9: setEmail(*reinterpret_cast< QString*>(_v)); break;
        case 10: setBalance(*reinterpret_cast< float*>(_v)); break;
        case 11: setPlafon(*reinterpret_cast< float*>(_v)); break;
        case 12: setOpenChecques(*reinterpret_cast< float*>(_v)); break;
        case 13: setSales(*reinterpret_cast< float*>(_v)); break;
        case 14: setStatus(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 15;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
