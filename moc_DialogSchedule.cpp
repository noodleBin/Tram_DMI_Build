/****************************************************************************
** Meta object code from reading C++ file 'DialogSchedule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Casco_DMIor/DialogSchedule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogSchedule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogSchedule_t {
    QByteArrayData data[15];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogSchedule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogSchedule_t qt_meta_stringdata_DialogSchedule = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DialogSchedule"
QT_MOC_LITERAL(1, 15, 14), // "sendScheduleId"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "scheduleid"
QT_MOC_LITERAL(4, 42, 13), // "sendServiceId"
QT_MOC_LITERAL(5, 56, 9), // "serviceid"
QT_MOC_LITERAL(6, 66, 10), // "sendTripId"
QT_MOC_LITERAL(7, 77, 6), // "tripid"
QT_MOC_LITERAL(8, 84, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(9, 106, 18), // "on_btn_sch_clicked"
QT_MOC_LITERAL(10, 125, 22), // "on_btn_service_clicked"
QT_MOC_LITERAL(11, 148, 28), // "on_btn_servicecancel_clicked"
QT_MOC_LITERAL(12, 177, 19), // "on_btn_trip_clicked"
QT_MOC_LITERAL(13, 197, 25), // "on_btn_tripcancel_clicked"
QT_MOC_LITERAL(14, 223, 24) // "on_btn_schcancel_clicked"

    },
    "DialogSchedule\0sendScheduleId\0\0"
    "scheduleid\0sendServiceId\0serviceid\0"
    "sendTripId\0tripid\0on_btn_cancel_clicked\0"
    "on_btn_sch_clicked\0on_btn_service_clicked\0"
    "on_btn_servicecancel_clicked\0"
    "on_btn_trip_clicked\0on_btn_tripcancel_clicked\0"
    "on_btn_schcancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogSchedule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Short,    3,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::Short,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogSchedule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogSchedule *_t = static_cast<DialogSchedule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendScheduleId((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 1: _t->sendServiceId((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 2: _t->sendTripId((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 3: _t->on_btn_cancel_clicked(); break;
        case 4: _t->on_btn_sch_clicked(); break;
        case 5: _t->on_btn_service_clicked(); break;
        case 6: _t->on_btn_servicecancel_clicked(); break;
        case 7: _t->on_btn_trip_clicked(); break;
        case 8: _t->on_btn_tripcancel_clicked(); break;
        case 9: _t->on_btn_schcancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DialogSchedule::*_t)(qint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DialogSchedule::sendScheduleId)) {
                *result = 0;
            }
        }
        {
            typedef void (DialogSchedule::*_t)(qint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DialogSchedule::sendServiceId)) {
                *result = 1;
            }
        }
        {
            typedef void (DialogSchedule::*_t)(qint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DialogSchedule::sendTripId)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject DialogSchedule::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogSchedule.data,
      qt_meta_data_DialogSchedule,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogSchedule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogSchedule::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSchedule.stringdata0))
        return static_cast<void*>(const_cast< DialogSchedule*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogSchedule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DialogSchedule::sendScheduleId(qint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogSchedule::sendServiceId(qint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DialogSchedule::sendTripId(qint16 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
