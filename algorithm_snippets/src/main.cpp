#include "find.h"

int main() { 
    setlocale(LC_CTYPE,"Russian");
    std::vector<int> numbers = { 1, 2, 3, 4, 5, 6 };
     FinderVector<int> finder(numbers);
      finder.find_main();
       return 0; 
}