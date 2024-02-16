#include "math.h"

double NumericAlg::disp(double acc, double seq) { 
    seq -= *amean;
    return acc + seq * seq;
}
 
double NumericAlg::dot_product(std::vector <double> &sec_ser){
    return std::inner_product(ser->begin(), ser->end(), sec_ser.begin(), 0);
}
// https://purecodecpp.com/archives/3477

/*
Ниже приведены примеры использования некоторых алгоритмов из библиотеки C++ STL numeric:

1. Аккумуляция (accumulate): суммирует все элементы вектора.

```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
```

2. Частичные суммы (partial_sum): вычисляет последовательность частичных сумм для элементов вектора.

```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> partialSums(numbers.size());
    std::partial_sum(numbers.begin(), numbers.end(), partialSums.begin());
    std::cout << "Partial Sums: ";
    for (int num : partialSums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

3. Внутреннее произведение (inner_product): вычисляет скалярное произведение двух последовательностей.

```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2 = {5, 4, 3, 2, 1};
    int dotProduct = std::inner_product(numbers1.begin(), numbers1.end(), numbers2.begin(), 0);
    std::cout << "Dot Product: " << dotProduct << std::endl;
    return 0;
}
```

4. Частное произведение (partial_sum): вычисляет последовательность полученных произведений для элементов двух последовательностей.

```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2 = {2, 4, 6, 8, 10};
    std::vector<int> product(numbers1.size());
    std::transform(numbers1.begin(), numbers1.end(), numbers2.begin(), product.begin(), std::multiplies<int>());
    std::cout << "Product: ";
    for (int num : product) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

Это только некоторые примеры алгоритмов из библиотеки C++ STL numeric. Дополнительная информация о доступных алгоритмах и способах их использования может быть найдена в документации C++ или на сайтах, посвященных программированию на C++.
*/