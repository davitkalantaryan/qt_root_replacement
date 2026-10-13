//
// repo:            qt_root_replacement
// file:            export_symbols.h
// path:			include/qt_root/export_symbols.h
// created on:		2026 Oct 13
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_EXPORT_SYMBOLS_H
#define QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_EXPORT_SYMBOLS_H


#include <qt_root/internal_header.h>


#ifndef QT_RT_REPL_EXPORT
#if defined(QT_RT_REPL_COMPILING_SHARED_LIB)
#define QT_RT_REPL_EXPORT CPPUTILS_DLL_PUBLIC
#elif defined(QT_RT_REPL_USING_STATIC_LIB_OR_OBJECTS)
#define QT_RT_REPL_EXPORT
#elif defined(QT_RT_REPL_LOAD_FROM_DLL)
#define QT_RT_REPL_EXPORT CPPUTILS_IMPORT_FROM_DLL
#else
#define QT_RT_REPL_EXPORT CPPUTILS_DLL_PRIVATE
#endif
#endif


#endif  //  #ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_EXPORT_SYMBOLS_H
