#include "math.h"

double NumericAlg::disp(double acc, double seq) { 
    seq -= *amean;
    return acc + seq * seq;
}

double NumericAlg::dot_product(const std::vector<double> &sec_ser) {
    return std::inner_product(ser->begin(), ser->end(), sec_ser.begin(), 0.0);
}

void NumericAlg::printer(const std::list<double> &nums, const std::list<std::string> &names) {
    try {
        if (nums.size() != names.size()) {
            throw std::length_error("no matches lists");
        }
    }
    catch (const std::length_error& e) {
        std::cout << e.what() << std::endl;
        return;
    }
    auto num_it = nums.begin();
    for (const auto &name : names) {
        std::cout << name << ": " << *num_it << std::endl;
        ++num_it;
    }
    std::cout << std::endl;
}

void NumericAlg::math_main() {
    std::vector<double> my_ser{ 3.14, 2.97, 0.287, 11, 98.78 };
    std::vector<double> my_second_vec{ 2.98, 28.89, 0.11, 821.9, 18 };

    int n = my_ser.size();

    auto b = my_ser.begin(), e = my_ser.end();
    double my_amean { std::accumulate(b, e, 0.0) / n };

    ser = &my_ser;
    amean = &my_amean;

    std::list<double> lst;
    std::list<std::string> names{ "accumulate", "dot", "dispersion" };

    lst.push_back(accum_sum());
    lst.push_back(dot_product(my_second_vec));
    
    double my_disp = std::accumulate(b, e, 0.0, [this](double acc, double seq) { return disp(acc, seq); });
    lst.push_back(my_disp);

    printer(lst, names);
}