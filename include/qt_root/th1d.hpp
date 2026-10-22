//
// repo:            qt_root_replacement
// file:            th1d.hpp
// path:			include/qt_root/th1d.hpp
// created on:		2026 Oct 15
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#pragma once


#include <qt_root/export_symbols.h>
#include <qt_root/rtypes.h>


class QT_RT_REPL_EXPORT TH1D
{
public:
    Double_t GetRMS(Int_t axis=1) const;
    Double_t GetRMSError(Int_t axis=1) const;
    Double_t GetMeanError(Int_t axis=1) const;
    Double_t Integral(Option_t *option="") const;
    Double_t GetBinContent(Int_t bin) const;
};
