/****************************************************************************
** Meta object code from reading C++ file 'declarativedroparea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../draganddrop/declarativedroparea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativedroparea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeclarativeDropArea_t {
    QByteArrayData data[17];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeclarativeDropArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeclarativeDropArea_t qt_meta_stringdata_DeclarativeDropArea = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DeclarativeDropArea"
QT_MOC_LITERAL(1, 20, 9), // "dragEnter"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "DeclarativeDragDropEvent*"
QT_MOC_LITERAL(4, 57, 5), // "event"
QT_MOC_LITERAL(5, 63, 9), // "dragLeave"
QT_MOC_LITERAL(6, 73, 8), // "dragMove"
QT_MOC_LITERAL(7, 82, 4), // "drop"
QT_MOC_LITERAL(8, 87, 14), // "enabledChanged"
QT_MOC_LITERAL(9, 102, 22), // "preventStealingChanged"
QT_MOC_LITERAL(10, 125, 19), // "containsDragChanged"
QT_MOC_LITERAL(11, 145, 9), // "contained"
QT_MOC_LITERAL(12, 155, 22), // "temporaryInhibitParent"
QT_MOC_LITERAL(13, 178, 7), // "inhibit"
QT_MOC_LITERAL(14, 186, 7), // "enabled"
QT_MOC_LITERAL(15, 194, 15), // "preventStealing"
QT_MOC_LITERAL(16, 210, 12) // "containsDrag"

    },
    "DeclarativeDropArea\0dragEnter\0\0"
    "DeclarativeDragDropEvent*\0event\0"
    "dragLeave\0dragMove\0drop\0enabledChanged\0"
    "preventStealingChanged\0containsDragChanged\0"
    "contained\0temporaryInhibitParent\0"
    "inhibit\0enabled\0preventStealing\0"
    "containsDrag"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeclarativeDropArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,
       8,    0,   66,    2, 0x06 /* Public */,
       9,    0,   67,    2, 0x06 /* Public */,
      10,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       4,
       5,
       6,

       0        // eod
};

void DeclarativeDropArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeclarativeDropArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dragEnter((*reinterpret_cast< DeclarativeDragDropEvent*(*)>(_a[1]))); break;
        case 1: _t->dragLeave((*reinterpret_cast< DeclarativeDragDropEvent*(*)>(_a[1]))); break;
        case 2: _t->dragMove((*reinterpret_cast< DeclarativeDragDropEvent*(*)>(_a[1]))); break;
        case 3: _t->drop((*reinterpret_cast< DeclarativeDragDropEvent*(*)>(_a[1]))); break;
        case 4: _t->enabledChanged(); break;
        case 5: _t->preventStealingChanged(); break;
        case 6: _t->containsDragChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->temporaryInhibitParent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeclarativeDropArea::*)(DeclarativeDragDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::dragEnter)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)(DeclarativeDragDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::dragLeave)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)(DeclarativeDragDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::dragMove)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)(DeclarativeDragDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::drop)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::enabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::preventStealingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeclarativeDropArea::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDropArea::containsDragChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeclarativeDropArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->preventStealing(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->containsDrag(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeclarativeDropArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPreventStealing(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeclarativeDropArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_DeclarativeDropArea.data,
    qt_meta_data_DeclarativeDropArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeclarativeDropArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeclarativeDropArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeclarativeDropArea.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int DeclarativeDropArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeclarativeDropArea::dragEnter(DeclarativeDragDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeclarativeDropArea::dragLeave(DeclarativeDragDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeclarativeDropArea::dragMove(DeclarativeDragDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeclarativeDropArea::drop(DeclarativeDragDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeclarativeDropArea::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DeclarativeDropArea::preventStealingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DeclarativeDropArea::containsDragChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
