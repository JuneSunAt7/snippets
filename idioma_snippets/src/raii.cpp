#include <iostream>
#include "raii.h"

CharArray::~CharArray(){
if(data)
    {
        std::cout << "Freeing memory..." << std::endl;
        delete[] data;      // dislocate mem
    }
}
// transferring a resource to another object
char *CharArray::release()
{
    char* result = data;
    data = nullptr;
    return result;
}
