/****************************************************************************
** Meta object code from reading C++ file 'itemviewadapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../widgets/itemviewadapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemviewadapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ItemViewAdapter_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemViewAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemViewAdapter_t qt_meta_stringdata_ItemViewAdapter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ItemViewAdapter"
QT_MOC_LITERAL(1, 16, 12), // "viewScrolled"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "adapterViewChanged"
QT_MOC_LITERAL(4, 49, 19), // "adapterModelChanged"
QT_MOC_LITERAL(5, 69, 22), // "adapterIconSizeChanged"
QT_MOC_LITERAL(6, 92, 25), // "adapterVisibleAreaChanged"
QT_MOC_LITERAL(7, 118, 11), // "adapterView"
QT_MOC_LITERAL(8, 130, 12), // "adapterModel"
QT_MOC_LITERAL(9, 143, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(10, 163, 15), // "adapterIconSize"
QT_MOC_LITERAL(11, 179, 18) // "adapterVisibleArea"

    },
    "ItemViewAdapter\0viewScrolled\0\0"
    "adapterViewChanged\0adapterModelChanged\0"
    "adapterIconSizeChanged\0adapterVisibleAreaChanged\0"
    "adapterView\0adapterModel\0QAbstractItemModel*\0"
    "adapterIconSize\0adapterVisibleArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemViewAdapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QObjectStar, 0x00495103,
       8, 0x80000000 | 9, 0x0049510b,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::QRect, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,

       0        // eod
};

void ItemViewAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ItemViewAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewScrolled(); break;
        case 1: _t->adapterViewChanged(); break;
        case 2: _t->adapterModelChanged(); break;
        case 3: _t->adapterIconSizeChanged(); break;
        case 4: _t->adapterVisibleAreaChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ItemViewAdapter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemViewAdapter::viewScrolled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ItemViewAdapter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemViewAdapter::adapterViewChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ItemViewAdapter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemViewAdapter::adapterModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ItemViewAdapter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemViewAdapter::adapterIconSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ItemViewAdapter::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ItemViewAdapter::adapterVisibleAreaChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ItemViewAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->adapterView(); break;
        case 1: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->adapterModel(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->adapterIconSize(); break;
        case 3: *reinterpret_cast< QRect*>(_v) = _t->adapterVisibleArea(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ItemViewAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAdapterView(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setAdapterModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 2: _t->setAdapterIconSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAdapterVisibleArea(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ItemViewAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ItemViewAdapter.data,
    qt_meta_data_ItemViewAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ItemViewAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemViewAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ItemViewAdapter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ItemViewAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ItemViewAdapter::viewScrolled()const
{
    QMetaObject::activate(const_cast< ItemViewAdapter *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ItemViewAdapter::adapterViewChanged()const
{
    QMetaObject::activate(const_cast< ItemViewAdapter *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ItemViewAdapter::adapterModelChanged()const
{
    QMetaObject::activate(const_cast< ItemViewAdapter *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ItemViewAdapter::adapterIconSizeChanged()const
{
    QMetaObject::activate(const_cast< ItemViewAdapter *>(this), &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ItemViewAdapter::adapterVisibleAreaChanged()const
{
    QMetaObject::activate(const_cast< ItemViewAdapter *>(this), &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
