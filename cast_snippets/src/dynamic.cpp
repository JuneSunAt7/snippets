#include "dynamic.h"

void dynamic_cast_main(){
    Ebook cppbook{"C++20: Nice Code", 350, 6};
    Book* book = &cppbook;  // ebook pointer
    // dynamic cast from book obj to ebook obj
    Ebook* ebook{dynamic_cast<Ebook*>(book)};
    ebook->print();  // C++20:Nice Code      Pages: 350      Size: 6Mb
}