#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cfloat>

ScalarConverter::~ScalarConverter() {}

void ScalarConverter::convert(const std::string& literal) 
{
    if (literal.length() == 1 && !std::isdigit(literal[0])) 
    {
        char c = literal[0];
        std::cout << "char: '" << c << "'\n";
        std::cout << "int: " << static_cast<int>(c) << "\n";
        std::cout << "float: " << static_cast<float>(c) << ".0f\n";
        std::cout << "double: " << static_cast<double>(c) << ".0\n";
        return;
    }
    char* end;
    double d = std::strtod(literal.c_str(), &end);

    std::string str = literal;
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan") 
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        if (str == "-inff" || str == "-inf") 
	{
            std::cout << "float: -inff\n";
            std::cout << "double: -inf\n";
        } else if (str == "+inff" || str == "+inf") 
	{
            std::cout << "float: +inff\n";
            std::cout << "double: +inf\n";
        } else 
	{
            std::cout << "float: nanf\n";
            std::cout << "double: nan\n";
        }
        return;
    }
    if (*end != '\0' && *end != 'f') 
    {
        std::cout << "Invalid input\n";
        return;
    }
    if (d < CHAR_MIN || d > CHAR_MAX || d != static_cast<int>(d)) 
    {
        std::cout << "char: impossible\n";
    } else if (!std::isprint(static_cast<int>(d))) 
    {
        std::cout << "char: Non displayable\n";
    } else 
    {
        std::cout << "char: '" << static_cast<char>(d) << "'\n";
    }
    if (d < INT_MIN || d > INT_MAX) 
    {
        std::cout << "int: impossible\n";
    } else 
    {
        std::cout << "int: " << static_cast<int>(d) << "\n";
    }
    std::cout << "float: " << static_cast<float>(d);
    if (static_cast<float>(d) == static_cast<int>(d)) 
    {
        std::cout << ".0";
    }
    std::cout << "f\n";
    std::cout << "double: " << d;
    if (d == static_cast<int>(d)) 
    {
        std::cout << ".0";
    }
    std::cout << "\n";
}
