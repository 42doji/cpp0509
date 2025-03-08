#include "ScalarConverter.hpp"
#include <iostream>

int main() 
{
    ScalarConverter::convert("0");
    std::cout << "\n";
    ScalarConverter::convert("nan");
    std::cout << "\n";
    ScalarConverter::convert("42.0f");
    std::cout << "\n";
    ScalarConverter::convert("a");
    std::cout << "\n";
    ScalarConverter::convert("321.99f");
    std::cout << "\n";
    return 0;
}
