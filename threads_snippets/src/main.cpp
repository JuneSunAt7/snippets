#include "mutex.h"
#include "threads.h"
#include <iostream>

int main(){
    Mutex mtx;
    mtx.mutex_main();

    ThreadPool trpl(4);
    trpl.main_threads();
}
