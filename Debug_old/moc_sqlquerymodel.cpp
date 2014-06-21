/****************************************************************************
** Meta object code from reading C++ file 'sqlquerymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sqlquerymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlquerymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SqlQueryModel_t {
    QByteArrayData data[18];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqlQueryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqlQueryModel_t qt_meta_stringdata_SqlQueryModel = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 6),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 13),
QT_MOC_LITERAL(4, 36, 15),
QT_MOC_LITERAL(5, 52, 16),
QT_MOC_LITERAL(6, 69, 5),
QT_MOC_LITERAL(7, 75, 15),
QT_MOC_LITERAL(8, 91, 6),
QT_MOC_LITERAL(9, 98, 9),
QT_MOC_LITERAL(10, 108, 16),
QT_MOC_LITERAL(11, 125, 8),
QT_MOC_LITERAL(12, 134, 15),
QT_MOC_LITERAL(13, 150, 18),
QT_MOC_LITERAL(14, 169, 5),
QT_MOC_LITERAL(15, 175, 15),
QT_MOC_LITERAL(16, 191, 16),
QT_MOC_LITERAL(17, 208, 5)
    },
    "SqlQueryModel\0opendb\0\0getCategories\0"
    "QList<QObject*>\0getSubCategories\0catid\0"
    "getProductField\0itemid\0fieldname\0"
    "getProductsbySub\0subcatid\0getProductAttrs\0"
    "getAttributeValues\0attid\0getCustomerList\0"
    "getCustomerField\0cusid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqlQueryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x02 /* Public */,
       3,    0,   60,    2, 0x02 /* Public */,
       5,    1,   61,    2, 0x02 /* Public */,
       7,    2,   64,    2, 0x02 /* Public */,
      10,    1,   69,    2, 0x02 /* Public */,
      12,    1,   72,    2, 0x02 /* Public */,
      13,    1,   75,    2, 0x02 /* Public */,
      15,    0,   78,    2, 0x02 /* Public */,
      16,    2,   79,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool,
    0x80000000 | 4,
    0x80000000 | 4, QMetaType::QString,    6,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,    8,    9,
    0x80000000 | 4, QMetaType::QString,   11,
    0x80000000 | 4, QMetaType::QString,    8,
    0x80000000 | 4, QMetaType::QString,   14,
    0x80000000 | 4,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,   17,    9,

       0        // eod
};

void SqlQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SqlQueryModel *_t = static_cast<SqlQueryModel *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->opendb();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { QList<QObject*> _r = _t->getCategories();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 2: { QList<QObject*> _r = _t->getSubCategories((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 3: { QVariant _r = _t->getProductField((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { QList<QObject*> _r = _t->getProductsbySub((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 5: { QList<QObject*> _r = _t->getProductAttrs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 6: { QList<QObject*> _r = _t->getAttributeValues((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 7: { QList<QObject*> _r = _t->getCustomerList();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->getCustomerField((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject SqlQueryModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_SqlQueryModel.data,
      qt_meta_data_SqlQueryModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *SqlQueryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlQueryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlQueryModel.stringdata))
        return static_cast<void*>(const_cast< SqlQueryModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int SqlQueryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
