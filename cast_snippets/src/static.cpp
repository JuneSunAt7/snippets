#include "static.h"

double double_performer(int num) { return static_cast<double>(num); }

void* void_ptr(void* ptr) { return static_cast<void*>(ptr); }

class Base {};
class Derived : public Base {};

Base* b(Derived& d) { return static_cast<Base*>(&d); }

template<typename T, typename U>
T add(T a, U b) {
    return static_cast<T>(a + b);
}

int result() { return add<int, double>(5, 3.14); }

void static_main() {
    int my_num = 23;
    int* ptr = &my_num;

    int* my_void_ptr = static_cast<int*>(void_ptr(ptr));

    std::cout << my_void_ptr << std::endl;

    double my_double_performed = double_performer(my_num);
    std::cout << my_double_performed << std::endl;
}
