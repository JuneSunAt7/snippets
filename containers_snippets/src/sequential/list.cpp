#include "list.h"
#include <iostream>

template <typename T>
void print_elems(std::list <T> &list){
    for(const auto &elem : list){
        std::cout << elem << "\t";
    }
    std::cout << std::endl;
}
template <typename T>
int size_list(std::list <T> &list){
    return list.size();
}

template <typename T>
bool get_data(std::list <T> &list, T &data){
    for(auto iter : list){
        if (iter == data){
            return true;
        }
         else{ 
        return false; 
        }
    }
    
}

template <typename T>
void delete_list(std::list<T> &list ){
   list.clear();
}

template <typename T>
std::list <T> add_elem(std::list <T> &list, const T &elem, const int &index){
    std::list <T> newList;
    newList = list;
    delete_list(list);

    typename std::list<T>::iterator it = newList.begin();
    std::advance(it, index);  // Перемещаем итератор на нужный индекс
    newList.insert(it, elem);  // Вставляем новый элемент перед указанным индексом

    return newList;
}

template <typename T>
std::list <T> sorted_list(std::list <T> &list){
    list.sort();
    return list;
}
void list_main(){
    std::list <char> list1(7);
    for (char c = 'a'; c <= 'f'; ++c) {
     list1.push_back(c);
    }
    print_elems(list1);

    std::cout << size_list(list1) << std::endl;;

    std::list <char> addedlem = add_elem(list1, 'N', 3);

    std::list <char> sorted_list1 = sorted_list(list1);

    print_elems(sorted_list1);

    delete_list(sorted_list1);

}