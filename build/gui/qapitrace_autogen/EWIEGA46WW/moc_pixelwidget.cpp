/****************************************************************************
** Meta object code from reading C++ file 'pixelwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../gui/pixelwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pixelwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PixelWidget_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PixelWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PixelWidget_t qt_meta_stringdata_PixelWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PixelWidget"
QT_MOC_LITERAL(1, 12, 11), // "zoomChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "zoomStepUp"
QT_MOC_LITERAL(4, 36, 12), // "zoomStepDown"
QT_MOC_LITERAL(5, 49, 13), // "mousePosition"
QT_MOC_LITERAL(6, 63, 1), // "x"
QT_MOC_LITERAL(7, 65, 1), // "y"
QT_MOC_LITERAL(8, 67, 12), // "gridGeometry"
QT_MOC_LITERAL(9, 80, 4), // "rect"
QT_MOC_LITERAL(10, 85, 7), // "setZoom"
QT_MOC_LITERAL(11, 93, 4), // "zoom"
QT_MOC_LITERAL(12, 98, 9), // "forceGrid"
QT_MOC_LITERAL(13, 108, 11), // "setGridSize"
QT_MOC_LITERAL(14, 120, 8), // "gridSize"
QT_MOC_LITERAL(15, 129, 10), // "toggleGrid"
QT_MOC_LITERAL(16, 140, 15), // "copyToClipboard"
QT_MOC_LITERAL(17, 156, 10), // "saveToFile"
QT_MOC_LITERAL(18, 167, 16), // "increaseGridSize"
QT_MOC_LITERAL(19, 184, 16) // "decreaseGridSize"

    },
    "PixelWidget\0zoomChanged\0\0zoomStepUp\0"
    "zoomStepDown\0mousePosition\0x\0y\0"
    "gridGeometry\0rect\0setZoom\0zoom\0forceGrid\0"
    "setGridSize\0gridSize\0toggleGrid\0"
    "copyToClipboard\0saveToFile\0increaseGridSize\0"
    "decreaseGridSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PixelWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    0,   82,    2, 0x06 /* Public */,
       4,    0,   83,    2, 0x06 /* Public */,
       5,    2,   84,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   92,    2, 0x0a /* Public */,
      10,    1,   97,    2, 0x2a /* Public | MethodCloned */,
      13,    1,  100,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QRect,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PixelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PixelWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->zoomStepUp(); break;
        case 2: _t->zoomStepDown(); break;
        case 3: _t->mousePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->gridGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 5: _t->setZoom((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->setZoom((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setGridSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->toggleGrid(); break;
        case 9: _t->copyToClipboard(); break;
        case 10: _t->saveToFile(); break;
        case 11: _t->increaseGridSize(); break;
        case 12: _t->decreaseGridSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PixelWidget::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::zoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PixelWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::zoomStepUp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PixelWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::zoomStepDown)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PixelWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::mousePosition)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PixelWidget::*)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PixelWidget::gridGeometry)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PixelWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PixelWidget.data,
    qt_meta_data_PixelWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PixelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PixelWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PixelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PixelWidget::zoomChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PixelWidget::zoomStepUp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PixelWidget::zoomStepDown()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PixelWidget::mousePosition(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PixelWidget::gridGeometry(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
