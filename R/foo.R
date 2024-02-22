# foo.R

#' foo
#'
#' My cool package
#'
#' Imports
#' @useDynLib foo, .registration = TRUE
#' @export Foo
#' @import Rcpp
"_PACKAGE"

Rcpp::loadModule(module = "Foo", TRUE)