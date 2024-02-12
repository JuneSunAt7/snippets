#include "deque.h"
#include <iostream>
#include <random>


template <typename T>
void print_elems(std::deque <T> &deq){
    for (const auto& element : deq) {
        std::cout << element << "\t";
  }
        std::cout << std::endl;
}

template <typename T>
int get_size(std::deque <T> &deq){
    int n {deq.size()};
    if (n == 0) {
        return 0;
    }
    return n;
}

void deque_main(){
    std::deque <double> deq1;
    
    std::random_device rd;  // инициализация генератора случайных чисел
    std::mt19937 gen(rd()); // последовательный генератор

      std::uniform_real_distribution<double> dis(0.0, 1.0);
        for (int i = 0; i < 10; ++i) {
            double randomNum = dis(gen);
            deq1.push_back(randomNum);
        }
        print_elems(deq1);

        deq1.resize(5);
        std::cout << deq1.front() <<std::endl;
        std::cout << deq1.back() << std::endl;

        deq1.assign(2.3, 5);

        print_elems(deq1);
        deq1.emplace_front(3.7);

        print_elems(deq1);
        auto iter = ++deq1.cbegin(); 
        deq1.emplace(iter, 6.8);

        print_elems(deq1);

        delete_deque(deq1);
}

template <typename T>
void delete_deque(std::deque <T> &deq){
    deq.clear();
}