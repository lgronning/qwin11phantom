/****************************************************************************
** Meta object code from reading C++ file 'qwin11phantomstyleplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qwin11phantomstyleplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwin11phantomstyleplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWin11PhantomStylePlugin_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWin11PhantomStylePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWin11PhantomStylePlugin_t qt_meta_stringdata_QWin11PhantomStylePlugin = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QWin11PhantomStylePlugin"

    },
    "QWin11PhantomStylePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWin11PhantomStylePlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QWin11PhantomStylePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QWin11PhantomStylePlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<QStylePlugin::staticMetaObject>(),
    qt_meta_stringdata_QWin11PhantomStylePlugin.data,
    qt_meta_data_QWin11PhantomStylePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QWin11PhantomStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWin11PhantomStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWin11PhantomStylePlugin.stringdata0))
        return static_cast<void*>(this);
    return QStylePlugin::qt_metacast(_clname);
}

int QWin11PhantomStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStylePlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x28,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  'S',  't', 
    'y',  'l',  'e',  'F',  'a',  'c',  't',  'o', 
    'r',  'y',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e', 
    // "className"
    0x03,  0x78,  0x18,  'Q',  'W',  'i',  'n',  '1', 
    '1',  'P',  'h',  'a',  'n',  't',  'o',  'm', 
    'S',  't',  'y',  'l',  'e',  'P',  'l',  'u', 
    'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa1,  0x64,  'K',  'e',  'y',  's',  0x81, 
    0x6d,  'q',  'w',  'i',  'n',  '1',  '1',  'p', 
    'h',  'a',  'n',  't',  'o',  'm', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(QWin11PhantomStylePlugin, QWin11PhantomStylePlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
