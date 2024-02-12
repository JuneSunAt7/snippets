#include "map.h"
#include <iostream>
#include <string>

template <typename T>
void print_elems(std::map <T, std::size_t> &map){
    for (const auto& elem : map) {
         std::cout << elem.first << ": " << elem.second << std::endl; 
         }
}

template <typename T>
void delete_map(std::map <T, std::size_t> &map){
   map.clear();
}

template <typename T>
int get_size(std::map <T, std::size_t> &map){
    return map.size();
}

void map_main(){

    std::map<int, std::size_t> my_map;
    my_map[1] = 10;
    my_map[2] = 20;
    my_map[3] = 30;

    print_elems(my_map);
    std::cout << "Size of map: " << get_size(my_map) << std::endl;

    delete_map(my_map);
    std::cout << "Size of map after deletion: " << get_size(my_map) << std::endl;


}