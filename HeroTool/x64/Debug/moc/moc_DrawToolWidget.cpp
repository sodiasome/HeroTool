/****************************************************************************
** Meta object code from reading C++ file 'DrawToolWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../DrawToolWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DrawToolWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawToolWidget_t {
    QByteArrayData data[15];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawToolWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawToolWidget_t qt_meta_stringdata_DrawToolWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DrawToolWidget"
QT_MOC_LITERAL(1, 15, 11), // "modeClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "nId"
QT_MOC_LITERAL(4, 32, 15), // "btnColorChanged"
QT_MOC_LITERAL(5, 48, 6), // "sColor"
QT_MOC_LITERAL(6, 55, 16), // "fillColorChanged"
QT_MOC_LITERAL(7, 72, 10), // "sFillColor"
QT_MOC_LITERAL(8, 83, 17), // "btnBkColorChanged"
QT_MOC_LITERAL(9, 101, 8), // "sBkColor"
QT_MOC_LITERAL(10, 110, 15), // "penWidthChanged"
QT_MOC_LITERAL(11, 126, 6), // "nWidth"
QT_MOC_LITERAL(12, 133, 13), // "btnDelSelItem"
QT_MOC_LITERAL(13, 147, 16), // "onBtnModeClicked"
QT_MOC_LITERAL(14, 164, 10) // "nIdClicked"

    },
    "DrawToolWidget\0modeClicked\0\0nId\0"
    "btnColorChanged\0sColor\0fillColorChanged\0"
    "sFillColor\0btnBkColorChanged\0sBkColor\0"
    "penWidthChanged\0nWidth\0btnDelSelItem\0"
    "onBtnModeClicked\0nIdClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawToolWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      10,    1,   61,    2, 0x06 /* Public */,
      12,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void DrawToolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawToolWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->btnColorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fillColorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->btnBkColorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->penWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->btnDelSelItem(); break;
        case 6: _t->onBtnModeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawToolWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::modeClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::btnColorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DrawToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::fillColorChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DrawToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::btnBkColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DrawToolWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::penWidthChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DrawToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawToolWidget::btnDelSelItem)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DrawToolWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DrawToolWidget.data,
    qt_meta_data_DrawToolWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DrawToolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawToolWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DrawToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DrawToolWidget::modeClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawToolWidget::btnColorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DrawToolWidget::fillColorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DrawToolWidget::btnBkColorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DrawToolWidget::penWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DrawToolWidget::btnDelSelItem()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
