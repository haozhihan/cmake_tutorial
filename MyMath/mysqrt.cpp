#include <iostream>
#include <cmath>
#include <boost/math/special_functions.hpp>

#include "include/mysqrt.h"

// a hack square root calculation using simple operations
double mysqrt(double num) {
    num = sqrt(num);
    std::cout << "use boost math: " << std::endl;
    return boost::math::round<double>(num);
}
