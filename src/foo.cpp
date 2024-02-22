#include "../inst/foo.hpp"

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