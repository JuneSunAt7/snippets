#include "mutex.h"

void Mutex::incrementCounter() {
        std::lock_guard<std::mutex> lock(mutex);  // capture mutex
        counter++;
}
int Mutex::getCounter(){
    std::lock_guard<std::mutex> lock(mutex);// capture mutex
    return counter;
}
void Mutex::mutex_main(){
    
    Mutex counter;

    std::thread t1([&counter](){
        for(int i = 0; i < 1000; i++) { // increment counter in first thread
            counter.incrementCounter();
        }
    });

    std::thread t2([&counter](){
        for(int i = 0; i < 1000; i++) {// increment counter in second thread
            counter.incrementCounter();
        }
    });

    // waiting for threads to complete


    t1.join();
    t2.join();

    std::cout << "Final counter value: " << counter.getCounter() << std::endl; // output 2000

}