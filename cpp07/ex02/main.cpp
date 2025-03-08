#include "Array.hpp"
#include <iostream>

int main() 
{
    try 
    {
        Array<int> empty;
        std::cout << "Empty array size: " << empty.size() << "\n";

        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i;
        }
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << intArray[i] << " ";
        }
        std::cout << "\n";

        Array<int> copyArray(intArray);
        copyArray[0] = 42;
        std::cout << "Original: " << intArray[0] << ", Copy: " << copyArray[0] << "\n";

        Array<std::string> strArray(3);
        strArray[0] = "Hello";
        strArray[1] = "World";
        strArray[2] = "!";
        for (unsigned int i = 0; i < strArray.size(); ++i) 
	{
            std::cout << strArray[i] << " ";
        }
        std::cout << "\n";
        std::cout << intArray[5] << "\n";
    } 
    catch (const std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << "\n";
    }
    return 0;
}
