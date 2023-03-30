#include "include/mysqrt.h"

#include <boost/math/special_functions.hpp>
#include <cmath>
#include <iostream>

// a hack square root calculation using simple operations
double mysqrt(double num)
{
    num = sqrt(num);
    std::cout << "use boost math: " << std::endl;
    return boost::math::round<double>(num);
}
