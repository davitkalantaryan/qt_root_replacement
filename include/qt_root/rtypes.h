//
// repo:            qt_root_replacement
// file:            rtypes.h
// path:			include/qt_root/rtypes.h
// created on:		2026 Oct 13
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#ifdef __cplusplus
#pragma once
#endif

#ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_RTYPES_H
#define QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_RTYPES_H

#include <qt_root/internal_header.h>

#ifdef PITZ_EMWIZ_ROOT_NOT_USED


#if !defined(Int_t_defined) && !defined(Int_t)
typedef int Int_t;
#define Int_t_defined
#endif


#if !defined(Double_t_defined) && !defined(Double_t)
typedef double Double_t;
#define Double_t_defined
#endif


#if !defined(Option_t_defined) && !defined(Option_t)
typedef const char Option_t;
#define Option_t_defined
#endif


#endif  //  #ifdef PITZ_EMWIZ_ROOT_NOT_USED
#endif  //  #ifndef QT_ROOT_REPLACEMENT_INCLUDE_QT_ROOT_RTYPES_H
