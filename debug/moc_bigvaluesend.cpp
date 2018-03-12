/****************************************************************************
** Meta object code from reading C++ file 'bigvaluesend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bigvaluesend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bigvaluesend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BigValueSend_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BigValueSend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BigValueSend_t qt_meta_stringdata_BigValueSend = {
    {
QT_MOC_LITERAL(0, 0, 12), // "BigValueSend"
QT_MOC_LITERAL(1, 13, 15), // "signal_send_msg"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 20), // "signal_send_qvar_msg"
QT_MOC_LITERAL(4, 51, 21), // "signal_send_point_msg"
QT_MOC_LITERAL(5, 73, 19), // "Slot_Start_Send_Msg"
QT_MOC_LITERAL(6, 93, 24), // "Slot_Start_Qvar_Send_Msg"
QT_MOC_LITERAL(7, 118, 25) // "Slot_Start_Point_Send_Msg"

    },
    "BigValueSend\0signal_send_msg\0\0"
    "signal_send_qvar_msg\0signal_send_point_msg\0"
    "Slot_Start_Send_Msg\0Slot_Start_Qvar_Send_Msg\0"
    "Slot_Start_Point_Send_Msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BigValueSend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariantList,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::VoidStar,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BigValueSend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BigValueSend *_t = static_cast<BigValueSend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_send_msg((*reinterpret_cast< QList<QVariant>(*)>(_a[1]))); break;
        case 1: _t->signal_send_qvar_msg((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->signal_send_point_msg((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->Slot_Start_Send_Msg(); break;
        case 4: _t->Slot_Start_Qvar_Send_Msg(); break;
        case 5: _t->Slot_Start_Point_Send_Msg(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BigValueSend::*_t)(QList<QVariant> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BigValueSend::signal_send_msg)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BigValueSend::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BigValueSend::signal_send_qvar_msg)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BigValueSend::*_t)(void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BigValueSend::signal_send_point_msg)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BigValueSend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BigValueSend.data,
      qt_meta_data_BigValueSend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BigValueSend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BigValueSend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BigValueSend.stringdata0))
        return static_cast<void*>(const_cast< BigValueSend*>(this));
    return QObject::qt_metacast(_clname);
}

int BigValueSend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void BigValueSend::signal_send_msg(QList<QVariant> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BigValueSend::signal_send_qvar_msg(QVariant _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BigValueSend::signal_send_point_msg(void * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
