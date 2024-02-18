#include <iostream>
#include <thread>
#include <mutex>

class Mutex {
public:
    Mutex() : mutex(std::mutex()), counter(0) {}
    ~Mutex(){delete &mutex;}

    void incrementCounter();

    int getCounter();

    void mutex_main();

private:
    std::mutex mutex;
    int counter = 0;
};
