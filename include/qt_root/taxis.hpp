//
// repo:            qt_root_replacement
// file:            taxis.hpp
// path:			include/qt_root/taxis.hpp
// created on:		2026 Oct 15
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#pragma once


#include <qt_root/export_symbols.h>
#include <qt_root/rtypes.h>


class QT_RT_REPL_EXPORT TAxis
{
public:
    Int_t      GetNbins() const;
    Double_t   GetBinWidth(Int_t bin) const;
};
