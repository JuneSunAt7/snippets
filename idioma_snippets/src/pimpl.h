#include <set>

class PimplExample {
public:
    PimplExample();
    ~PimplExample();
    
    void doSomething();
    
private:
    class Impl;
    Impl* impl;
};

class PimplExample::Impl {
private:
    std::set <char> u_set;
public:
    void doSomething();
    void print_elems();
};