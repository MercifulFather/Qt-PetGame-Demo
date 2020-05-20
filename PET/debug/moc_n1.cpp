/****************************************************************************
** Meta object code from reading C++ file 'n1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../n1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'n1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_n1_t {
    QByteArrayData data[16];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_n1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_n1_t qt_meta_stringdata_n1 = {
    {
QT_MOC_LITERAL(0, 0, 2), // "n1"
QT_MOC_LITERAL(1, 3, 7), // "showpet"
QT_MOC_LITERAL(2, 11, 0), // ""
QT_MOC_LITERAL(3, 12, 7), // "showcat"
QT_MOC_LITERAL(4, 20, 11), // "showhamster"
QT_MOC_LITERAL(5, 32, 7), // "showpig"
QT_MOC_LITERAL(6, 40, 4), // "quit"
QT_MOC_LITERAL(7, 45, 10), // "receivepet"
QT_MOC_LITERAL(8, 56, 10), // "receivecat"
QT_MOC_LITERAL(9, 67, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(10, 89, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(11, 113, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(12, 137, 24), // "on_hamsterbutton_clicked"
QT_MOC_LITERAL(13, 162, 20), // "on_pigbutton_clicked"
QT_MOC_LITERAL(14, 183, 21), // "on_backbutton_clicked"
QT_MOC_LITERAL(15, 205, 28) // "on_instructionbutton_clicked"

    },
    "n1\0showpet\0\0showcat\0showhamster\0showpig\0"
    "quit\0receivepet\0receivecat\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_8_clicked\0"
    "on_hamsterbutton_clicked\0on_pigbutton_clicked\0"
    "on_backbutton_clicked\0"
    "on_instructionbutton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_n1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    0,   87,    2, 0x06 /* Public */,
       6,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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

       0        // eod
};

void n1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<n1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showpet(); break;
        case 1: _t->showcat(); break;
        case 2: _t->showhamster(); break;
        case 3: _t->showpig(); break;
        case 4: _t->quit(); break;
        case 5: _t->receivepet(); break;
        case 6: _t->receivecat(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_8_clicked(); break;
        case 10: _t->on_hamsterbutton_clicked(); break;
        case 11: _t->on_pigbutton_clicked(); break;
        case 12: _t->on_backbutton_clicked(); break;
        case 13: _t->on_instructionbutton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (n1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&n1::showpet)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (n1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&n1::showcat)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (n1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&n1::showhamster)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (n1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&n1::showpig)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (n1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&n1::quit)) {
                *result = 4;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject n1::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_n1.data,
    qt_meta_data_n1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *n1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *n1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_n1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int n1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void n1::showpet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void n1::showcat()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void n1::showhamster()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void n1::showpig()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void n1::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
