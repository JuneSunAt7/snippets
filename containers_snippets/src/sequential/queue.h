#pragma once
#include <iostream>

template <typename T>
class SequentialBase{
    private:
        T *data;
    public:
        SequentialBase() : data{ new T } {}
        ~SequentialBase();
        void print_elems();

        T *release(){
            T* result = data;
            data = nullptr;
            return result;
        };
};

