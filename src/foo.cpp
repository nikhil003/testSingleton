#include "../inst/foo.hpp"
#include "../inst/foo_struct.h"

Foo& Foo::getFoo() {
    static Foo foo;
    return foo;
}

Foo::Foo() {}

Foo::~Foo() {}

void FooWrapper::SayHello(){
    std::cout << "From \"void SayHello()\" -> "<<(this->foo_m)<<" -> ";
    std::cout << "hello from Foo.\n";
}

FooWrapper GetFoo() {
    FooWrapper ret(&Foo::getFoo());
    std::cout<<"From \"Foo& GetFoo()\" -> memory address for singleton is " <<ret.foo_m<<"\n";
    return ret;
}

template <typename T>
FooStruct<T>::FooStruct() {
    a = "a";
    b = T();
}

namespace FooSpace
{
    std::string get_member(const FooStruct<double> foo_struct) {
        return foo_struct.a;
    }

    FooStruct<double> test_struct() {
        auto obj = FooStruct<double>();
        obj.a = "aDjhfsdu";
        obj.b = 654639.0;
        return obj;
    }
} // namespace FooSpace

template struct FooStruct<double>;