#ifndef FOO_H
#define FOO_H

#include <iostream>

class Foo {

    public:
        Foo();
        ~Foo();

        // Singleton instance
        static Foo &getFoo();

        // Prevent copy and assignment
        Foo(Foo const&) = delete;
        void operator=(Foo const&) = delete;
};

// class Foo {
//     public:
//         static Foo* singleton;

//         Foo(){
//         }

//         void SayHello(){
//             std::cout << "From \"void SayHello()\" -> "<<this<<" -> ";
//             std::cout << "hello from Foo.\n";
//         }

//         static Foo* getSingleton(){
//             if(singleton == NULL){
//                 Foo::singleton = new Foo();
//             }
//             std::cout<<"From \"static Foo* GetSingleton()\" -> memory address for singleton is " <<Foo::singleton<<"\n";
//             return Foo::singleton;
//         }
// };

class FooWrapper {
    public:
        Foo* foo_m;
        FooWrapper() {}
        FooWrapper(const FooWrapper& other): foo_m(other.foo_m) {}
        FooWrapper(Foo* foo): foo_m (foo) {}
        void SayHello();
};

FooWrapper GetFoo();

#endif