#include "queue.h"
#include <iostream>
#include <string>


template <typename T>
int get_size(std::queue <T> &que){
    return que.size();
}

template <typename T, std::size_t N>
std::queue <T> add_elems(std::queue <T> &que, std::array <T, N> &arr){
    for (int i = 0; i < arr.size(); i++){
        que.push(arr[i]);
    }
    return que;
}

template <typename T>
void delete_all(std::queue <T> &que){
    for(int i = 0; i < que.size(); i++){
        que.pop();
    }
}

void queue_main(){
    std::queue <std::string> que;

    std::array <std::string, 5> arr{"one", "two", "three", "four", "five"};

    std::queue <std::string> new_que = add_elems(que, arr);
    //FIFO
    std::cout << new_que.front() <<std::endl;
    std::cout << new_que.back() << std::endl;

    new_que.pop();
    new_que.push("null");

    std::cout << new_que.back() << std::endl;


    delete_all(que);
    delete_all(new_que);

}