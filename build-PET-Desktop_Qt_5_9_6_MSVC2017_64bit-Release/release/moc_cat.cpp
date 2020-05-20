/****************************************************************************
** Meta object code from reading C++ file 'cat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PET/cat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cat_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cat_t qt_meta_stringdata_cat = {
    {
QT_MOC_LITERAL(0, 0, 3), // "cat"
QT_MOC_LITERAL(1, 4, 4), // "quit"
QT_MOC_LITERAL(2, 9, 0), // ""
QT_MOC_LITERAL(3, 10, 6), // "shown1"
QT_MOC_LITERAL(4, 17, 8), // "showhome"
QT_MOC_LITERAL(5, 26, 9), // "receiven1"
QT_MOC_LITERAL(6, 36, 12), // "receiven1ham"
QT_MOC_LITERAL(7, 49, 12), // "receiven1pig"
QT_MOC_LITERAL(8, 62, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(9, 86, 23), // "on_cancelbutton_clicked"
QT_MOC_LITERAL(10, 110, 24) // "on_comfirmbutton_clicked"

    },
    "cat\0quit\0\0shown1\0showhome\0receiven1\0"
    "receiven1ham\0receiven1pig\0"
    "on_pushButton_6_clicked\0on_cancelbutton_clicked\0"
    "on_comfirmbutton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
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

       0        // eod
};

void cat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cat *_t = static_cast<cat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->shown1(); break;
        case 2: _t->showhome(); break;
        case 3: _t->receiven1(); break;
        case 4: _t->receiven1ham(); break;
        case 5: _t->receiven1pig(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_cancelbutton_clicked(); break;
        case 8: _t->on_comfirmbutton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (cat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cat::quit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (cat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cat::shown1)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (cat::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cat::showhome)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cat::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cat.data,
      qt_meta_data_cat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cat.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void cat::quit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cat::shown1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cat::showhome()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
