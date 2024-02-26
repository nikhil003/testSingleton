#ifndef FOO_STRUCT_H
#define FOO_STRUCT_H

#include <string>

template <typename T>
struct FooStruct {
    FooStruct();

    std::string a;
    T b;
};

namespace FooSpace {
    std::string get_member(const FooStruct<double>);
    FooStruct<double> test_struct();
}

#endif