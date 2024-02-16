#include "sort.h"
#include <iostream>

int main() {
    std::vector<int> numbers = {4, 2, 8, 5, 1, 6, 3, 7};

    SorterVector<int> sv(numbers);
    sv.sort_main();

    return 0;
}
