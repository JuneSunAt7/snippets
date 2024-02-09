#include "sequential.h"

#include <iostream>

int main(){
    SequentialBase<int> seq1;
    *seq1.add_elem() = 10;
    seq1.print_elems(); // Output: 10

    seq1.release();

    seq1.print_elems(); // Output: 
}