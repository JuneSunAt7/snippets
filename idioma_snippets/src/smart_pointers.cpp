#include "smart_pointers.h"


template <class T>
SmartPointer<T>::SmartPointer(SmartPointer&& other)
{
    pointer = other.pointer;
    other.pointer = nullptr;
}

template <class T>
SmartPointer<T>& SmartPointer<T>::operator=(SmartPointer&& other)
{
    if (this != &other) {
        delete pointer;
        pointer = other.pointer;
        other.pointer = nullptr;
    }
    return *this;
}
