# Using code idioms for manipulate rec


## Compile g++
1) >g++ main.cpp raii.cpp -o raii

2) >./raii

## [RAII](src/raii.h)

1) Allocate memory in constructor.
2) Manipulate with class-type (for example it use `char` type).
3) Reset the pointer in the function `release()`.

   -this function ensures that the memory is cleared

4) Call destructor for delete pointer.

## [PImpl](src/pimpl.h)

Because private data members of a class participate in its object representation, affecting size and layout, and because private member functions of a class participate in overload resolution (which takes place before member access checking), any change to those implementation details requires recompilation of all users of the class.

pImpl removes this compilation dependency; changes to the implementation do not cause recompilation. Consequently, if a library uses pImpl in its ABI, newer versions of the library may change the implementation while remaining ABI-compatible with older versions.

## [Smart pointers](src/smart_pointers.h)

In modern C++ programming, the Standard Library includes smart pointers, which are used to help ensure that programs are free of memory and resource leaks and are exception-safe.

```cpp
 void UseRawPointer()
{
    // Using a raw pointer -- not recommended.
    Song* pSong = new Song(L"Nothing on You", L"Bruno Mars"); 

    // Use pSong...

    // Don't forget to delete!
    delete pSong;   
}

void UseSmartPointer()
{
    // Declare a smart pointer on stack and pass it the raw pointer.
    unique_ptr<Song> song2(new Song(L"Nothing on You", L"Bruno Mars"));

    // Use song2...
    wstring s = song2->duration_;
    //...

} // song2 is deleted automatically here.
```