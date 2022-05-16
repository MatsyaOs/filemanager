/****************************************************************************
** Meta object code from reading C++ file 'declarativemimedata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../draganddrop/declarativemimedata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativemimedata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeclarativeMimeData_t {
    QByteArrayData data[23];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeclarativeMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeclarativeMimeData_t qt_meta_stringdata_DeclarativeMimeData = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DeclarativeMimeData"
QT_MOC_LITERAL(1, 20, 11), // "textChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "htmlChanged"
QT_MOC_LITERAL(4, 45, 10), // "urlChanged"
QT_MOC_LITERAL(5, 56, 11), // "urlsChanged"
QT_MOC_LITERAL(6, 68, 12), // "colorChanged"
QT_MOC_LITERAL(7, 81, 13), // "sourceChanged"
QT_MOC_LITERAL(8, 95, 8), // "hasColor"
QT_MOC_LITERAL(9, 104, 7), // "setData"
QT_MOC_LITERAL(10, 112, 8), // "mimeType"
QT_MOC_LITERAL(11, 121, 4), // "data"
QT_MOC_LITERAL(12, 126, 18), // "getDataAsByteArray"
QT_MOC_LITERAL(13, 145, 6), // "format"
QT_MOC_LITERAL(14, 152, 4), // "text"
QT_MOC_LITERAL(15, 157, 4), // "html"
QT_MOC_LITERAL(16, 162, 3), // "url"
QT_MOC_LITERAL(17, 166, 4), // "urls"
QT_MOC_LITERAL(18, 171, 5), // "color"
QT_MOC_LITERAL(19, 177, 6), // "source"
QT_MOC_LITERAL(20, 184, 11), // "QQuickItem*"
QT_MOC_LITERAL(21, 196, 7), // "hasUrls"
QT_MOC_LITERAL(22, 204, 7) // "formats"

    },
    "DeclarativeMimeData\0textChanged\0\0"
    "htmlChanged\0urlChanged\0urlsChanged\0"
    "colorChanged\0sourceChanged\0hasColor\0"
    "setData\0mimeType\0data\0getDataAsByteArray\0"
    "format\0text\0html\0url\0urls\0color\0source\0"
    "QQuickItem*\0hasUrls\0formats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeclarativeMimeData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       8,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   65,    2, 0x02 /* Public */,
       9,    2,   66,    2, 0x02 /* Public */,
      12,    1,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   10,   11,
    QMetaType::QByteArray, QMetaType::QString,   13,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QUrl, 0x00495103,
      17, QMetaType::QJsonArray, 0x00495103,
      18, QMetaType::QColor, 0x00495103,
      19, 0x80000000 | 20, 0x0049510b,
      21, QMetaType::Bool, 0x00495001,
      22, QMetaType::QStringList, 0x00095001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       3,
       0,

       0        // eod
};

void DeclarativeMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeclarativeMimeData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->htmlChanged(); break;
        case 2: _t->urlChanged(); break;
        case 3: _t->urlsChanged(); break;
        case 4: _t->colorChanged(); break;
        case 5: _t->sourceChanged(); break;
        case 6: { bool _r = _t->hasColor();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 8: { QByteArray _r = _t->getDataAsByteArray((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::htmlChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::urlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::urlsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::colorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeclarativeMimeData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeMimeData::sourceChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeclarativeMimeData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->html(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 3: *reinterpret_cast< QJsonArray*>(_v) = _t->urls(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->source(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasUrls(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->formats(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeclarativeMimeData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHtml(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 3: _t->setUrls(*reinterpret_cast< QJsonArray*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setSource(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeclarativeMimeData::staticMetaObject = { {
    QMetaObject::SuperData::link<QMimeData::staticMetaObject>(),
    qt_meta_stringdata_DeclarativeMimeData.data,
    qt_meta_data_DeclarativeMimeData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeclarativeMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeclarativeMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeclarativeMimeData.stringdata0))
        return static_cast<void*>(this);
    return QMimeData::qt_metacast(_clname);
}

int DeclarativeMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeclarativeMimeData::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DeclarativeMimeData::htmlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeclarativeMimeData::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DeclarativeMimeData::urlsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DeclarativeMimeData::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DeclarativeMimeData::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
