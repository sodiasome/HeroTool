/****************************************************************************
** Meta object code from reading C++ file 'TopBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../TopBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TopBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TopBarWidget_t {
    QByteArrayData data[23];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TopBarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TopBarWidget_t qt_meta_stringdata_TopBarWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TopBarWidget"
QT_MOC_LITERAL(1, 13, 15), // "btnSmallClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "btnMaxClicked"
QT_MOC_LITERAL(4, 44, 15), // "btnCloseClicked"
QT_MOC_LITERAL(5, 60, 7), // "newFile"
QT_MOC_LITERAL(6, 68, 8), // "openFile"
QT_MOC_LITERAL(7, 77, 8), // "saveFile"
QT_MOC_LITERAL(8, 86, 14), // "antherSaveFile"
QT_MOC_LITERAL(9, 101, 10), // "deleteFile"
QT_MOC_LITERAL(10, 112, 10), // "defaultDir"
QT_MOC_LITERAL(11, 123, 14), // "setNoteDownDir"
QT_MOC_LITERAL(12, 138, 13), // "setThemeColor"
QT_MOC_LITERAL(13, 152, 6), // "sColor"
QT_MOC_LITERAL(14, 159, 11), // "showToolBar"
QT_MOC_LITERAL(15, 171, 5), // "bShow"
QT_MOC_LITERAL(16, 177, 14), // "btnNoteClicked"
QT_MOC_LITERAL(17, 192, 14), // "btnDrawClicked"
QT_MOC_LITERAL(18, 207, 14), // "btnPlanClicked"
QT_MOC_LITERAL(19, 222, 17), // "btnBigDataClicked"
QT_MOC_LITERAL(20, 240, 19), // "btnMediaHomeClicked"
QT_MOC_LITERAL(21, 260, 16), // "onBtnModeClicked"
QT_MOC_LITERAL(22, 277, 10) // "nIdClicked"

    },
    "TopBarWidget\0btnSmallClicked\0\0"
    "btnMaxClicked\0btnCloseClicked\0newFile\0"
    "openFile\0saveFile\0antherSaveFile\0"
    "deleteFile\0defaultDir\0setNoteDownDir\0"
    "setThemeColor\0sColor\0showToolBar\0bShow\0"
    "btnNoteClicked\0btnDrawClicked\0"
    "btnPlanClicked\0btnBigDataClicked\0"
    "btnMediaHomeClicked\0onBtnModeClicked\0"
    "nIdClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TopBarWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    0,  112,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,
      12,    1,  114,    2, 0x06 /* Public */,
      14,    1,  117,    2, 0x06 /* Public */,
      16,    0,  120,    2, 0x06 /* Public */,
      17,    0,  121,    2, 0x06 /* Public */,
      18,    0,  122,    2, 0x06 /* Public */,
      19,    0,  123,    2, 0x06 /* Public */,
      20,    0,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  125,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void TopBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TopBarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btnSmallClicked(); break;
        case 1: _t->btnMaxClicked(); break;
        case 2: _t->btnCloseClicked(); break;
        case 3: _t->newFile(); break;
        case 4: _t->openFile(); break;
        case 5: _t->saveFile(); break;
        case 6: _t->antherSaveFile(); break;
        case 7: _t->deleteFile(); break;
        case 8: _t->defaultDir(); break;
        case 9: _t->setNoteDownDir(); break;
        case 10: _t->setThemeColor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->showToolBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->btnNoteClicked(); break;
        case 13: _t->btnDrawClicked(); break;
        case 14: _t->btnPlanClicked(); break;
        case 15: _t->btnBigDataClicked(); break;
        case 16: _t->btnMediaHomeClicked(); break;
        case 17: _t->onBtnModeClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnSmallClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnMaxClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnCloseClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::newFile)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::openFile)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::saveFile)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::antherSaveFile)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::deleteFile)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::defaultDir)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::setNoteDownDir)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::setThemeColor)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::showToolBar)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnNoteClicked)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnDrawClicked)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnPlanClicked)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnBigDataClicked)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TopBarWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBarWidget::btnMediaHomeClicked)) {
                *result = 16;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TopBarWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TopBarWidget.data,
    qt_meta_data_TopBarWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TopBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TopBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TopBarWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TopBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TopBarWidget::btnSmallClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TopBarWidget::btnMaxClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TopBarWidget::btnCloseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TopBarWidget::newFile()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TopBarWidget::openFile()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TopBarWidget::saveFile()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TopBarWidget::antherSaveFile()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TopBarWidget::deleteFile()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TopBarWidget::defaultDir()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TopBarWidget::setNoteDownDir()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void TopBarWidget::setThemeColor(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TopBarWidget::showToolBar(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TopBarWidget::btnNoteClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void TopBarWidget::btnDrawClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void TopBarWidget::btnPlanClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void TopBarWidget::btnBigDataClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void TopBarWidget::btnMediaHomeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
