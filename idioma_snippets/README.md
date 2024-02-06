# Using RAII idiom for manipulate rec


## Compile g++
1) >g++ main.cpp raii.cpp -o raii

2) >.\raii

## About us:

1) Allocate memory in constructor.
2) Manipulate with class-type (for example it use `char` type).
3) Reset the pointer in the function `release()`.

   -this function ensures that the memory is cleared

4) Call destructor for delete pointer.