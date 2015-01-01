/****************************************************************************
** Meta object code from reading C++ file 'fwtest.h'
**
** Created: Wed Apr 29 14:28:06 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fwtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fwtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fwtest[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      37,    7,    7,    7, 0x08,
      63,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     107,    7,    7,    7, 0x08,
     127,    7,    7,    7, 0x08,
     153,    7,    7,    7, 0x08,
     171,    7,    7,    7, 0x08,
     191,    7,    7,    7, 0x08,
     217,  209,    7,    7, 0x08,
     247,  236,    7,    7, 0x08,
     289,  278,  274,    7, 0x08,
     321,  312,  274,    7, 0x08,
     342,    7,    7,    7, 0x08,
     365,    7,    7,    7, 0x08,
     391,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fwtest[] = {
    "fwtest\0\0on_Start_Framework_clicked()\0"
    "on_Un_Subscribe_clicked()\0"
    "on_Test_FW_clicked()\0on_Subscribe_clicked()\0"
    "on_Delete_clicked()\0on_View_Details_clicked()\0"
    "on_Test_clicked()\0on_Create_clicked()\0"
    "on_Link_clicked()\0devName\0on_Delete(QString)\0"
    "type,model\0on_Create(int,std::string)\0"
    "int\0deviceName\0getDeviceType(QString)\0"
    "LinkName\0getLinkType(QString)\0"
    "on_CLI_returnPressed()\0on_ManCLI_returnPressed()\0"
    "on_Manage()\0"
};

const QMetaObject fwtest::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_fwtest,
      qt_meta_data_fwtest, 0 }
};

const QMetaObject *fwtest::metaObject() const
{
    return &staticMetaObject;
}

void *fwtest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fwtest))
        return static_cast<void*>(const_cast< fwtest*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int fwtest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_Start_Framework_clicked(); break;
        case 1: on_Un_Subscribe_clicked(); break;
        case 2: on_Test_FW_clicked(); break;
        case 3: on_Subscribe_clicked(); break;
        case 4: on_Delete_clicked(); break;
        case 5: on_View_Details_clicked(); break;
        case 6: on_Test_clicked(); break;
        case 7: on_Create_clicked(); break;
        case 8: on_Link_clicked(); break;
        case 9: on_Delete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: on_Create((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 11: { int _r = getDeviceType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = getLinkType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: on_CLI_returnPressed(); break;
        case 14: on_ManCLI_returnPressed(); break;
        case 15: on_Manage(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
