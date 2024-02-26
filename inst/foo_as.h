#ifndef RCPP_FOO_AS_H
#define RCPP_FOO_AS_H

#include <RcppCommon.h>
#include "foo_struct.h"

namespace Rcpp {
    namespace traits {
    template <typename T>
    class Exporter< FooStruct<T> > {
        public:
            Exporter (SEXP x): data(x) {}

            FooStruct<T> get() {
                obj.a = data["a"];
                obj.b = data["b"];
                return obj;
            }
        private:
            FooStruct<T> obj;
            Rcpp::List data;
    };
    }
}
#endif