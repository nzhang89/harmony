// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "harmony_types.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// compute_Y
MATTYPE compute_Y(const MATTYPE& Z_cos, const MATTYPE& R);
RcppExport SEXP _harmony_compute_Y(SEXP Z_cosSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MATTYPE& >::type Z_cos(Z_cosSEXP);
    Rcpp::traits::input_parameter< const MATTYPE& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_Y(Z_cos, R));
    return rcpp_result_gen;
END_RCPP
}
// scaleRows_dgc
MATTYPE scaleRows_dgc(const VECTYPE& x, const VECTYPE& p, const VECTYPE& i, int ncol, int nrow, float thresh);
RcppExport SEXP _harmony_scaleRows_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP threshSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const VECTYPE& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const VECTYPE& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const VECTYPE& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< float >::type thresh(threshSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleRows_dgc(x, p, i, ncol, nrow, thresh));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_harmony_module();

static const R_CallMethodDef CallEntries[] = {
    {"_harmony_compute_Y", (DL_FUNC) &_harmony_compute_Y, 2},
    {"_harmony_scaleRows_dgc", (DL_FUNC) &_harmony_scaleRows_dgc, 6},
    {"_rcpp_module_boot_harmony_module", (DL_FUNC) &_rcpp_module_boot_harmony_module, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_harmony(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
