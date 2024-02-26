#ifndef RCPP_FOO_FORWARD_H
#define RCPP_FOO_FORWARD_H

#include <RcppCommon.h>
#include "foo_struct.h"

/* forward declarations */
namespace Rcpp {
    namespace traits {
        template <typename T>
        class Exporter< FooStruct<T> >;
    }
    template <typename T>
    SEXP wrap (const FooStruct<T>& obj);
}

#endif