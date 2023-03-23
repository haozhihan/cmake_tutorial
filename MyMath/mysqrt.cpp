#include <iostream>
#include <gsl/gsl_math.h>

#include "mysqrt.h"

// a hack square root calculation using simple operations
double mysqrt(double num) {
    std::cout << "use boost math: " << std::endl;
    return gsl_sqrt(num);
}
