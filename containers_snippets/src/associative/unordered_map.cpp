#include "unordered_map.h"
#include <iostream>

template <typename T>
void print_elems(std::unordered_map <T, std::string> &unord_map){
    for (const auto &elem : unord_map){
        std::cout << elem.first << ": " << elem.second << std::endl; 
    }
    std::cout << std::endl;
}

template <typename T>
int get_size(std::unordered_map <T, std::string> &unord_map){
    return unord_map.size();
}

template <typename T>
void delete_unord_map(std::unordered_map <T, std::string> &unord_map){
    unord_map.clear();
}

void unord_map_main(){
    std::unordered_map <int, std::string> my_u_map;

    my_u_map.insert(std::pair<int, std::string>(1, "apple"));
    my_u_map.insert(std::pair<int, std::string>(5, "cucumber"));
    my_u_map.insert(std::pair<int, std::string>(8, "carrot"));
    my_u_map.insert(std::pair<int, std::string>(10, "cake"));
    my_u_map.insert(std::pair<int, std::string>(10, "banana"));

    print_elems(my_u_map);
    std::cout << get_size(my_u_map) << std::endl;

    delete_unord_map(my_u_map);

}