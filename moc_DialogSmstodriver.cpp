/****************************************************************************
** Meta object code from reading C++ file 'DialogSmstodriver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Casco_DMI/DialogSmstodriver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogSmstodriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DialogSMSToDriver_t {
    QByteArrayData data[8];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogSMSToDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogSMSToDriver_t qt_meta_stringdata_DialogSMSToDriver = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DialogSMSToDriver"
QT_MOC_LITERAL(1, 18, 21), // "on_btn_return_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_btn_previous_clicked"
QT_MOC_LITERAL(4, 65, 19), // "on_btn_next_clicked"
QT_MOC_LITERAL(5, 85, 39), // "on_combox_smssource_currentIn..."
QT_MOC_LITERAL(6, 125, 5), // "index"
QT_MOC_LITERAL(7, 131, 33) // "on_combox_sms_currentIndexCha..."

    },
    "DialogSMSToDriver\0on_btn_return_clicked\0"
    "\0on_btn_previous_clicked\0on_btn_next_clicked\0"
    "on_combox_smssource_currentIndexChanged\0"
    "index\0on_combox_sms_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogSMSToDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void DialogSMSToDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogSMSToDriver *_t = static_cast<DialogSMSToDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_return_clicked(); break;
        case 1: _t->on_btn_previous_clicked(); break;
        case 2: _t->on_btn_next_clicked(); break;
        case 3: _t->on_combox_smssource_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_combox_sms_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DialogSMSToDriver::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogSMSToDriver.data,
      qt_meta_data_DialogSMSToDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DialogSMSToDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogSMSToDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DialogSMSToDriver.stringdata0))
        return static_cast<void*>(const_cast< DialogSMSToDriver*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogSMSToDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
