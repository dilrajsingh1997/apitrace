/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[93];
    char stringdata0[1216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "loadTrace"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "fileName"
QT_MOC_LITERAL(4, 31, 7), // "callNum"
QT_MOC_LITERAL(5, 39, 15), // "setRemoteTarget"
QT_MOC_LITERAL(6, 55, 4), // "host"
QT_MOC_LITERAL(7, 60, 16), // "callItemSelected"
QT_MOC_LITERAL(8, 77, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 89, 5), // "index"
QT_MOC_LITERAL(10, 95, 17), // "callItemActivated"
QT_MOC_LITERAL(11, 113, 11), // "createTrace"
QT_MOC_LITERAL(12, 125, 19), // "const RecentLaunch*"
QT_MOC_LITERAL(13, 145, 14), // "optionalLaunch"
QT_MOC_LITERAL(14, 160, 9), // "openTrace"
QT_MOC_LITERAL(15, 170, 9), // "saveTrace"
QT_MOC_LITERAL(16, 180, 11), // "replayStart"
QT_MOC_LITERAL(17, 192, 13), // "replayProfile"
QT_MOC_LITERAL(18, 206, 10), // "replayStop"
QT_MOC_LITERAL(19, 217, 14), // "replayFinished"
QT_MOC_LITERAL(20, 232, 7), // "message"
QT_MOC_LITERAL(21, 240, 16), // "replayStateFound"
QT_MOC_LITERAL(22, 257, 14), // "ApiTraceState*"
QT_MOC_LITERAL(23, 272, 5), // "state"
QT_MOC_LITERAL(24, 278, 18), // "replayProfileFound"
QT_MOC_LITERAL(25, 297, 15), // "trace::Profile*"
QT_MOC_LITERAL(26, 313, 21), // "replayThumbnailsFound"
QT_MOC_LITERAL(27, 335, 9), // "ImageHash"
QT_MOC_LITERAL(28, 345, 10), // "thumbnails"
QT_MOC_LITERAL(29, 356, 11), // "replayError"
QT_MOC_LITERAL(30, 368, 3), // "msg"
QT_MOC_LITERAL(31, 372, 9), // "loadError"
QT_MOC_LITERAL(32, 382, 19), // "startedLoadingTrace"
QT_MOC_LITERAL(33, 402, 11), // "loadProgess"
QT_MOC_LITERAL(34, 414, 7), // "percent"
QT_MOC_LITERAL(35, 422, 20), // "finishedLoadingTrace"
QT_MOC_LITERAL(36, 443, 11), // "lookupState"
QT_MOC_LITERAL(37, 455, 14), // "showThumbnails"
QT_MOC_LITERAL(38, 470, 4), // "trim"
QT_MOC_LITERAL(39, 475, 11), // "toggleCalls"
QT_MOC_LITERAL(40, 487, 14), // "enableAllCalls"
QT_MOC_LITERAL(41, 502, 12), // "showSettings"
QT_MOC_LITERAL(42, 515, 9), // "leakTrace"
QT_MOC_LITERAL(43, 525, 17), // "leakTraceFinished"
QT_MOC_LITERAL(44, 543, 16), // "showSurfacesMenu"
QT_MOC_LITERAL(45, 560, 3), // "pos"
QT_MOC_LITERAL(46, 564, 19), // "showSelectedSurface"
QT_MOC_LITERAL(47, 584, 19), // "saveSelectedSurface"
QT_MOC_LITERAL(48, 604, 16), // "exportBufferData"
QT_MOC_LITERAL(49, 621, 8), // "slotGoTo"
QT_MOC_LITERAL(50, 630, 10), // "slotJumpTo"
QT_MOC_LITERAL(51, 641, 12), // "createdTrace"
QT_MOC_LITERAL(52, 654, 4), // "path"
QT_MOC_LITERAL(53, 659, 10), // "traceError"
QT_MOC_LITERAL(54, 670, 11), // "createdTrim"
QT_MOC_LITERAL(55, 682, 9), // "trimError"
QT_MOC_LITERAL(56, 692, 10), // "slotSearch"
QT_MOC_LITERAL(57, 703, 14), // "slotSearchNext"
QT_MOC_LITERAL(58, 718, 3), // "str"
QT_MOC_LITERAL(59, 722, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(60, 742, 11), // "sensitivity"
QT_MOC_LITERAL(61, 754, 8), // "useRegex"
QT_MOC_LITERAL(62, 763, 14), // "slotSearchPrev"
QT_MOC_LITERAL(63, 778, 9), // "fillState"
QT_MOC_LITERAL(64, 788, 11), // "nonDefaults"
QT_MOC_LITERAL(65, 800, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(66, 827, 8), // "editCall"
QT_MOC_LITERAL(67, 836, 17), // "slotStartedSaving"
QT_MOC_LITERAL(68, 854, 9), // "slotSaved"
QT_MOC_LITERAL(69, 864, 16), // "slotGoFrameStart"
QT_MOC_LITERAL(70, 881, 14), // "slotGoFrameEnd"
QT_MOC_LITERAL(71, 896, 16), // "slotTraceChanged"
QT_MOC_LITERAL(72, 913, 14), // "ApiTraceEvent*"
QT_MOC_LITERAL(73, 928, 5), // "event"
QT_MOC_LITERAL(74, 934, 17), // "slotRetraceErrors"
QT_MOC_LITERAL(75, 952, 20), // "QList<ApiTraceError>"
QT_MOC_LITERAL(76, 973, 6), // "errors"
QT_MOC_LITERAL(77, 980, 17), // "slotErrorSelected"
QT_MOC_LITERAL(78, 998, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(79, 1015, 7), // "current"
QT_MOC_LITERAL(80, 1023, 16), // "slotSearchResult"
QT_MOC_LITERAL(81, 1040, 23), // "ApiTrace::SearchRequest"
QT_MOC_LITERAL(82, 1064, 7), // "request"
QT_MOC_LITERAL(83, 1072, 22), // "ApiTrace::SearchResult"
QT_MOC_LITERAL(84, 1095, 6), // "result"
QT_MOC_LITERAL(85, 1102, 13), // "ApiTraceCall*"
QT_MOC_LITERAL(86, 1116, 4), // "call"
QT_MOC_LITERAL(87, 1121, 19), // "slotFoundFrameStart"
QT_MOC_LITERAL(88, 1141, 14), // "ApiTraceFrame*"
QT_MOC_LITERAL(89, 1156, 5), // "frame"
QT_MOC_LITERAL(90, 1162, 17), // "slotFoundFrameEnd"
QT_MOC_LITERAL(91, 1180, 16), // "slotJumpToResult"
QT_MOC_LITERAL(92, 1197, 18) // "updateSurfacesView"

    },
    "MainWindow\0loadTrace\0\0fileName\0callNum\0"
    "setRemoteTarget\0host\0callItemSelected\0"
    "QModelIndex\0index\0callItemActivated\0"
    "createTrace\0const RecentLaunch*\0"
    "optionalLaunch\0openTrace\0saveTrace\0"
    "replayStart\0replayProfile\0replayStop\0"
    "replayFinished\0message\0replayStateFound\0"
    "ApiTraceState*\0state\0replayProfileFound\0"
    "trace::Profile*\0replayThumbnailsFound\0"
    "ImageHash\0thumbnails\0replayError\0msg\0"
    "loadError\0startedLoadingTrace\0loadProgess\0"
    "percent\0finishedLoadingTrace\0lookupState\0"
    "showThumbnails\0trim\0toggleCalls\0"
    "enableAllCalls\0showSettings\0leakTrace\0"
    "leakTraceFinished\0showSurfacesMenu\0"
    "pos\0showSelectedSurface\0saveSelectedSurface\0"
    "exportBufferData\0slotGoTo\0slotJumpTo\0"
    "createdTrace\0path\0traceError\0createdTrim\0"
    "trimError\0slotSearch\0slotSearchNext\0"
    "str\0Qt::CaseSensitivity\0sensitivity\0"
    "useRegex\0slotSearchPrev\0fillState\0"
    "nonDefaults\0customContextMenuRequested\0"
    "editCall\0slotStartedSaving\0slotSaved\0"
    "slotGoFrameStart\0slotGoFrameEnd\0"
    "slotTraceChanged\0ApiTraceEvent*\0event\0"
    "slotRetraceErrors\0QList<ApiTraceError>\0"
    "errors\0slotErrorSelected\0QTreeWidgetItem*\0"
    "current\0slotSearchResult\0"
    "ApiTrace::SearchRequest\0request\0"
    "ApiTrace::SearchResult\0result\0"
    "ApiTraceCall*\0call\0slotFoundFrameStart\0"
    "ApiTraceFrame*\0frame\0slotFoundFrameEnd\0"
    "slotJumpToResult\0updateSurfacesView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  299,    2, 0x0a /* Public */,
       1,    1,  304,    2, 0x2a /* Public | MethodCloned */,
       5,    1,  307,    2, 0x0a /* Public */,
       7,    1,  310,    2, 0x08 /* Private */,
      10,    1,  313,    2, 0x08 /* Private */,
      11,    1,  316,    2, 0x08 /* Private */,
      11,    0,  319,    2, 0x28 /* Private | MethodCloned */,
      14,    0,  320,    2, 0x08 /* Private */,
      15,    0,  321,    2, 0x08 /* Private */,
      16,    0,  322,    2, 0x08 /* Private */,
      17,    0,  323,    2, 0x08 /* Private */,
      18,    0,  324,    2, 0x08 /* Private */,
      19,    1,  325,    2, 0x08 /* Private */,
      21,    1,  328,    2, 0x08 /* Private */,
      24,    1,  331,    2, 0x08 /* Private */,
      26,    1,  334,    2, 0x08 /* Private */,
      29,    1,  337,    2, 0x08 /* Private */,
      31,    1,  340,    2, 0x08 /* Private */,
      32,    0,  343,    2, 0x08 /* Private */,
      33,    1,  344,    2, 0x08 /* Private */,
      35,    0,  347,    2, 0x08 /* Private */,
      36,    0,  348,    2, 0x08 /* Private */,
      37,    0,  349,    2, 0x08 /* Private */,
      38,    0,  350,    2, 0x08 /* Private */,
      39,    0,  351,    2, 0x08 /* Private */,
      40,    0,  352,    2, 0x08 /* Private */,
      41,    0,  353,    2, 0x08 /* Private */,
      42,    0,  354,    2, 0x08 /* Private */,
      43,    0,  355,    2, 0x08 /* Private */,
      44,    1,  356,    2, 0x08 /* Private */,
      46,    0,  359,    2, 0x08 /* Private */,
      47,    0,  360,    2, 0x08 /* Private */,
      48,    0,  361,    2, 0x08 /* Private */,
      49,    0,  362,    2, 0x08 /* Private */,
      50,    1,  363,    2, 0x08 /* Private */,
      51,    1,  366,    2, 0x08 /* Private */,
      53,    1,  369,    2, 0x08 /* Private */,
      54,    1,  372,    2, 0x08 /* Private */,
      55,    1,  375,    2, 0x08 /* Private */,
      56,    0,  378,    2, 0x08 /* Private */,
      57,    3,  379,    2, 0x08 /* Private */,
      62,    3,  386,    2, 0x08 /* Private */,
      63,    1,  393,    2, 0x08 /* Private */,
      65,    1,  396,    2, 0x08 /* Private */,
      66,    0,  399,    2, 0x08 /* Private */,
      67,    0,  400,    2, 0x08 /* Private */,
      68,    0,  401,    2, 0x08 /* Private */,
      69,    0,  402,    2, 0x08 /* Private */,
      70,    0,  403,    2, 0x08 /* Private */,
      71,    1,  404,    2, 0x08 /* Private */,
      74,    1,  407,    2, 0x08 /* Private */,
      77,    1,  410,    2, 0x08 /* Private */,
      80,    3,  413,    2, 0x08 /* Private */,
      87,    1,  420,    2, 0x08 /* Private */,
      90,    1,  423,    2, 0x08 /* Private */,
      91,    1,  426,    2, 0x08 /* Private */,
      92,    0,  429,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   23,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 59, QMetaType::Bool,   58,   60,   61,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 59, QMetaType::Bool,   58,   60,   61,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::QPoint,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void, 0x80000000 | 78,   79,
    QMetaType::Void, 0x80000000 | 81, 0x80000000 | 83, 0x80000000 | 85,   82,   84,   86,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->loadTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setRemoteTarget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->callItemSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->callItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->createTrace((*reinterpret_cast< const RecentLaunch*(*)>(_a[1]))); break;
        case 6: _t->createTrace(); break;
        case 7: _t->openTrace(); break;
        case 8: _t->saveTrace(); break;
        case 9: _t->replayStart(); break;
        case 10: _t->replayProfile(); break;
        case 11: _t->replayStop(); break;
        case 12: _t->replayFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->replayStateFound((*reinterpret_cast< ApiTraceState*(*)>(_a[1]))); break;
        case 14: _t->replayProfileFound((*reinterpret_cast< trace::Profile*(*)>(_a[1]))); break;
        case 15: _t->replayThumbnailsFound((*reinterpret_cast< const ImageHash(*)>(_a[1]))); break;
        case 16: _t->replayError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->loadError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->startedLoadingTrace(); break;
        case 19: _t->loadProgess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->finishedLoadingTrace(); break;
        case 21: _t->lookupState(); break;
        case 22: _t->showThumbnails(); break;
        case 23: _t->trim(); break;
        case 24: _t->toggleCalls(); break;
        case 25: _t->enableAllCalls(); break;
        case 26: _t->showSettings(); break;
        case 27: _t->leakTrace(); break;
        case 28: _t->leakTraceFinished(); break;
        case 29: _t->showSurfacesMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 30: _t->showSelectedSurface(); break;
        case 31: _t->saveSelectedSurface(); break;
        case 32: _t->exportBufferData(); break;
        case 33: _t->slotGoTo(); break;
        case 34: _t->slotJumpTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->createdTrace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->traceError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->createdTrim((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->trimError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->slotSearch(); break;
        case 40: _t->slotSearchNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 41: _t->slotSearchPrev((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 42: _t->fillState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 44: _t->editCall(); break;
        case 45: _t->slotStartedSaving(); break;
        case 46: _t->slotSaved(); break;
        case 47: _t->slotGoFrameStart(); break;
        case 48: _t->slotGoFrameEnd(); break;
        case 49: _t->slotTraceChanged((*reinterpret_cast< ApiTraceEvent*(*)>(_a[1]))); break;
        case 50: _t->slotRetraceErrors((*reinterpret_cast< const QList<ApiTraceError>(*)>(_a[1]))); break;
        case 51: _t->slotErrorSelected((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 52: _t->slotSearchResult((*reinterpret_cast< const ApiTrace::SearchRequest(*)>(_a[1])),(*reinterpret_cast< ApiTrace::SearchResult(*)>(_a[2])),(*reinterpret_cast< ApiTraceCall*(*)>(_a[3]))); break;
        case 53: _t->slotFoundFrameStart((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 54: _t->slotFoundFrameEnd((*reinterpret_cast< ApiTraceFrame*(*)>(_a[1]))); break;
        case 55: _t->slotJumpToResult((*reinterpret_cast< ApiTraceCall*(*)>(_a[1]))); break;
        case 56: _t->updateSurfacesView(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceEvent* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceFrame* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ApiTraceCall* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
