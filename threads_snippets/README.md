# Example for threads and compile with g++ 

## [mutex](src/mutex.h)
One of the key advantages (over using multiple processes) of using threads for concurrency is the ability to share (share) data among multiple threads.

Imagine for a moment that you live in the same apartment with a friend. You have one kitchen and one bathroom for two. Usually the bathroom is not used by several people at the same time, and the fact that your neighbor splashes in the water for too long, forcing you to wait for your turn, cannot but irritate. Perhaps one of you wants to bake sausages in the oven while the other has muffins in there, and nothing good will come of that either. Well, everyone knows the feeling of frustration when, with shared equipment, you are halfway through solving a problem and suddenly discover that someone took something you needed at the moment or changed something, and you expected that everything would remain the same in the same condition or in place.

## [std::threads](src/threads.h)

```cpp std::threads``` from the C++ Standard Library are used to create and manage threads of execution in multi-threaded programs. Threads allow different parts of a program to be executed in parallel, which improves performance when running multitasking or multithreaded applications.

Using ```cpp std::threads```, you can create a new thread of execution, pass a function to it to execute, wait for the thread to complete, and synchronize access to shared resources between threads using mutexes, condition variables, and other synchronization mechanisms.