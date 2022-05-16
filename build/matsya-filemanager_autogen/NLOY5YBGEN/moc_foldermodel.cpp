/****************************************************************************
** Meta object code from reading C++ file 'foldermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../model/foldermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foldermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FolderModel_t {
    QByteArrayData data[131];
    char stringdata0[1632];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FolderModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FolderModel_t qt_meta_stringdata_FolderModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FolderModel"
QT_MOC_LITERAL(1, 12, 10), // "urlChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "listingCompleted"
QT_MOC_LITERAL(4, 41, 15), // "listingCanceled"
QT_MOC_LITERAL(5, 57, 18), // "resolvedUrlChanged"
QT_MOC_LITERAL(6, 76, 13), // "statusChanged"
QT_MOC_LITERAL(7, 90, 15), // "sortModeChanged"
QT_MOC_LITERAL(8, 106, 15), // "sortDescChanged"
QT_MOC_LITERAL(9, 122, 20), // "sortDirsFirstChanged"
QT_MOC_LITERAL(10, 143, 17), // "filterModeChanged"
QT_MOC_LITERAL(11, 161, 13), // "requestRename"
QT_MOC_LITERAL(12, 175, 15), // "draggingChanged"
QT_MOC_LITERAL(13, 191, 18), // "viewAdapterChanged"
QT_MOC_LITERAL(14, 210, 16), // "isDesktopChanged"
QT_MOC_LITERAL(15, 227, 21), // "selectionCountChanged"
QT_MOC_LITERAL(16, 249, 12), // "countChanged"
QT_MOC_LITERAL(17, 262, 20), // "filterPatternChanged"
QT_MOC_LITERAL(18, 283, 22), // "filterMimeTypesChanged"
QT_MOC_LITERAL(19, 306, 23), // "selectedItemSizeChanged"
QT_MOC_LITERAL(20, 330, 22), // "showHiddenFilesChanged"
QT_MOC_LITERAL(21, 353, 12), // "scrollToItem"
QT_MOC_LITERAL(22, 366, 5), // "index"
QT_MOC_LITERAL(23, 372, 12), // "notification"
QT_MOC_LITERAL(24, 385, 7), // "message"
QT_MOC_LITERAL(25, 393, 4), // "move"
QT_MOC_LITERAL(26, 398, 1), // "x"
QT_MOC_LITERAL(27, 400, 1), // "y"
QT_MOC_LITERAL(28, 402, 11), // "QList<QUrl>"
QT_MOC_LITERAL(29, 414, 4), // "urls"
QT_MOC_LITERAL(30, 419, 19), // "currentIndexChanged"
QT_MOC_LITERAL(31, 439, 16), // "selectionChanged"
QT_MOC_LITERAL(32, 456, 14), // "QItemSelection"
QT_MOC_LITERAL(33, 471, 8), // "selected"
QT_MOC_LITERAL(34, 480, 10), // "deselected"
QT_MOC_LITERAL(35, 491, 20), // "dragSelectedInternal"
QT_MOC_LITERAL(36, 512, 14), // "onRowsInserted"
QT_MOC_LITERAL(37, 527, 11), // "QModelIndex"
QT_MOC_LITERAL(38, 539, 6), // "parent"
QT_MOC_LITERAL(39, 546, 5), // "first"
QT_MOC_LITERAL(40, 552, 4), // "last"
QT_MOC_LITERAL(41, 557, 25), // "delayUpdateNeedSelectUrls"
QT_MOC_LITERAL(42, 583, 20), // "updateNeedSelectUrls"
QT_MOC_LITERAL(43, 604, 7), // "resolve"
QT_MOC_LITERAL(44, 612, 3), // "url"
QT_MOC_LITERAL(45, 616, 8), // "homePath"
QT_MOC_LITERAL(46, 625, 11), // "desktopPath"
QT_MOC_LITERAL(47, 637, 6), // "action"
QT_MOC_LITERAL(48, 644, 8), // "QAction*"
QT_MOC_LITERAL(49, 653, 4), // "name"
QT_MOC_LITERAL(50, 658, 2), // "up"
QT_MOC_LITERAL(51, 661, 6), // "goBack"
QT_MOC_LITERAL(52, 668, 9), // "goForward"
QT_MOC_LITERAL(53, 678, 7), // "refresh"
QT_MOC_LITERAL(54, 686, 4), // "undo"
QT_MOC_LITERAL(55, 691, 21), // "supportSetAsWallpaper"
QT_MOC_LITERAL(56, 713, 8), // "mimeType"
QT_MOC_LITERAL(57, 722, 21), // "fileExtensionBoundary"
QT_MOC_LITERAL(58, 744, 3), // "row"
QT_MOC_LITERAL(59, 748, 12), // "hasSelection"
QT_MOC_LITERAL(60, 761, 10), // "isSelected"
QT_MOC_LITERAL(61, 772, 7), // "isBlank"
QT_MOC_LITERAL(62, 780, 11), // "setSelected"
QT_MOC_LITERAL(63, 792, 9), // "selectAll"
QT_MOC_LITERAL(64, 802, 14), // "toggleSelected"
QT_MOC_LITERAL(65, 817, 16), // "setRangeSelected"
QT_MOC_LITERAL(66, 834, 6), // "anchor"
QT_MOC_LITERAL(67, 841, 2), // "to"
QT_MOC_LITERAL(68, 844, 15), // "updateSelection"
QT_MOC_LITERAL(69, 860, 4), // "rows"
QT_MOC_LITERAL(70, 865, 6), // "toggle"
QT_MOC_LITERAL(71, 872, 14), // "clearSelection"
QT_MOC_LITERAL(72, 887, 12), // "pinSelection"
QT_MOC_LITERAL(73, 900, 14), // "unpinSelection"
QT_MOC_LITERAL(74, 915, 9), // "newFolder"
QT_MOC_LITERAL(75, 925, 11), // "newTextFile"
QT_MOC_LITERAL(76, 937, 6), // "rename"
QT_MOC_LITERAL(77, 944, 4), // "copy"
QT_MOC_LITERAL(78, 949, 5), // "paste"
QT_MOC_LITERAL(79, 955, 3), // "cut"
QT_MOC_LITERAL(80, 959, 12), // "openSelected"
QT_MOC_LITERAL(81, 972, 18), // "showOpenWithDialog"
QT_MOC_LITERAL(82, 991, 14), // "deleteSelected"
QT_MOC_LITERAL(83, 1006, 19), // "moveSelectedToTrash"
QT_MOC_LITERAL(84, 1026, 10), // "emptyTrash"
QT_MOC_LITERAL(85, 1037, 14), // "keyDeletePress"
QT_MOC_LITERAL(86, 1052, 26), // "setDragHotSpotScrollOffset"
QT_MOC_LITERAL(87, 1079, 16), // "addItemDragImage"
QT_MOC_LITERAL(88, 1096, 5), // "width"
QT_MOC_LITERAL(89, 1102, 6), // "height"
QT_MOC_LITERAL(90, 1109, 5), // "image"
QT_MOC_LITERAL(91, 1115, 15), // "clearDragImages"
QT_MOC_LITERAL(92, 1131, 12), // "dragSelected"
QT_MOC_LITERAL(93, 1144, 4), // "drop"
QT_MOC_LITERAL(94, 1149, 11), // "QQuickItem*"
QT_MOC_LITERAL(95, 1161, 6), // "target"
QT_MOC_LITERAL(96, 1168, 9), // "dropEvent"
QT_MOC_LITERAL(97, 1178, 20), // "setWallpaperSelected"
QT_MOC_LITERAL(98, 1199, 15), // "openContextMenu"
QT_MOC_LITERAL(99, 1215, 12), // "visualParent"
QT_MOC_LITERAL(100, 1228, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(101, 1250, 9), // "modifiers"
QT_MOC_LITERAL(102, 1260, 20), // "openPropertiesDialog"
QT_MOC_LITERAL(103, 1281, 14), // "openInTerminal"
QT_MOC_LITERAL(104, 1296, 25), // "openChangeWallpaperDialog"
QT_MOC_LITERAL(105, 1322, 16), // "openDeleteDialog"
QT_MOC_LITERAL(106, 1339, 15), // "openInNewWindow"
QT_MOC_LITERAL(107, 1355, 23), // "updateSelectedItemsSize"
QT_MOC_LITERAL(108, 1379, 14), // "keyboardSearch"
QT_MOC_LITERAL(109, 1394, 4), // "text"
QT_MOC_LITERAL(110, 1399, 16), // "clearPixmapCache"
QT_MOC_LITERAL(111, 1416, 11), // "resolvedUrl"
QT_MOC_LITERAL(112, 1428, 6), // "status"
QT_MOC_LITERAL(113, 1435, 6), // "Status"
QT_MOC_LITERAL(114, 1442, 8), // "sortMode"
QT_MOC_LITERAL(115, 1451, 13), // "sortDirsFirst"
QT_MOC_LITERAL(116, 1465, 8), // "dragging"
QT_MOC_LITERAL(117, 1474, 11), // "viewAdapter"
QT_MOC_LITERAL(118, 1486, 9), // "isDesktop"
QT_MOC_LITERAL(119, 1496, 14), // "selectionCount"
QT_MOC_LITERAL(120, 1511, 10), // "filterMode"
QT_MOC_LITERAL(121, 1522, 13), // "filterPattern"
QT_MOC_LITERAL(122, 1536, 5), // "count"
QT_MOC_LITERAL(123, 1542, 15), // "filterMimeTypes"
QT_MOC_LITERAL(124, 1558, 16), // "selectedItemSize"
QT_MOC_LITERAL(125, 1575, 15), // "showHiddenFiles"
QT_MOC_LITERAL(126, 1591, 12), // "currentIndex"
QT_MOC_LITERAL(127, 1604, 4), // "None"
QT_MOC_LITERAL(128, 1609, 5), // "Ready"
QT_MOC_LITERAL(129, 1615, 7), // "Listing"
QT_MOC_LITERAL(130, 1623, 8) // "Canceled"

    },
    "FolderModel\0urlChanged\0\0listingCompleted\0"
    "listingCanceled\0resolvedUrlChanged\0"
    "statusChanged\0sortModeChanged\0"
    "sortDescChanged\0sortDirsFirstChanged\0"
    "filterModeChanged\0requestRename\0"
    "draggingChanged\0viewAdapterChanged\0"
    "isDesktopChanged\0selectionCountChanged\0"
    "countChanged\0filterPatternChanged\0"
    "filterMimeTypesChanged\0selectedItemSizeChanged\0"
    "showHiddenFilesChanged\0scrollToItem\0"
    "index\0notification\0message\0move\0x\0y\0"
    "QList<QUrl>\0urls\0currentIndexChanged\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0dragSelectedInternal\0"
    "onRowsInserted\0QModelIndex\0parent\0"
    "first\0last\0delayUpdateNeedSelectUrls\0"
    "updateNeedSelectUrls\0resolve\0url\0"
    "homePath\0desktopPath\0action\0QAction*\0"
    "name\0up\0goBack\0goForward\0refresh\0undo\0"
    "supportSetAsWallpaper\0mimeType\0"
    "fileExtensionBoundary\0row\0hasSelection\0"
    "isSelected\0isBlank\0setSelected\0selectAll\0"
    "toggleSelected\0setRangeSelected\0anchor\0"
    "to\0updateSelection\0rows\0toggle\0"
    "clearSelection\0pinSelection\0unpinSelection\0"
    "newFolder\0newTextFile\0rename\0copy\0"
    "paste\0cut\0openSelected\0showOpenWithDialog\0"
    "deleteSelected\0moveSelectedToTrash\0"
    "emptyTrash\0keyDeletePress\0"
    "setDragHotSpotScrollOffset\0addItemDragImage\0"
    "width\0height\0image\0clearDragImages\0"
    "dragSelected\0drop\0QQuickItem*\0target\0"
    "dropEvent\0setWallpaperSelected\0"
    "openContextMenu\0visualParent\0"
    "Qt::KeyboardModifiers\0modifiers\0"
    "openPropertiesDialog\0openInTerminal\0"
    "openChangeWallpaperDialog\0openDeleteDialog\0"
    "openInNewWindow\0updateSelectedItemsSize\0"
    "keyboardSearch\0text\0clearPixmapCache\0"
    "resolvedUrl\0status\0Status\0sortMode\0"
    "sortDirsFirst\0dragging\0viewAdapter\0"
    "isDesktop\0selectionCount\0filterMode\0"
    "filterPattern\0count\0filterMimeTypes\0"
    "selectedItemSize\0showHiddenFiles\0"
    "currentIndex\0None\0Ready\0Listing\0"
    "Canceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FolderModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
      16,  582, // properties
       1,  646, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  414,    2, 0x06 /* Public */,
       3,    0,  415,    2, 0x06 /* Public */,
       4,    0,  416,    2, 0x06 /* Public */,
       5,    0,  417,    2, 0x06 /* Public */,
       6,    0,  418,    2, 0x06 /* Public */,
       7,    0,  419,    2, 0x06 /* Public */,
       8,    0,  420,    2, 0x06 /* Public */,
       9,    0,  421,    2, 0x06 /* Public */,
      10,    0,  422,    2, 0x06 /* Public */,
      11,    0,  423,    2, 0x06 /* Public */,
      12,    0,  424,    2, 0x06 /* Public */,
      13,    0,  425,    2, 0x06 /* Public */,
      14,    0,  426,    2, 0x06 /* Public */,
      15,    0,  427,    2, 0x06 /* Public */,
      16,    0,  428,    2, 0x06 /* Public */,
      17,    0,  429,    2, 0x06 /* Public */,
      18,    0,  430,    2, 0x06 /* Public */,
      19,    0,  431,    2, 0x06 /* Public */,
      20,    0,  432,    2, 0x06 /* Public */,
      21,    1,  433,    2, 0x06 /* Public */,
      23,    1,  436,    2, 0x06 /* Public */,
      25,    3,  439,    2, 0x06 /* Public */,
      30,    0,  446,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    2,  447,    2, 0x08 /* Private */,
      35,    2,  452,    2, 0x08 /* Private */,
      36,    3,  457,    2, 0x08 /* Private */,
      41,    0,  464,    2, 0x08 /* Private */,
      42,    0,  465,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      43,    1,  466,    2, 0x02 /* Public */,
      45,    0,  469,    2, 0x02 /* Public */,
      46,    0,  470,    2, 0x02 /* Public */,
      47,    1,  471,    2, 0x02 /* Public */,
      50,    0,  474,    2, 0x02 /* Public */,
      51,    0,  475,    2, 0x02 /* Public */,
      52,    0,  476,    2, 0x02 /* Public */,
      53,    0,  477,    2, 0x02 /* Public */,
      54,    0,  478,    2, 0x02 /* Public */,
      55,    1,  479,    2, 0x02 /* Public */,
      57,    1,  482,    2, 0x02 /* Public */,
      59,    0,  485,    2, 0x02 /* Public */,
      60,    1,  486,    2, 0x02 /* Public */,
      61,    1,  489,    2, 0x02 /* Public */,
      62,    1,  492,    2, 0x02 /* Public */,
      63,    0,  495,    2, 0x02 /* Public */,
      64,    1,  496,    2, 0x02 /* Public */,
      65,    2,  499,    2, 0x02 /* Public */,
      68,    2,  504,    2, 0x02 /* Public */,
      71,    0,  509,    2, 0x02 /* Public */,
      72,    0,  510,    2, 0x02 /* Public */,
      73,    0,  511,    2, 0x02 /* Public */,
      74,    0,  512,    2, 0x02 /* Public */,
      75,    0,  513,    2, 0x02 /* Public */,
      76,    2,  514,    2, 0x02 /* Public */,
      77,    0,  519,    2, 0x02 /* Public */,
      78,    0,  520,    2, 0x02 /* Public */,
      79,    0,  521,    2, 0x02 /* Public */,
      80,    0,  522,    2, 0x02 /* Public */,
      81,    0,  523,    2, 0x02 /* Public */,
      82,    0,  524,    2, 0x02 /* Public */,
      83,    0,  525,    2, 0x02 /* Public */,
      84,    0,  526,    2, 0x02 /* Public */,
      85,    0,  527,    2, 0x02 /* Public */,
      86,    2,  528,    2, 0x02 /* Public */,
      87,    6,  533,    2, 0x02 /* Public */,
      91,    0,  546,    2, 0x02 /* Public */,
      92,    2,  547,    2, 0x02 /* Public */,
      93,    3,  552,    2, 0x02 /* Public */,
      97,    0,  559,    2, 0x02 /* Public */,
      98,    2,  560,    2, 0x02 /* Public */,
      98,    1,  565,    2, 0x22 /* Public | MethodCloned */,
      98,    0,  568,    2, 0x22 /* Public | MethodCloned */,
     102,    0,  569,    2, 0x02 /* Public */,
     103,    0,  570,    2, 0x02 /* Public */,
     104,    0,  571,    2, 0x02 /* Public */,
     105,    0,  572,    2, 0x02 /* Public */,
     106,    1,  573,    2, 0x02 /* Public */,
     106,    0,  576,    2, 0x22 /* Public | MethodCloned */,
     107,    0,  577,    2, 0x02 /* Public */,
     108,    1,  578,    2, 0x02 /* Public */,
     110,    0,  581,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 28,   26,   27,   29,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 32,   33,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Int, QMetaType::Int,   38,   39,   40,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QUrl, QMetaType::QString,   44,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 48, QMetaType::QString,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   56,
    QMetaType::Int, QMetaType::Int,   58,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,   58,
    QMetaType::Bool, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   66,   67,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::Bool,   69,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   58,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::QVariant,   58,   26,   27,   88,   89,   90,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, 0x80000000 | 94, QMetaType::QObjectStar, QMetaType::Int,   95,   96,   58,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 94, 0x80000000 | 100,   99,  101,
    QMetaType::Void, 0x80000000 | 94,   99,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  109,
    QMetaType::Void,

 // properties: name, type, flags
      44, QMetaType::QString, 0x00495103,
     111, QMetaType::QUrl, 0x00495001,
     112, 0x80000000 | 113, 0x00495009,
     114, QMetaType::Int, 0x00495103,
     115, QMetaType::Bool, 0x00495103,
     116, QMetaType::Bool, 0x00495001,
     117, QMetaType::QObjectStar, 0x00495103,
     118, QMetaType::Bool, 0x00495103,
     119, QMetaType::Int, 0x00495001,
     120, QMetaType::Int, 0x00495103,
     121, QMetaType::QString, 0x00495103,
     122, QMetaType::Int, 0x00495001,
     123, QMetaType::QStringList, 0x00495103,
     124, QMetaType::QString, 0x00495001,
     125, QMetaType::Bool, 0x00495103,
     126, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       3,
       4,
       5,
       7,
      10,
      11,
      12,
      13,
       8,
      15,
      14,
      16,
      17,
      18,
      22,

 // enums: name, alias, flags, count, data
     113,  113, 0x0,    4,  651,

 // enum data: key, value
     127, uint(FolderModel::None),
     128, uint(FolderModel::Ready),
     129, uint(FolderModel::Listing),
     130, uint(FolderModel::Canceled),

       0        // eod
};

void FolderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->urlChanged(); break;
        case 1: _t->listingCompleted(); break;
        case 2: _t->listingCanceled(); break;
        case 3: _t->resolvedUrlChanged(); break;
        case 4: _t->statusChanged(); break;
        case 5: _t->sortModeChanged(); break;
        case 6: _t->sortDescChanged(); break;
        case 7: _t->sortDirsFirstChanged(); break;
        case 8: _t->filterModeChanged(); break;
        case 9: _t->requestRename(); break;
        case 10: _t->draggingChanged(); break;
        case 11: _t->viewAdapterChanged(); break;
        case 12: _t->isDesktopChanged(); break;
        case 13: _t->selectionCountChanged(); break;
        case 14: _t->countChanged(); break;
        case 15: _t->filterPatternChanged(); break;
        case 16: _t->filterMimeTypesChanged(); break;
        case 17: _t->selectedItemSizeChanged(); break;
        case 18: _t->showHiddenFilesChanged(); break;
        case 19: _t->scrollToItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->notification((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QList<QUrl>(*)>(_a[3]))); break;
        case 22: _t->currentIndexChanged(); break;
        case 23: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 24: _t->dragSelectedInternal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->onRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 26: _t->delayUpdateNeedSelectUrls(); break;
        case 27: _t->updateNeedSelectUrls(); break;
        case 28: { QUrl _r = _t->resolve((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->homePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: { QString _r = _t->desktopPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: { QAction* _r = _t->action((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAction**>(_a[0]) = std::move(_r); }  break;
        case 32: _t->up(); break;
        case 33: _t->goBack(); break;
        case 34: _t->goForward(); break;
        case 35: _t->refresh(); break;
        case 36: _t->undo(); break;
        case 37: { bool _r = _t->supportSetAsWallpaper((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { int _r = _t->fileExtensionBoundary((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->hasSelection();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->isSelected((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->isBlank((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: _t->setSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->selectAll(); break;
        case 44: _t->toggleSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->setRangeSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->updateSelection((*reinterpret_cast< const QVariantList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->clearSelection(); break;
        case 48: _t->pinSelection(); break;
        case 49: _t->unpinSelection(); break;
        case 50: _t->newFolder(); break;
        case 51: _t->newTextFile(); break;
        case 52: _t->rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 53: _t->copy(); break;
        case 54: _t->paste(); break;
        case 55: _t->cut(); break;
        case 56: _t->openSelected(); break;
        case 57: _t->showOpenWithDialog(); break;
        case 58: _t->deleteSelected(); break;
        case 59: _t->moveSelectedToTrash(); break;
        case 60: _t->emptyTrash(); break;
        case 61: _t->keyDeletePress(); break;
        case 62: _t->setDragHotSpotScrollOffset((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: _t->addItemDragImage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QVariant(*)>(_a[6]))); break;
        case 64: _t->clearDragImages(); break;
        case 65: _t->dragSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 66: _t->drop((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 67: _t->setWallpaperSelected(); break;
        case 68: _t->openContextMenu((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 69: _t->openContextMenu((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 70: _t->openContextMenu(); break;
        case 71: _t->openPropertiesDialog(); break;
        case 72: _t->openInTerminal(); break;
        case 73: _t->openChangeWallpaperDialog(); break;
        case 74: _t->openDeleteDialog(); break;
        case 75: _t->openInNewWindow((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 76: _t->openInNewWindow(); break;
        case 77: _t->updateSelectedItemsSize(); break;
        case 78: _t->keyboardSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 79: _t->clearPixmapCache(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::urlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::listingCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::listingCanceled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::resolvedUrlChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::statusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::sortModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::sortDescChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::sortDirsFirstChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::filterModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::requestRename)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::draggingChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::viewAdapterChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::isDesktopChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::selectionCountChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::countChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::filterPatternChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::filterMimeTypesChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::selectedItemSizeChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::showHiddenFilesChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::scrollToItem)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::notification)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)(int , int , QList<QUrl> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::move)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (FolderModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FolderModel::currentIndexChanged)) {
                *result = 22;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FolderModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->resolvedUrl(); break;
        case 2: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->sortMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->sortDirsFirst(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dragging(); break;
        case 6: *reinterpret_cast< QObject**>(_v) = _t->viewAdapter(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isDesktop(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->selectionCount(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->filterMode(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->filterPattern(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->filterMimeTypes(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->selectedItemSize(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->showHiddenFiles(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FolderModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUrl(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSortMode(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setSortDirsFirst(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setViewAdapter(*reinterpret_cast< QObject**>(_v)); break;
        case 7: _t->setIsDesktop(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setFilterMode(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setFilterPattern(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setFilterMimeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 14: _t->setShowHiddenFiles(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FolderModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_FolderModel.data,
    qt_meta_data_FolderModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FolderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FolderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FolderModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int FolderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FolderModel::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FolderModel::listingCompleted()const
{
    QMetaObject::activate(const_cast< FolderModel *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FolderModel::listingCanceled()const
{
    QMetaObject::activate(const_cast< FolderModel *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FolderModel::resolvedUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void FolderModel::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void FolderModel::sortModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void FolderModel::sortDescChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FolderModel::sortDirsFirstChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void FolderModel::filterModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void FolderModel::requestRename()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void FolderModel::draggingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void FolderModel::viewAdapterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void FolderModel::isDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void FolderModel::selectionCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void FolderModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void FolderModel::filterPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void FolderModel::filterMimeTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void FolderModel::selectedItemSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void FolderModel::showHiddenFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void FolderModel::scrollToItem(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void FolderModel::notification(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void FolderModel::move(int _t1, int _t2, QList<QUrl> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void FolderModel::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
