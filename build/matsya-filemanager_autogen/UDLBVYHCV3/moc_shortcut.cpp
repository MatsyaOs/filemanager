/****************************************************************************
** Meta object code from reading C++ file 'shortcut.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../helper/shortcut.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcut.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShortCut_t {
    QByteArrayData data[19];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortCut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortCut_t qt_meta_stringdata_ShortCut = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ShortCut"
QT_MOC_LITERAL(1, 9, 4), // "open"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "copy"
QT_MOC_LITERAL(4, 20, 3), // "cut"
QT_MOC_LITERAL(5, 24, 5), // "paste"
QT_MOC_LITERAL(6, 30, 6), // "rename"
QT_MOC_LITERAL(7, 37, 7), // "refresh"
QT_MOC_LITERAL(8, 45, 14), // "openPathEditor"
QT_MOC_LITERAL(9, 60, 9), // "selectAll"
QT_MOC_LITERAL(10, 70, 9), // "backspace"
QT_MOC_LITERAL(11, 80, 10), // "deleteFile"
QT_MOC_LITERAL(12, 91, 10), // "showHidden"
QT_MOC_LITERAL(13, 102, 10), // "keyPressed"
QT_MOC_LITERAL(14, 113, 4), // "text"
QT_MOC_LITERAL(15, 118, 5), // "close"
QT_MOC_LITERAL(16, 124, 4), // "undo"
QT_MOC_LITERAL(17, 129, 7), // "install"
QT_MOC_LITERAL(18, 137, 6) // "target"

    },
    "ShortCut\0open\0\0copy\0cut\0paste\0rename\0"
    "refresh\0openPathEditor\0selectAll\0"
    "backspace\0deleteFile\0showHidden\0"
    "keyPressed\0text\0close\0undo\0install\0"
    "target"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortCut[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,
      10,    0,  102,    2, 0x06 /* Public */,
      11,    0,  103,    2, 0x06 /* Public */,
      12,    0,  104,    2, 0x06 /* Public */,
      13,    1,  105,    2, 0x06 /* Public */,
      15,    0,  108,    2, 0x06 /* Public */,
      16,    0,  109,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      17,    1,  110,    2, 0x02 /* Public */,
      17,    0,  113,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QObjectStar,   18,
    QMetaType::Void,

       0        // eod
};

void ShortCut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortCut *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->copy(); break;
        case 2: _t->cut(); break;
        case 3: _t->paste(); break;
        case 4: _t->rename(); break;
        case 5: _t->refresh(); break;
        case 6: _t->openPathEditor(); break;
        case 7: _t->selectAll(); break;
        case 8: _t->backspace(); break;
        case 9: _t->deleteFile(); break;
        case 10: _t->showHidden(); break;
        case 11: _t->keyPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->close(); break;
        case 13: _t->undo(); break;
        case 14: _t->install((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 15: _t->install(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::open)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::copy)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::cut)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::paste)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::rename)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::refresh)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::openPathEditor)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::selectAll)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::backspace)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::deleteFile)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::showHidden)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::keyPressed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::close)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ShortCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortCut::undo)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ShortCut::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ShortCut.data,
    qt_meta_data_ShortCut,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShortCut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortCut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShortCut.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShortCut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ShortCut::open()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ShortCut::copy()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ShortCut::cut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ShortCut::paste()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ShortCut::rename()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ShortCut::refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ShortCut::openPathEditor()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ShortCut::selectAll()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ShortCut::backspace()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ShortCut::deleteFile()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ShortCut::showHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ShortCut::keyPressed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ShortCut::close()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ShortCut::undo()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
