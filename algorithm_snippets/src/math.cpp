#include "math.h"

double NumericAlg::disp(double acc, double seq) { 
    seq -= *amean;
    return acc + seq * seq;
}
 
double NumericAlg::dot_product(std::vector <double> &sec_ser){
    return std::inner_product(ser->begin(), ser->end(), sec_ser.begin(), 0);
}
