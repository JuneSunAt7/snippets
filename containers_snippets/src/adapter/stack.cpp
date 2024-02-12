#include "stack.h"
#include <iostream>

template <typename T, std::size_t N>
std::stack<T> add_elems(std::stack <T> &stack, std::array <T, N> &arr){
    for (int i = 0; i < arr.size(); i++){
        stack.push(arr[i]);
    }
    return stack;
}

template <typename T>
void delete_all(std::stack <T> &stack){
      while (!stack.empty()) 
    {
        std::cout << stack.top() << std::endl;
        stack.pop();    
    }
}

void main_stack(){
    std::stack <char> my_stack;
    std::array <char, 4> arr{'1', '2', '3', '4'};

    std::stack <char> new_stack = add_elems(my_stack, arr);

    // LIFO

    std::cout << new_stack.top() << std::endl;

    std::cout << get_size(new_stack) << std::endl;

    new_stack.pop();
    new_stack.push('0');

    std::cout << new_stack.top() << std::endl;

    delete_all(new_stack);
    delete_all(my_stack);

}