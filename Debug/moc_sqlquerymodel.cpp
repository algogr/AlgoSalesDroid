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
    QByteArrayData data[29];
    char stringdata[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqlQueryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqlQueryModel_t qt_meta_stringdata_SqlQueryModel = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 12),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 6),
QT_MOC_LITERAL(4, 35, 4),
QT_MOC_LITERAL(5, 40, 6),
QT_MOC_LITERAL(6, 47, 13),
QT_MOC_LITERAL(7, 61, 15),
QT_MOC_LITERAL(8, 77, 16),
QT_MOC_LITERAL(9, 94, 5),
QT_MOC_LITERAL(10, 100, 15),
QT_MOC_LITERAL(11, 116, 6),
QT_MOC_LITERAL(12, 123, 9),
QT_MOC_LITERAL(13, 133, 16),
QT_MOC_LITERAL(14, 150, 8),
QT_MOC_LITERAL(15, 159, 15),
QT_MOC_LITERAL(16, 175, 18),
QT_MOC_LITERAL(17, 194, 5),
QT_MOC_LITERAL(18, 200, 15),
QT_MOC_LITERAL(19, 216, 16),
QT_MOC_LITERAL(20, 233, 5),
QT_MOC_LITERAL(21, 239, 19),
QT_MOC_LITERAL(22, 259, 19),
QT_MOC_LITERAL(23, 279, 9),
QT_MOC_LITERAL(24, 289, 16),
QT_MOC_LITERAL(25, 306, 12),
QT_MOC_LITERAL(26, 319, 5),
QT_MOC_LITERAL(27, 325, 8),
QT_MOC_LITERAL(28, 334, 13)
    },
    "SqlQueryModel\0findlocation\0\0street\0"
    "city\0opendb\0getCategories\0QList<QObject*>\0"
    "getSubCategories\0catid\0getProductField\0"
    "itemid\0fieldname\0getProductsbySub\0"
    "subcatid\0getProductAttrs\0getAttributeValues\0"
    "attid\0getCustomerList\0getCustomerField\0"
    "cusid\0getCustTransactions\0getTransactionItems\0"
    "custranid\0getAgingAnalysis\0insertBasket\0"
    "iteid\0quantity\0getBasketList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqlQueryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   94,    2, 0x02 /* Public */,
       6,    0,   95,    2, 0x02 /* Public */,
       8,    1,   96,    2, 0x02 /* Public */,
      10,    2,   99,    2, 0x02 /* Public */,
      13,    1,  104,    2, 0x02 /* Public */,
      15,    1,  107,    2, 0x02 /* Public */,
      16,    1,  110,    2, 0x02 /* Public */,
      18,    0,  113,    2, 0x02 /* Public */,
      19,    2,  114,    2, 0x02 /* Public */,
      21,    1,  119,    2, 0x02 /* Public */,
      22,    1,  122,    2, 0x02 /* Public */,
      24,    1,  125,    2, 0x02 /* Public */,
      25,    3,  128,    2, 0x02 /* Public */,
      28,    0,  135,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // methods: parameters
    QMetaType::Bool,
    0x80000000 | 7,
    0x80000000 | 7, QMetaType::QString,    9,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,   11,   12,
    0x80000000 | 7, QMetaType::QString,   14,
    0x80000000 | 7, QMetaType::QString,   11,
    0x80000000 | 7, QMetaType::QString,   17,
    0x80000000 | 7,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QString,   20,   12,
    0x80000000 | 7, QMetaType::QString,   20,
    0x80000000 | 7, QMetaType::QString,   23,
    0x80000000 | 7, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   26,   27,
    0x80000000 | 7,

       0        // eod
};

void SqlQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SqlQueryModel *_t = static_cast<SqlQueryModel *>(_o);
        switch (_id) {
        case 0: _t->findlocation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: { bool _r = _t->opendb();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { QList<QObject*> _r = _t->getCategories();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 3: { QList<QObject*> _r = _t->getSubCategories((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 4: { QVariant _r = _t->getProductField((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: { QList<QObject*> _r = _t->getProductsbySub((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 6: { QList<QObject*> _r = _t->getProductAttrs((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 7: { QList<QObject*> _r = _t->getAttributeValues((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 8: { QList<QObject*> _r = _t->getCustomerList();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->getCustomerField((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QList<QObject*> _r = _t->getCustTransactions((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 11: { QList<QObject*> _r = _t->getTransactionItems((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 12: { QList<QObject*> _r = _t->getAgingAnalysis((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        case 13: _t->insertBasket((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 14: { QList<QObject*> _r = _t->getBasketList();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
