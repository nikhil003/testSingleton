#include "../inst/foo.hpp"
#include "../inst/foo_forward.h"

#include <Rcpp.h>

#include "../inst/foo_wrap.h"
#include "../inst/foo_as.h"

using namespace Rcpp;

typedef FooStruct<double> foo_obj;
// Foo* Foo::singleton = NULL;

// RCPP_EXPOSED_CLASS(Foo)
RCPP_EXPOSED_CLASS(FooWrapper)
RCPP_EXPOSED_CLASS_NODECL(foo_obj)

RCPP_MODULE(Foo) {
    // Rcpp::class_<Foo>("Foo")
    // .constructor()
    ;
    // .method("SayHello", &Foo::SayHello);
    // Rcpp::function("GetSingleton", &GetSingleton);

    Rcpp::class_<FooWrapper>("Foo")
    .constructor()
    .method("SayHello", &FooWrapper::SayHello)
    ;

    Rcpp::function("GetFoo", &GetFoo);

    Rcpp::function("test_struct", &FooSpace::test_struct);
    Rcpp::function("get_member", &FooSpace::get_member);
}