/****************************************************************************
** Meta object code from reading C++ file 'HeroTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../HeroTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HeroTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HeroTool_t {
    QByteArrayData data[18];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HeroTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HeroTool_t qt_meta_stringdata_HeroTool = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HeroTool"
QT_MOC_LITERAL(1, 9, 9), // "onNewFile"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "onOpenFile"
QT_MOC_LITERAL(4, 31, 10), // "onSaveFile"
QT_MOC_LITERAL(5, 42, 17), // "onSaveAnotherFile"
QT_MOC_LITERAL(6, 60, 12), // "onDeleteFile"
QT_MOC_LITERAL(7, 73, 17), // "onBtnSmallClicked"
QT_MOC_LITERAL(8, 91, 15), // "onBtnMaxClicked"
QT_MOC_LITERAL(9, 107, 17), // "onBtnCloseClicked"
QT_MOC_LITERAL(10, 125, 16), // "onBtnNoteClicked"
QT_MOC_LITERAL(11, 142, 16), // "onBtnDrawClicked"
QT_MOC_LITERAL(12, 159, 16), // "onBtnPlanClicked"
QT_MOC_LITERAL(13, 176, 19), // "onBtnBigDataClicked"
QT_MOC_LITERAL(14, 196, 21), // "onBtnMediaHomeClicked"
QT_MOC_LITERAL(15, 218, 13), // "onTimerStatus"
QT_MOC_LITERAL(16, 232, 19), // "onTabCloseRequested"
QT_MOC_LITERAL(17, 252, 5) // "index"

    },
    "HeroTool\0onNewFile\0\0onOpenFile\0"
    "onSaveFile\0onSaveAnotherFile\0onDeleteFile\0"
    "onBtnSmallClicked\0onBtnMaxClicked\0"
    "onBtnCloseClicked\0onBtnNoteClicked\0"
    "onBtnDrawClicked\0onBtnPlanClicked\0"
    "onBtnBigDataClicked\0onBtnMediaHomeClicked\0"
    "onTimerStatus\0onTabCloseRequested\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HeroTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x0a /* Public */,
       8,    0,   95,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    0,  101,    2, 0x0a /* Public */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    1,  103,    2, 0x0a /* Public */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void HeroTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HeroTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNewFile(); break;
        case 1: _t->onOpenFile(); break;
        case 2: _t->onSaveFile(); break;
        case 3: _t->onSaveAnotherFile(); break;
        case 4: _t->onDeleteFile(); break;
        case 5: _t->onBtnSmallClicked(); break;
        case 6: _t->onBtnMaxClicked(); break;
        case 7: _t->onBtnCloseClicked(); break;
        case 8: _t->onBtnNoteClicked(); break;
        case 9: _t->onBtnDrawClicked(); break;
        case 10: _t->onBtnPlanClicked(); break;
        case 11: _t->onBtnBigDataClicked(); break;
        case 12: _t->onBtnMediaHomeClicked(); break;
        case 13: _t->onTimerStatus(); break;
        case 14: _t->onTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HeroTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_HeroTool.data,
    qt_meta_data_HeroTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HeroTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HeroTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HeroTool.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int HeroTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
