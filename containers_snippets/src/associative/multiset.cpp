#include "multiset.h"


template <typename T>
void print_elems(std::multiset < T> &m_set){
    for(auto &elem : m_set ){
        std::cout << elem << "\t";
    }
    std::cout << std::endl;
}

template <typename T>
int get_size(std::multiset <T, std::size_t> &map){
    return map.size();
}

template <typename T>
void delete_m_set(std::multiset <T> &m_set){
    m_set.clear();
}

void m_set_main(){
    std::multiset <double> my_m_set;

    my_m_set.insert(3.14);
    my_m_set.insert(5.23);
    my_m_set.insert(39.09);
    my_m_set.insert(3.14);

    print_elems(my_m_set); // consist duplicates

    //std::cout << get_size(my_m_set) << std::endl;


    delete_m_set(my_m_set);


}