#include <numeric>
#include <vector>

class NumericAlg{
    private:
        std::vector<double> *ser;
        double *amean;
    public:
        NumericAlg() : ser(new std::vector<double>), amean(new double) {} ;

        double accum_sum(){return std::accumulate(ser->begin(), ser->end(), 0);};
        double dot_product(std::vector <double> &sec_ser);

        double disp(double acc, double seq);

        double mul(double acc, double seq){ return acc * seq;};
        double garm(double acc, double seq){ return acc + 1. / seq;};
        double sqr(double acc, double seq){ return acc + seq * seq;};


};


