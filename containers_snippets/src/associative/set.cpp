#include "set.h"
#include <iostream>

template <typename T>
void print_elems(std::set <T> &set){
    for (auto elem : set){
        std::cout << elem << "\t";
    }
    std::cout << std::endl;
}

template <typename T>
void delete_set(std::set <T> &set){
    for (auto it = set.begin(); it != set.end();)
    {
        set.erase(it);
    }
}

template <typename T>
int get_size(std::set <T> &set){
    return set.size();
}

void set_main(){
    std::set <int> mySet;

    for(int i = 0; i <7; i++){
       mySet.insert(i);
    }
    print_elems(mySet);
    

    std::cout << get_size(mySet) << std::endl;
    std::cout << mySet.count(9) << std::endl;

    for(int j = 10; j < 20; j++){
        mySet.insert(j);
    }
    
    print_elems(mySet);
    delete_set(mySet);
}