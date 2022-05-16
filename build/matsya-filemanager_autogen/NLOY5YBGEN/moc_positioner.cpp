/****************************************************************************
** Meta object code from reading C++ file 'positioner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../model/positioner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'positioner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Positioner_t {
    QByteArrayData data[58];
    char stringdata0[763];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Positioner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Positioner_t qt_meta_stringdata_Positioner = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Positioner"
QT_MOC_LITERAL(1, 11, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "folderModelChanged"
QT_MOC_LITERAL(4, 46, 16), // "perStripeChanged"
QT_MOC_LITERAL(5, 63, 16), // "positionsChanged"
QT_MOC_LITERAL(6, 80, 15), // "updatePositions"
QT_MOC_LITERAL(7, 96, 19), // "sourceStatusChanged"
QT_MOC_LITERAL(8, 116, 17), // "sourceDataChanged"
QT_MOC_LITERAL(9, 134, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 146, 7), // "topLeft"
QT_MOC_LITERAL(11, 154, 11), // "bottomRight"
QT_MOC_LITERAL(12, 166, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 179, 5), // "roles"
QT_MOC_LITERAL(14, 185, 25), // "sourceModelAboutToBeReset"
QT_MOC_LITERAL(15, 211, 16), // "sourceModelReset"
QT_MOC_LITERAL(16, 228, 27), // "sourceRowsAboutToBeInserted"
QT_MOC_LITERAL(17, 256, 6), // "parent"
QT_MOC_LITERAL(18, 263, 5), // "start"
QT_MOC_LITERAL(19, 269, 3), // "end"
QT_MOC_LITERAL(20, 273, 24), // "sourceRowsAboutToBeMoved"
QT_MOC_LITERAL(21, 298, 12), // "sourceParent"
QT_MOC_LITERAL(22, 311, 11), // "sourceStart"
QT_MOC_LITERAL(23, 323, 9), // "sourceEnd"
QT_MOC_LITERAL(24, 333, 17), // "destinationParent"
QT_MOC_LITERAL(25, 351, 14), // "destinationRow"
QT_MOC_LITERAL(26, 366, 26), // "sourceRowsAboutToBeRemoved"
QT_MOC_LITERAL(27, 393, 5), // "first"
QT_MOC_LITERAL(28, 399, 4), // "last"
QT_MOC_LITERAL(29, 404, 28), // "sourceLayoutAboutToBeChanged"
QT_MOC_LITERAL(30, 433, 28), // "QList<QPersistentModelIndex>"
QT_MOC_LITERAL(31, 462, 7), // "parents"
QT_MOC_LITERAL(32, 470, 36), // "QAbstractItemModel::LayoutCha..."
QT_MOC_LITERAL(33, 507, 4), // "hint"
QT_MOC_LITERAL(34, 512, 18), // "sourceRowsInserted"
QT_MOC_LITERAL(35, 531, 15), // "sourceRowsMoved"
QT_MOC_LITERAL(36, 547, 17), // "sourceRowsRemoved"
QT_MOC_LITERAL(37, 565, 19), // "sourceLayoutChanged"
QT_MOC_LITERAL(38, 585, 3), // "map"
QT_MOC_LITERAL(39, 589, 3), // "row"
QT_MOC_LITERAL(40, 593, 11), // "nearestItem"
QT_MOC_LITERAL(41, 605, 12), // "currentIndex"
QT_MOC_LITERAL(42, 618, 13), // "Qt::ArrowType"
QT_MOC_LITERAL(43, 632, 9), // "direction"
QT_MOC_LITERAL(44, 642, 7), // "isBlank"
QT_MOC_LITERAL(45, 650, 11), // "indexForUrl"
QT_MOC_LITERAL(46, 662, 3), // "url"
QT_MOC_LITERAL(47, 666, 16), // "setRangeSelected"
QT_MOC_LITERAL(48, 683, 6), // "anchor"
QT_MOC_LITERAL(49, 690, 2), // "to"
QT_MOC_LITERAL(50, 693, 5), // "reset"
QT_MOC_LITERAL(51, 699, 4), // "move"
QT_MOC_LITERAL(52, 704, 5), // "moves"
QT_MOC_LITERAL(53, 710, 7), // "enabled"
QT_MOC_LITERAL(54, 718, 11), // "folderModel"
QT_MOC_LITERAL(55, 730, 12), // "FolderModel*"
QT_MOC_LITERAL(56, 743, 9), // "perStripe"
QT_MOC_LITERAL(57, 753, 9) // "positions"

    },
    "Positioner\0enabledChanged\0\0"
    "folderModelChanged\0perStripeChanged\0"
    "positionsChanged\0updatePositions\0"
    "sourceStatusChanged\0sourceDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0sourceModelAboutToBeReset\0"
    "sourceModelReset\0sourceRowsAboutToBeInserted\0"
    "parent\0start\0end\0sourceRowsAboutToBeMoved\0"
    "sourceParent\0sourceStart\0sourceEnd\0"
    "destinationParent\0destinationRow\0"
    "sourceRowsAboutToBeRemoved\0first\0last\0"
    "sourceLayoutAboutToBeChanged\0"
    "QList<QPersistentModelIndex>\0parents\0"
    "QAbstractItemModel::LayoutChangeHint\0"
    "hint\0sourceRowsInserted\0sourceRowsMoved\0"
    "sourceRowsRemoved\0sourceLayoutChanged\0"
    "map\0row\0nearestItem\0currentIndex\0"
    "Qt::ArrowType\0direction\0isBlank\0"
    "indexForUrl\0url\0setRangeSelected\0"
    "anchor\0to\0reset\0move\0moves\0enabled\0"
    "folderModel\0FolderModel*\0perStripe\0"
    "positions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Positioner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       4,  232, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    0,  135,    2, 0x06 /* Public */,
       4,    0,  136,    2, 0x06 /* Public */,
       5,    0,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  138,    2, 0x08 /* Private */,
       7,    0,  139,    2, 0x08 /* Private */,
       8,    3,  140,    2, 0x08 /* Private */,
      14,    0,  147,    2, 0x08 /* Private */,
      15,    0,  148,    2, 0x08 /* Private */,
      16,    3,  149,    2, 0x08 /* Private */,
      20,    5,  156,    2, 0x08 /* Private */,
      26,    3,  167,    2, 0x08 /* Private */,
      29,    2,  174,    2, 0x08 /* Private */,
      34,    3,  179,    2, 0x08 /* Private */,
      35,    5,  186,    2, 0x08 /* Private */,
      36,    3,  197,    2, 0x08 /* Private */,
      37,    2,  204,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      38,    1,  209,    2, 0x02 /* Public */,
      40,    2,  212,    2, 0x02 /* Public */,
      44,    1,  217,    2, 0x02 /* Public */,
      45,    1,  220,    2, 0x02 /* Public */,
      47,    2,  223,    2, 0x02 /* Public */,
      50,    0,  228,    2, 0x02 /* Public */,
      51,    1,  229,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 12,   10,   11,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int, 0x80000000 | 9, QMetaType::Int,   21,   22,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   17,   27,   28,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 32,   31,   33,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   17,   27,   28,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int, 0x80000000 | 9, QMetaType::Int,   21,   22,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   17,   27,   28,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 32,   31,   33,

 // methods: parameters
    QMetaType::Int, QMetaType::Int,   39,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 42,   41,   43,
    QMetaType::Bool, QMetaType::Int,   39,
    QMetaType::Int, QMetaType::QUrl,   46,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,   52,

 // properties: name, type, flags
      53, QMetaType::Bool, 0x00495103,
      54, 0x80000000 | 55, 0x0049510b,
      56, QMetaType::Int, 0x00495103,
      57, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Positioner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Positioner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->folderModelChanged(); break;
        case 2: _t->perStripeChanged(); break;
        case 3: _t->positionsChanged(); break;
        case 4: _t->updatePositions(); break;
        case 5: _t->sourceStatusChanged(); break;
        case 6: _t->sourceDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 7: _t->sourceModelAboutToBeReset(); break;
        case 8: _t->sourceModelReset(); break;
        case 9: _t->sourceRowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->sourceRowsAboutToBeMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 11: _t->sourceRowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->sourceLayoutAboutToBeChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 13: _t->sourceRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->sourceRowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: _t->sourceRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->sourceLayoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 17: { int _r = _t->map((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->nearestItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::ArrowType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->isBlank((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { int _r = _t->indexForUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setRangeSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->reset(); break;
        case 23: _t->move((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Positioner::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Positioner::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Positioner::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Positioner::folderModelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Positioner::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Positioner::perStripeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Positioner::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Positioner::positionsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Positioner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enabled(); break;
        case 1: *reinterpret_cast< FolderModel**>(_v) = _t->folderModel(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->perStripe(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->positions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Positioner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFolderModel(*reinterpret_cast< FolderModel**>(_v)); break;
        case 2: _t->setPerStripe(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPositions(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Positioner::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_Positioner.data,
    qt_meta_data_Positioner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Positioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Positioner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Positioner.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int Positioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
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
void Positioner::enabledChanged()const
{
    QMetaObject::activate(const_cast< Positioner *>(this), &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Positioner::folderModelChanged()const
{
    QMetaObject::activate(const_cast< Positioner *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Positioner::perStripeChanged()const
{
    QMetaObject::activate(const_cast< Positioner *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Positioner::positionsChanged()const
{
    QMetaObject::activate(const_cast< Positioner *>(this), &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
