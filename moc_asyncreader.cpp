/****************************************************************************
** Meta object code from reading C++ file 'asyncreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "asyncreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asyncreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AsyncReader_t {
    QByteArrayData data[23];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsyncReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsyncReader_t qt_meta_stringdata_AsyncReader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AsyncReader"
QT_MOC_LITERAL(1, 12, 5), // "setIQ"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "QVector<double>"
QT_MOC_LITERAL(4, 35, 6), // "setPSD"
QT_MOC_LITERAL(5, 42, 9), // "createFFT"
QT_MOC_LITERAL(6, 52, 9), // "u_int8_t*"
QT_MOC_LITERAL(7, 62, 17), // "configure_rtl_sdr"
QT_MOC_LITERAL(8, 80, 27), // "configure_rtl_sdr_for_sweep"
QT_MOC_LITERAL(9, 108, 20), // "async_read_operation"
QT_MOC_LITERAL(10, 129, 14), // "unsigned char*"
QT_MOC_LITERAL(11, 144, 8), // "uint32_t"
QT_MOC_LITERAL(12, 153, 26), // "async_read_operation_sweep"
QT_MOC_LITERAL(13, 180, 7), // "do_exit"
QT_MOC_LITERAL(14, 188, 8), // "instance"
QT_MOC_LITERAL(15, 197, 12), // "setFrequency"
QT_MOC_LITERAL(16, 210, 12), // "getFrequency"
QT_MOC_LITERAL(17, 223, 7), // "setGain"
QT_MOC_LITERAL(18, 231, 7), // "getGain"
QT_MOC_LITERAL(19, 239, 17), // "setStartFrequency"
QT_MOC_LITERAL(20, 257, 17), // "getStartFrequency"
QT_MOC_LITERAL(21, 275, 15), // "setEndFrequency"
QT_MOC_LITERAL(22, 291, 15) // "getEndFrequency"

    },
    "AsyncReader\0setIQ\0\0QVector<double>\0"
    "setPSD\0createFFT\0u_int8_t*\0configure_rtl_sdr\0"
    "configure_rtl_sdr_for_sweep\0"
    "async_read_operation\0unsigned char*\0"
    "uint32_t\0async_read_operation_sweep\0"
    "do_exit\0instance\0setFrequency\0"
    "getFrequency\0setGain\0getGain\0"
    "setStartFrequency\0getStartFrequency\0"
    "setEndFrequency\0getEndFrequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsyncReader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,  105,    2, 0x0a /* Public */,
       7,    0,  110,    2, 0x0a /* Public */,
       8,    0,  111,    2, 0x0a /* Public */,
       9,    3,  112,    2, 0x0a /* Public */,
      12,    3,  119,    2, 0x0a /* Public */,
      13,    0,  126,    2, 0x0a /* Public */,
      14,    0,  127,    2, 0x0a /* Public */,
      15,    1,  128,    2, 0x0a /* Public */,
      16,    0,  131,    2, 0x0a /* Public */,
      17,    1,  132,    2, 0x0a /* Public */,
      18,    0,  135,    2, 0x0a /* Public */,
      19,    1,  136,    2, 0x0a /* Public */,
      20,    0,  139,    2, 0x0a /* Public */,
      21,    1,  140,    2, 0x0a /* Public */,
      22,    0,  143,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    0x80000000 | 3, QMetaType::Int, 0x80000000 | 6,    2,    2,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11, QMetaType::VoidStar,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 11, QMetaType::VoidStar,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,

       0        // eod
};

void AsyncReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AsyncReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setIQ((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 1: _t->setPSD((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 2: { QVector<double> _r = _t->createFFT((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< u_int8_t*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<double>*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->configure_rtl_sdr();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->configure_rtl_sdr_for_sweep();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->async_read_operation((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 6: _t->async_read_operation_sweep((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< uint32_t(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        case 7: _t->do_exit(); break;
        case 8: _t->instance(); break;
        case 9: _t->setFrequency((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 10: { int _r = _t->getFrequency();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setGain((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 12: { int _r = _t->getGain();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->setStartFrequency((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 14: { int _r = _t->getStartFrequency();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->setEndFrequency((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 16: { int _r = _t->getEndFrequency();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AsyncReader::*)(QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncReader::setIQ)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AsyncReader::*)(QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AsyncReader::setPSD)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AsyncReader::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_AsyncReader.data,
    qt_meta_data_AsyncReader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AsyncReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsyncReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AsyncReader.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int AsyncReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void AsyncReader::setIQ(QVector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AsyncReader::setPSD(QVector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
