/****************************************************************************
** Meta object code from reading C++ file 'fwtest.h'
**
** Created: Fri 2. Jan 13:04:47 2015
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fwtest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fwtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fwtest[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      37,    7,    7,    7, 0x08,
      63,    7,    7,    7, 0x08,
      84,    7,    7,    7, 0x08,
     118,  107,    7,    7, 0x08,
     148,  137,    7,    7, 0x08,
     179,  107,  175,    7, 0x08,
     211,  202,  175,    7, 0x08,
     249,  240,  232,    7, 0x08,
     266,    7,    7,    7, 0x08,
     298,    7,    7,    7, 0x08,
     324,    7,    7,    7, 0x08,
     336,    7,    7,    7, 0x08,
     354,    7,    7,    7, 0x08,
     368,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fwtest[] = {
    "fwtest\0\0on_Start_Framework_clicked()\0"
    "on_Un_Subscribe_clicked()\0"
    "on_sendUDP_clicked()\0on_Subscribe_clicked()\0"
    "deviceName\0on_Delete(QString)\0type,model\0"
    "on_Create(int,std::string)\0int\0"
    "getDeviceType(QString)\0LinkName\0"
    "getLinkType(QString)\0QString\0linkType\0"
    "getLinkName(int)\0on_workspaceCLI_returnPressed()\0"
    "on_devCLI_returnPressed()\0on_Manage()\0"
    "start_Framework()\0tree_Widget()\0"
    "read_Workspace_CLI()\0"
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
    if (!strcmp(_clname, "IUDPReceiverListener"))
        return static_cast< IUDPReceiverListener*>(const_cast< fwtest*>(this));
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
        case 2: on_sendUDP_clicked(); break;
        case 3: on_Subscribe_clicked(); break;
        case 4: on_Delete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: on_Create((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 6: { int _r = getDeviceType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = getLinkType((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QString _r = getLinkName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: on_workspaceCLI_returnPressed(); break;
        case 10: on_devCLI_returnPressed(); break;
        case 11: on_Manage(); break;
        case 12: start_Framework(); break;
        case 13: tree_Widget(); break;
        case 14: read_Workspace_CLI(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
