# Create *.dll file from *.cpp & *.h and compile with g++


## Compile g++
1) >g++ -c filename.cpp -o filename.o 

2) >g++ -shared -o filename.dll filename.o

## Structure of code files:

```
// filename.h
#ifdef FILENAME_EXPORTS
#define FILENAME_API __declspec(dllexport) // init dll filetype
#else
#define FILENAME_API __declspec(dllimport)
#endif

FILENAME_API int add(int a, int b); // init function
```

```
// filename.cpp
#include "filename.h"

int add(int a, int b) { // define function and add conduct
    return a + b;
}
```
