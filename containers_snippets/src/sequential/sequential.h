
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
        T *add_elem(){
            T* result = data;
            return result;
        }
        
};


template <typename T> 
SequentialBase<T>::~SequentialBase(){ delete data; }

template <typename T> 
void SequentialBase<T>::print_elems(){ 
    std::cout << *data << std::endl; 
}