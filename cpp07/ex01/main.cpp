#include "iter.hpp"
#include <iostream>

template <typename T>
void printElement(const T& element) {
    std::cout << element << "\n";
}

template <typename T>
void incrementElement(T& element) {
    ++element;
}

int main() {
    int intArray[] = {0, 1, 2, 3, 4};
    iter(intArray, 5, printElement<int>);
    iter(intArray, 5, incrementElement<int>);
    iter(intArray, 5, printElement<int>);

    std::string strArray[] = {"hello", "world"};
    iter(strArray, 2, printElement<std::string>);

    return 0;
}
