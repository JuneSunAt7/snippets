#include <iostream>
#include <thread>
#include <vector>
#include <functional>
#include <mutex>
#include <list>
#include <condition_variable>

class ThreadPool {
public:
    ThreadPool(int numThreads) : numThreads(numThreads) {start();}
    
    ~ThreadPool() {stop();} // automaticaly removing private fields
    
    void addTask(std::function<void()> task);

    void main_threads();

    
private:
    void start();
    
    void stop();
    
    int numThreads;
    std::vector<std::thread> threads;
    std::list<std::function<void()>> taskQueue;
    std::mutex queueMutex;
    std::condition_variable condition;
};
