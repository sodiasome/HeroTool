/****************************************************************************
** Meta object code from reading C++ file 'NoteToolWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../NoteToolWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NoteToolWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NoteToolWidget_t {
    QByteArrayData data[23];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoteToolWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoteToolWidget_t qt_meta_stringdata_NoteToolWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NoteToolWidget"
QT_MOC_LITERAL(1, 15, 14), // "btnModeCLicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "nClicked"
QT_MOC_LITERAL(4, 40, 14), // "btnBlodClicked"
QT_MOC_LITERAL(5, 55, 6), // "bCheck"
QT_MOC_LITERAL(6, 62, 19), // "btnUnderLineClicked"
QT_MOC_LITERAL(7, 82, 16), // "btnItalicClicked"
QT_MOC_LITERAL(8, 99, 19), // "btnAlignmentClicked"
QT_MOC_LITERAL(9, 119, 17), // "Qt::AlignmentFlag"
QT_MOC_LITERAL(10, 137, 4), // "flag"
QT_MOC_LITERAL(11, 142, 15), // "btnColorChanged"
QT_MOC_LITERAL(12, 158, 6), // "sColor"
QT_MOC_LITERAL(13, 165, 17), // "btnBkColorChanged"
QT_MOC_LITERAL(14, 183, 18), // "btnTextSizeChanged"
QT_MOC_LITERAL(15, 202, 5), // "nSize"
QT_MOC_LITERAL(16, 208, 16), // "btnInsertPicture"
QT_MOC_LITERAL(17, 225, 7), // "btnFont"
QT_MOC_LITERAL(18, 233, 17), // "btnInsertCurrTime"
QT_MOC_LITERAL(19, 251, 10), // "btnSetName"
QT_MOC_LITERAL(20, 262, 9), // "sFileName"
QT_MOC_LITERAL(21, 272, 16), // "btnFormatClicked"
QT_MOC_LITERAL(22, 289, 11) // "btnNoteDown"

    },
    "NoteToolWidget\0btnModeCLicked\0\0nClicked\0"
    "btnBlodClicked\0bCheck\0btnUnderLineClicked\0"
    "btnItalicClicked\0btnAlignmentClicked\0"
    "Qt::AlignmentFlag\0flag\0btnColorChanged\0"
    "sColor\0btnBkColorChanged\0btnTextSizeChanged\0"
    "nSize\0btnInsertPicture\0btnFont\0"
    "btnInsertCurrTime\0btnSetName\0sFileName\0"
    "btnFormatClicked\0btnNoteDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoteToolWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
      11,    1,   99,    2, 0x06 /* Public */,
      13,    1,  102,    2, 0x06 /* Public */,
      14,    1,  105,    2, 0x06 /* Public */,
      16,    0,  108,    2, 0x06 /* Public */,
      17,    0,  109,    2, 0x06 /* Public */,
      18,    0,  110,    2, 0x06 /* Public */,
      19,    1,  111,    2, 0x06 /* Public */,
      21,    0,  114,    2, 0x06 /* Public */,
      22,    0,  115,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NoteToolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NoteToolWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btnModeCLicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->btnBlodClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->btnUnderLineClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->btnItalicClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->btnAlignmentClicked((*reinterpret_cast< Qt::AlignmentFlag(*)>(_a[1]))); break;
        case 5: _t->btnColorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->btnBkColorChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->btnTextSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->btnInsertPicture(); break;
        case 9: _t->btnFont(); break;
        case 10: _t->btnInsertCurrTime(); break;
        case 11: _t->btnSetName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->btnFormatClicked(); break;
        case 13: _t->btnNoteDown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NoteToolWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnModeCLicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnBlodClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnUnderLineClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnItalicClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(Qt::AlignmentFlag );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnAlignmentClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnColorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnBkColorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnTextSizeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnInsertPicture)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnFont)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnInsertCurrTime)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnSetName)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnFormatClicked)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (NoteToolWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoteToolWidget::btnNoteDown)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NoteToolWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NoteToolWidget.data,
    qt_meta_data_NoteToolWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NoteToolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoteToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NoteToolWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NoteToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void NoteToolWidget::btnModeCLicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NoteToolWidget::btnBlodClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NoteToolWidget::btnUnderLineClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NoteToolWidget::btnItalicClicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NoteToolWidget::btnAlignmentClicked(Qt::AlignmentFlag _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NoteToolWidget::btnColorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void NoteToolWidget::btnBkColorChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void NoteToolWidget::btnTextSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void NoteToolWidget::btnInsertPicture()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void NoteToolWidget::btnFont()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void NoteToolWidget::btnInsertCurrTime()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void NoteToolWidget::btnSetName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void NoteToolWidget::btnFormatClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void NoteToolWidget::btnNoteDown()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
