#include "raii.h"
#include "pimpl.h"
#include "smart_pointers.h"

#include <iostream>
void raii_main(){
const unsigned count {5};   // count of elems
    CharArray values{count};     //create obj for manipulate rc

    // add elemets to dynamic arr

    for (unsigned i {}; i < count; ++i)
    {
        values[i] = 'a' + i;
    }

    for (unsigned i {}; i < count; ++i)
    {
        std::cout << values[i] << "\t";
    }

     // get pointer and dislocate mem
     char* data = values.release(); 

    std::cout << std::endl;

    delete [] data;
}
void pimpl_main(){
    PimplExample example;
    example.doSomething();
}
void s_pointer_main(){
    SmartPointer<int> ptr(new int(10));

    std::cout << *ptr << std::endl; // Выводит значение, на которое указывает указатель
    *ptr = 20; // Изменяет значение, на которое указывает указатель
    std::cout << *ptr << std::endl; // Выводит измененное значение

}

int main(){
    
    s_pointer_main();
}