/****************************************************************************
** Meta object code from reading C++ file 'placesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../model/placesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'placesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlacesModel_t {
    QByteArrayData data[24];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlacesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlacesModel_t qt_meta_stringdata_PlacesModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PlacesModel"
QT_MOC_LITERAL(1, 12, 15), // "deviceSetupDone"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "filePath"
QT_MOC_LITERAL(4, 38, 13), // "onDeviceAdded"
QT_MOC_LITERAL(5, 52, 3), // "udi"
QT_MOC_LITERAL(6, 56, 15), // "onDeviceRemoved"
QT_MOC_LITERAL(7, 72, 13), // "onItemChanged"
QT_MOC_LITERAL(8, 86, 11), // "PlacesItem*"
QT_MOC_LITERAL(9, 98, 3), // "get"
QT_MOC_LITERAL(10, 102, 5), // "index"
QT_MOC_LITERAL(11, 108, 12), // "requestSetup"
QT_MOC_LITERAL(12, 121, 12), // "requestEject"
QT_MOC_LITERAL(13, 134, 15), // "requestTeardown"
QT_MOC_LITERAL(14, 150, 8), // "DataRole"
QT_MOC_LITERAL(15, 159, 8), // "NameRole"
QT_MOC_LITERAL(16, 168, 12), // "IconNameRole"
QT_MOC_LITERAL(17, 181, 12), // "IconPathRole"
QT_MOC_LITERAL(18, 194, 7), // "UrlRole"
QT_MOC_LITERAL(19, 202, 8), // "PathRole"
QT_MOC_LITERAL(20, 211, 12), // "IsDeviceRole"
QT_MOC_LITERAL(21, 224, 13), // "IsOpticalDisc"
QT_MOC_LITERAL(22, 238, 15), // "setupNeededRole"
QT_MOC_LITERAL(23, 254, 12) // "CategoryRole"

    },
    "PlacesModel\0deviceSetupDone\0\0filePath\0"
    "onDeviceAdded\0udi\0onDeviceRemoved\0"
    "onItemChanged\0PlacesItem*\0get\0index\0"
    "requestSetup\0requestEject\0requestTeardown\0"
    "DataRole\0NameRole\0IconNameRole\0"
    "IconPathRole\0UrlRole\0PathRole\0"
    "IsDeviceRole\0IsOpticalDisc\0setupNeededRole\0"
    "CategoryRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlacesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   57,    2, 0x08 /* Private */,
       6,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   66,    2, 0x02 /* Public */,
      11,    1,   69,    2, 0x02 /* Public */,
      12,    1,   72,    2, 0x02 /* Public */,
      13,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8,    2,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,    9,   83,

 // enum data: key, value
      15, uint(PlacesModel::NameRole),
      16, uint(PlacesModel::IconNameRole),
      17, uint(PlacesModel::IconPathRole),
      18, uint(PlacesModel::UrlRole),
      19, uint(PlacesModel::PathRole),
      20, uint(PlacesModel::IsDeviceRole),
      21, uint(PlacesModel::IsOpticalDisc),
      22, uint(PlacesModel::setupNeededRole),
      23, uint(PlacesModel::CategoryRole),

       0        // eod
};

void PlacesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlacesModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceSetupDone((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onDeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onDeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onItemChanged((*reinterpret_cast< PlacesItem*(*)>(_a[1]))); break;
        case 4: { QVariantMap _r = _t->get((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->requestSetup((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 6: _t->requestEject((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->requestTeardown((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlacesItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlacesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlacesModel::deviceSetupDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlacesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_PlacesModel.data,
    qt_meta_data_PlacesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlacesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlacesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlacesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int PlacesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PlacesModel::deviceSetupDone(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
