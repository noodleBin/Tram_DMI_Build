/****************************************************************************
** Meta object code from reading C++ file 'Casco_dmi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Casco_DMIor/Casco_dmi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Casco_dmi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Casco_DMI_t {
    QByteArrayData data[13];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Casco_DMI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Casco_DMI_t qt_meta_stringdata_Casco_DMI = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Casco_DMI"
QT_MOC_LITERAL(1, 10, 13), // "ttsConvertNow"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "char*"
QT_MOC_LITERAL(4, 31, 12), // "changeVolume"
QT_MOC_LITERAL(5, 44, 6), // "volume"
QT_MOC_LITERAL(6, 51, 7), // "recvMsg"
QT_MOC_LITERAL(7, 59, 7), // "playEnd"
QT_MOC_LITERAL(8, 67, 25), // "QMediaPlayer::MediaStatus"
QT_MOC_LITERAL(9, 93, 6), // "status"
QT_MOC_LITERAL(10, 100, 12), // "playMediaNow"
QT_MOC_LITERAL(11, 113, 9), // "recvMySMS"
QT_MOC_LITERAL(12, 123, 11) // "promotetext"

    },
    "Casco_DMI\0ttsConvertNow\0\0char*\0"
    "changeVolume\0volume\0recvMsg\0playEnd\0"
    "QMediaPlayer::MediaStatus\0status\0"
    "playMediaNow\0recvMySMS\0promotetext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Casco_DMI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       4,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   52,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void Casco_DMI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Casco_DMI *_t = static_cast<Casco_DMI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ttsConvertNow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 1: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->recvMsg(); break;
        case 3: _t->playEnd((*reinterpret_cast< QMediaPlayer::MediaStatus(*)>(_a[1]))); break;
        case 4: _t->playMediaNow(); break;
        case 5: _t->recvMySMS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::MediaStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Casco_DMI::*_t)(QString , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Casco_DMI::ttsConvertNow)) {
                *result = 0;
            }
        }
        {
            typedef void (Casco_DMI::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Casco_DMI::changeVolume)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Casco_DMI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Casco_DMI.data,
      qt_meta_data_Casco_DMI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Casco_DMI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Casco_DMI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Casco_DMI.stringdata0))
        return static_cast<void*>(const_cast< Casco_DMI*>(this));
    return QObject::qt_metacast(_clname);
}

int Casco_DMI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Casco_DMI::ttsConvertNow(QString _t1, char * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Casco_DMI::changeVolume(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
