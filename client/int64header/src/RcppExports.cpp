// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Int64toInt64
Rcpp::NumericVector Int64toInt64(Rcpp::NumericVector vec);
RcppExport SEXP _int64header_Int64toInt64(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Int64toInt64(vec));
    return rcpp_result_gen;
END_RCPP
}
// Int64toInt64Alt
SEXP Int64toInt64Alt(Rcpp::NumericVector vec);
RcppExport SEXP _int64header_Int64toInt64Alt(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type vec(vecSEXP);
    rcpp_result_gen = Rcpp::wrap(Int64toInt64Alt(vec));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_int64header_Int64toInt64", (DL_FUNC) &_int64header_Int64toInt64, 1},
    {"_int64header_Int64toInt64Alt", (DL_FUNC) &_int64header_Int64toInt64Alt, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_int64header(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
