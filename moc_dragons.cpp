/****************************************************************************
** Meta object code from reading C++ file 'dragons.h'
**
** Created: Sun Jul 1 02:15:07 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dragons.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dragons.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_dragons[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      29,    8,    8,    8, 0x08,
      50,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_dragons[] = {
    "dragons\0\0on_btn_no_clicked()\0"
    "on_btn_yes_clicked()\0closedragons()\0"
};

const QMetaObject dragons::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dragons,
      qt_meta_data_dragons, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &dragons::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *dragons::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *dragons::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_dragons))
        return static_cast<void*>(const_cast< dragons*>(this));
    return QDialog::qt_metacast(_clname);
}

int dragons::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btn_no_clicked(); break;
        case 1: on_btn_yes_clicked(); break;
        case 2: closedragons(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
