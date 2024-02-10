#include <array>
#include <iostream>

template <typename T, std::size_t N>
void print_elems(std::array <T, N> &array){
    for (const auto& element : array) {
    std::cout << element << "\t";
  }
    std::cout << std::endl;
}

/// array haven't delete. u must use raii methods
void array_main(){
    std::array <char, 7> myArray;
    for (int i = 0; i < 7; i++){
        myArray[i] = 'A' + i;
    }
    print_elems(myArray);

    std::cout << myArray.front() << std::endl; // output A
    std::cout << myArray.size() << std::endl;//output 7
    std::cout << myArray.back() << std::endl;


}
