#include <iostream>
#include <vector>


template <typename T>
void print_elems(std::vector<T> &vec){
    for(int i =0; i< vec.size(); i++){
        std::cout << vec[i] << "\t";
    }
    std::cout<< std::endl;
}

template <typename T>
void delete_vector(std::vector<T> &vec ){
    vec.clear();
}

void vector_main(){
    int sz = 5;
    std::vector<int> myVector(sz);
  
    myVector = {3, 5, 7,2,29};
    print_elems(myVector);

    std::cout << myVector.front() << std::endl;
    std::cout << myVector.back() << std::endl;

    delete_vector(myVector);

}