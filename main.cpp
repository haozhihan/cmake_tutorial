// A simple demo that computes the square root of a number
#include <iostream>
#include "mysqrt.h"

int main()
{
    double inputValue;
    std::cout << "Please enter a number: ";
    std::cin >> inputValue;

    const double outputValue = mysqrt(inputValue);

    std::cout << "The square root of " << inputValue 
            << " is " << outputValue << std::endl;
    return 0;
}
