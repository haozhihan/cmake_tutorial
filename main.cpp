// A simple demo that computes the square root of a number
#include <cmath>
#include <iostream>

// 如何编译？
// g++ main.cpp

int main()
{
    double inputValue;
    std::cout << "Please enter a number: ";
    std::cin >> inputValue;

    const double outputValue = sqrt(inputValue);

    std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;

    return 0;
}
