#include "include/mysqrt.h"

#ifdef USE_C99
#include <boost/math/special_functions.hpp>
#endif
#include <cmath>
#include <iostream>

// a hack square root calculation using simple operations
double mysqrt(double num)
{
    num = sqrt(num);
#ifdef USE_C99
    std::cout << "use boost math round function: " << std::endl;
    num = boost::math::round<double>(num);
#endif
    return num;
}
