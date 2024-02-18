#include "threads.h"

void ThreadPool::addTask(std::function<void()>task){
    std::unique_lock<std::mutex> lock(queueMutex);
        taskQueue.push_back(task);
        condition.notify_one();
}

void ThreadPool::start(){
    for (int i = 0; i < numThreads; ++i) {
            threads.push_back(std::thread([this]() {
                while (true) {
                    std::function<void()> task;
                    
                    {
                        std::unique_lock<std::mutex> lock(queueMutex);
                        condition.wait(lock, [this] { return !taskQueue.empty(); });
                        task = taskQueue.front();
                        taskQueue.pop_front();
                    }
                    
                    task();
                }
            }));
        }
}

void ThreadPool::stop(){
     for (std::thread& thread : threads) {
            thread.join();
        }
}

void task_overrided(){ // example function
    std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
}

void ThreadPool::main_threads(){
    ThreadPool pool(4);
    for (int i = 0; i < 10; ++i) {
        pool.addTask(task_overrided);
    }
    
    std::this_thread::sleep_for(std::chrono::seconds(2));
}