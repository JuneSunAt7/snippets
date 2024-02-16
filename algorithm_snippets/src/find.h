#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
class FinderVector{
    private:
        std::vector <T>& vec;

    public:
        FinderVector(std::vector<T>& v) : vec(v) {}
        ~FinderVector(){};

        auto find_first_occurrence(T &elem){return std::find(vec.begin(), vec.end(), elem);}
        bool binary_find(T &elem){ return std::binary_search(vec.begin(), vec.end(), elem); }
        int count_occurrence(T &elem){ return std::count(vec.begin(), vec.end(), elem); }
        int count_occurrence_condition(bool (*condition)(const T&)){ return std::count_if(vec.begin(), vec.end(), condition); }
        auto find_condition(bool(*condition)(T)){return std::find_if(vec.begin(), vec.end(), condition); }

        void find_main() {
            
            int num;
            std::cout << "num for search: ";
            std::cin >> num;
            
            if (binary_find(num)) {
                std::cout << "find!." << std::endl;
            }
            else {
                std::cout << "no results(" << std::endl;
            }

            int count = count_occurrence(num);
            std::cout << "count of occurrence: " << count << std::endl;

            auto iter = find_first_occurrence(num);
            if (iter != vec.end()) {
                std::cout << "first occurrence: " << *iter << std::endl;
            }

            auto iter2 = find_condition([](int x) {
                return x > 10;
            });
            if (iter2 != vec.end()) {
                std::cout << "first elem for condition: " << *iter2 << std::endl;
            }

            int count2 = count_occurrence_condition([](const int& x) {
                return x % 2 == 0;
            });
            std::cout << "count of elems for condition: " << count2 << std::endl;
        }
};
