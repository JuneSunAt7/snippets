# Example for algorithm and compile with g++ 

## [math algorithms](src/math.h)

It's code consists of base math algoritms in STL:
1. Accumulate: 

The accumulate function in C++ is a part of the <numeric> header in the Standard Template Library (STL). It is used to calculate the sum of a range of elements in a container or an array. The function takes two iterators denoting the range and an initial value for the sum. It iterates through the range and adds each element to the sum. The value of the sum is then returned.

Example usage:
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
Output: Sum: 15

2. Dot Product:

Dot product refers to the mathematical operation of taking the sum of the element-wise products of two vectors. In C++, the dot product can be calculated using the inner_product function from the <numeric> header in the STL. It takes two ranges of elements from two vectors, multiplies each corresponding pair of elements, and accumulates the products to obtain the dot product.

Example usage:
```cpp
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {4, 5, 6};

    int dotProduct = std::inner_product(vec1.begin(), vec1.end(), vec2.begin(), 0);
    std::cout << "Dot Product: " << dotProduct << std::endl;

    return 0;
}
```
Output: Dot Product: 32

3. Dispersion:

Dispersion (or variance) refers to a measure of how far each data point in a dataset is from the mean or average value. In C++, the dispersion can be calculated using functions provided by the <numeric> header in the STL. One way to calculate the dispersion is to find the mean of the data, then calculate the sum of the squared differences between each data point and the mean, and finally divide it by the number of data points.

Example usage:
```cpp
#include <iostream>
#include <numeric>
#include <vector>
#include <cmath>

int main() {
    std::vector<double> data = {1.0, 2.0, 3.0, 4.0, 5.0};

    double sum = std::accumulate(data.begin(), data.end(), 0.0);
    double mean = sum / data.size();
  
    double dispersion = 0.0;
    for (const auto& value : data) {
        dispersion += std::pow(value - mean, 2);
    }
    dispersion /= data.size();
  
    std::cout << "Dispersion: " << dispersion << std::endl;

    return 0;
}
```
Output: Dispersion: 2.5

## [find algorithms](src/find.h)

1. Find first occurrence: 
This is a process of finding the index or position of the first occurrence of a given element in a collection or array. In C++, this can be implemented using a loop to iterate through the array or collection and checking each element until the desired element is found. Once found, the index or position is returned.

For example, consider an array of integers {2, 4, 6, 8, 4, 3, 9}. To find the first occurrence of the number 4, the loop would iterate through the array and return the index 1 (assuming the indexing starts from 0).

2. Binary find:
Binary find, also known as binary search, is a search algorithm that works efficiently on sorted collections or arrays. It repeatedly divides the search space in half until the desired element is found or the search space is empty.

To perform a binary search in C++, the first step is to sort the collection or array. Then, the algorithm compares the target element with the middle element of the search space. If they match, the search is successful and the index is returned. If the target element is larger, the search continues on the right half of the array; if it is smaller, the search continues on the left half.

For example, consider a sorted array of integers {2, 3, 4, 6, 8, 9}. To perform a binary search to find the number 6, the algorithm would compare 6 with the middle element (4) and determine that it is larger. The search would then continue on the right half of the array, and the algorithm would eventually return the index 3.

3. Count occurrence:
Count occurrence refers to the process of counting the number of times a specific element appears in a collection or array. In C++, this can be implemented using a loop to iterate through the array and increment a counter variable each time the desired element is found.

For example, consider an array of integers {2, 4, 6, 8, 4, 3, 9}. To count the occurrence of the number 4, the loop would iterate through the array and increment the counter variable twice, resulting in a count of 2.

4. Count occurrence with condition:
Count occurrence with condition is similar to count occurrence, but it involves adding an additional condition that needs to be satisfied for the element to be counted. This condition can be defined using a logical expression or a function.

For example, consider an array of integers {2, 4, 6, 8, 4, 3, 9}. To count the occurrence of even numbers in the array, the loop would iterate through the array and increment the counter variable only when encountering an even number. The final count would depend on the number of even numbers found in the array.

5. Find with condition using STL (Standard Template Library):
The Standard Template Library (STL) in C++ provides a rich set of containers and algorithms for working with collections. The find() function from the STL is commonly used to find an element in a collection.

To find an element with a specific condition using the STL, you can use algorithms like std::find_if(). This function takes two iterators (begin and end) along with a predicate function or a lambda expression that defines the condition for the element being searched.

For example, consider a vector of strings {"apple", "banana", "pear", "orange"}. To find the first occurrence of a string that starts with the letter 'p', you can use std::find_if() with a lambda expression that checks the first character of each string.

```cpp
std::vector<std::string> fruits{"apple", "banana", "pear", "orange"};
auto it = std::find_if(fruits.begin(), fruits.end(), [](const std::string& fruit) {
    return fruit[0] == 'p';
});
```

After executing this code, the iterator 'it' will point to the element "pear" in the vector.

## [sort algorithms](src/sort.h)

In C++, the STL (Standard Template Library) provides a set of sorting algorithms that can be used to arrange elements in a specific order. Three such sorting algorithms are std::sort, std::stable_sort, and std::partial_sort.

1. std::sort:
The std::sort algorithm is used to sort a range of elements in ascending order. It rearranges the elements in the range [first, last) such that they are arranged in non-descending order. It uses an implementation of quicksort or introsort, which is a hybrid algorithm combining quicksort and heapsort.

Syntax:
```cpp
std::sort(first, last);
```

2. std::stable_sort:
The std::stable_sort algorithm is similar to std::sort, but it guarantees that the relative order of equal elements will be preserved. It is implemented using a stable sorting algorithm like merge sort, which maintains the order of equal elements as much as possible.

Syntax:
```cpp
std::stable_sort(first, last);
```

3. std::partial_sort:
The std::partial_sort algorithm is used to partially sort a range of elements. It rearranges the elements in the range [first, middle) in ascending order, while the order of the remaining elements in the range [middle, last) is unspecified. This algorithm finds the smallest k elements and arranges them in the specified range.

Syntax:
```cpp
std::partial_sort(first, middle, last);
```

All three algorithms are part of the STL and can be used by including the <algorithm> header file. They work on various types of containers like arrays, vectors, and lists, as well as user-defined data structures with appropriate comparison operators defined.