/****************************************************************************
** Meta object code from reading C++ file 'CPtmpConnection.h'
**
** Created: Thu 1. Jan 13:44:03 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Ptmp/CPtmpConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPtmpConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ptmp__CPtmpConnection[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      30,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      54,   22,   22,   22, 0x08,
      72,   22,   22,   22, 0x08,
     105,   93,   22,   22, 0x08,
     147,   22,   22,   22, 0x08,
     161,   22,   22,   22, 0x08,
     173,   22,   22,   22, 0x08,
     183,   23,   22,   22, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Ptmp__CPtmpConnection[] = {
    "Ptmp::CPtmpConnection\0\0buffer\0"
    "sendReady(CPtmpBuffer*)\0socketConnected()\0"
    "socketDisconnected()\0socketError\0"
    "socketError(QAbstractSocket::SocketError)\0"
    "dataArrived()\0keepalive()\0timeout()\0"
    "sendNow(CPtmpBuffer*)\0"
};

const QMetaObject Ptmp::CPtmpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Ptmp__CPtmpConnection,
      qt_meta_data_Ptmp__CPtmpConnection, 0 }
};

const QMetaObject *Ptmp::CPtmpConnection::metaObject() const
{
    return &staticMetaObject;
}

void *Ptmp::CPtmpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ptmp__CPtmpConnection))
        return static_cast<void*>(const_cast< CPtmpConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int Ptmp::CPtmpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendReady((*reinterpret_cast< CPtmpBuffer*(*)>(_a[1]))); break;
        case 1: socketConnected(); break;
        case 2: socketDisconnected(); break;
        case 3: socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: dataArrived(); break;
        case 5: keepalive(); break;
        case 6: timeout(); break;
        case 7: sendNow((*reinterpret_cast< CPtmpBuffer*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Ptmp::CPtmpConnection::sendReady(CPtmpBuffer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
