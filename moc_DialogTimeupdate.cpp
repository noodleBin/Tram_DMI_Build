/****************************************************************************
** Meta object code from reading C++ file 'DialogTimeupdate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Casco_DMI/DialogTimeupdate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogTimeupdate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogTimeUpdate_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogTimeUpdate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogTimeUpdate_t qt_meta_stringdata_DialogTimeUpdate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DialogTimeUpdate"
QT_MOC_LITERAL(1, 17, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 34), // "on_calendarWidget_selectionCh..."
QT_MOC_LITERAL(4, 71, 23), // "on_timeEdit_timeChanged"
QT_MOC_LITERAL(5, 95, 4) // "time"

    },
    "DialogTimeUpdate\0on_btn_ok_clicked\0\0"
    "on_calendarWidget_selectionChanged\0"
    "on_timeEdit_timeChanged\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogTimeUpdate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QTime,    5,

       0        // eod
};

void DialogTimeUpdate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogTimeUpdate *_t = static_cast<DialogTimeUpdate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_ok_clicked(); break;
        case 1: _t->on_calendarWidget_selectionChanged(); break;
        case 2: _t->on_timeEdit_timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogTimeUpdate::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogTimeUpdate.data,
      qt_meta_data_DialogTimeUpdate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogTimeUpdate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogTimeUpdate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogTimeUpdate.stringdata0))
        return static_cast<void*>(const_cast< DialogTimeUpdate*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogTimeUpdate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
