#include <Rcpp.h>
#include "../inst/foo.hpp"

using namespace Rcpp;

// Foo* Foo::singleton = NULL;

// RCPP_EXPOSED_CLASS(Foo)
RCPP_EXPOSED_CLASS(FooWrapper)

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
}