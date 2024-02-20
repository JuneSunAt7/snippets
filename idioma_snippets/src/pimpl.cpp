// Implementation file

#include "pimpl.h"
#include <set>
#include <iostream>

PimplExample::PimplExample() : impl(new Impl) {}

PimplExample::~PimplExample() {
    delete impl;
}

void PimplExample::doSomething() {
    impl->doSomething();
}

void PimplExample::Impl::doSomething(){
    for(int i = 0; i < 10; i++){
        u_set.insert('A'+i);
    }
    print_elems();

    std::cout << u_set.size() << std::endl;

    for (auto it = u_set.begin(); it != u_set.end();)
    {
        u_set.erase(it);
    }
    std::cout << "set erased" << std::endl;

}

void PimplExample::Impl::print_elems(){
    for (auto elem : u_set){
        std::cout << elem << "\t";
    }
    std::cout << std::endl;
}