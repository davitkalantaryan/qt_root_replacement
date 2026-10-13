//
// repo:            qt_root_replacement
// file:            internal_header.h
// path:			include/qt_root/internal_header.h
// created on:		2026 Oct 13
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_INTERNAL_HEADERS_H
#define QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_INTERNAL_HEADERS_H


#ifndef CINTERNAL_INCLUDE_CINTERNAL_INTERNAL_HEADER_H

#if defined(__GNUC__) || defined(__clang__) || defined(LINUX_GCC)

//#define CPPUTILS_DLL_PRIVATE		__attribute__((visibility("hidden")))
#define CPPUTILS_DLL_PRIVATE
#define CPPUTILS_DLL_PUBLIC
#define CPPUTILS_IMPORT_FROM_DLL

#else

#define CPPUTILS_DLL_PRIVATE
#define CPPUTILS_DLL_PUBLIC         __declspec(dllexport)
#define CPPUTILS_IMPORT_FROM_DLL	__declspec(dllimport)

#endif

#endif  //  #ifndef CINTERNAL_INCLUDE_CINTERNAL_INTERNAL_HEADER_H

#endif  //  #ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_INTERNAL_HEADERS_H
