#include <numeric>
#include <vector>
#include <list>
#include <iostream>
#include <cmath> 
#include <algorithm>

class NumericAlg {
    private:
        std::vector<double> *ser;
        double *amean;
    public:
        NumericAlg() : ser(new std::vector<double>), amean(new double) {}
        ~NumericAlg() { delete ser; delete amean; }

        double accum_sum() { return std::accumulate(ser->begin(), ser->end(), 0.0); }
        double dot_product(const std::vector<double> &sec_ser);
        double disp(double acc, double seq);

        void printer(const std::list<double> &nums, const std::list<std::string> &names);
        void math_main();
};