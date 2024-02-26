#ifndef RCPP_FOO_WRAP_H
#define RCPP_FOO_WRAP_H

#include <RcppCommon.h>
#include "foo_struct.h"

namespace Rcpp {
    template <typename T>
    SEXP wrap (const FooStruct<T>& obj) {
        return Rcpp::wrap(Rcpp::List::create(
            Rcpp::Named("a", obj.a),
            Rcpp::Named("b", obj.b)
        ));
    }

}
#endif