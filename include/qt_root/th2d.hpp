//
// repo:            qt_root_replacement
// file:            th2d.hpp
// path:			include/qt_root/th2d.hpp
// created on:		2026 Oct 13
// created by:		Davit Kalantaryan (davit.kalantaryan@desy.de)
//

#pragma once


#include <qt_root/export_symbols.h>
#include <qt_root/th1d.hpp>
#include <qt_root/taxis.hpp>


class QT_RT_REPL_EXPORT TH2D
{
public:
    TH2D(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
         ,Int_t nbinsy,Double_t ylow,Double_t yup);

    void SetBinContent(Int_t binx, Int_t biny, Double_t content);
    TH1D      *ProjectionX(const char *name="_px", Int_t firstybin=0, Int_t lastybin=-1, Option_t *option="") const; // *MENU*
    TH1D      *ProjectionY(const char *name="_py", Int_t firstxbin=0, Int_t lastxbin=-1, Option_t *option="") const; // *MENU*
    const TAxis* GetXaxis() const;
    const TAxis* GetYaxis() const;
    Double_t GetMean(Int_t axis=1) const;
};
