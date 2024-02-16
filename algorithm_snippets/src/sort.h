#include <vector>
#include <algorithm>
#include <iostream>

template <typename T>
class SorterVector {
private:
    std::vector<T>& vec;
public:
    SorterVector(std::vector<T>& v) : vec(v) {}

    void simple_sort() {
        std::sort(vec.begin(), vec.end());
    }

    void condition_sort(bool (*condition)(T, T)) {
        std::stable_sort(vec.begin(), vec.end(), condition);
    }

    void partial_sort(int num) {
        if (num <= vec.size()) {
            std::partial_sort(vec.begin(), vec.begin() + num, vec.end());
        }
    }

    static bool compareFunc(T a, T b) {
        return a > b;
    }
    void printer(){
        for(int i =0; i< vec.size(); i++){
        std::cout << vec[i] << "\t";
    }
    std::cout<< std::endl;
    }

    void sort_main() {
        simple_sort();
        printer();
        condition_sort(compareFunc);
        printer();
        int num = 5;
        partial_sort(num);
        printer();
    }
};
