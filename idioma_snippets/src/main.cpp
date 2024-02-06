#include "raii.h"
#include <iostream>

int main(){
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