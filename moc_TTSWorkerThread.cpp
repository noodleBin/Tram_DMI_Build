/****************************************************************************
** Meta object code from reading C++ file 'TTSWorkerThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Casco_DMIor/TTSWorkerThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TTSWorkerThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TTSWorker_t {
    QByteArrayData data[7];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TTSWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TTSWorker_t qt_meta_stringdata_TTSWorker = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TTSWorker"
QT_MOC_LITERAL(1, 10, 11), // "resultReady"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "TTSConvert"
QT_MOC_LITERAL(4, 34, 3), // "txt"
QT_MOC_LITERAL(5, 38, 5), // "char*"
QT_MOC_LITERAL(6, 44, 8) // "filename"

    },
    "TTSWorker\0resultReady\0\0TTSConvert\0txt\0"
    "char*\0filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TTSWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,

       0        // eod
};

void TTSWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TTSWorker *_t = static_cast<TTSWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady(); break;
        case 1: _t->TTSConvert((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TTSWorker::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TTSWorker::resultReady)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject TTSWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TTSWorker.data,
      qt_meta_data_TTSWorker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TTSWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TTSWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TTSWorker.stringdata0))
        return static_cast<void*>(const_cast< TTSWorker*>(this));
    return QObject::qt_metacast(_clname);
}

int TTSWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TTSWorker::resultReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
