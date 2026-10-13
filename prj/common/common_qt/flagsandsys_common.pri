#
# repo:		qt_root_replacement
# name:		flagsandsys_common.pri
# path:		prj/common/common_qt/flagsandsys_common.pri
# created on:   2026 Oct 13
# created by:   Davit Kalantaryan (davit.kalantaryan@desy.de)
# usage:	Use this qt include file to calculate some platform specific stuff
#


message("!!! $${PWD}/flagsandsys_common.pri")

isEmpty(qtRootReplacementFlagsAndSysCommonIncluded){
    qtRootReplacementFlagsAndSysCommonIncluded = 1

    qtRootReplacementRepoRoot = $${PWD}/../../..

    isEmpty(artifactRoot) {
        artifactRoot = $$(artifactRoot)
        isEmpty(artifactRoot) {
            artifactRoot = $${qtRootReplacementRepoRoot}
        }
    }

    include("$${qtRootReplacementRepoRoot}/contrib/qtutils/prj/common/common_qt/flagsandsys_common.pri")

    INCLUDEPATH += $${qtRootReplacementRepoRoot}/include

    exists($${qtRootReplacementRepoRoot}/sys/$${CODENAME}/$$CONFIGURATION/lib) {
        LIBS += -L$${qtRootReplacementRepoRoot}/sys/$${CODENAME}/$$CONFIGURATION/lib
    }
    exists($${qtutilsRepoRoot}/sys/$${CODENAME}/$$CONFIGURATION/tlib) {
        LIBS += -L$${qtRootReplacementRepoRoot}/sys/$${CODENAME}/$$CONFIGURATION/tlib
    }
}
