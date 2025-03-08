#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void) 
{
    std::srand(static_cast<unsigned>(std::time(0)));
    int choice = std::rand() % 3;
    if (choice == 0) return new A();
    if (choice == 1) return new B();
    return new C();
}

void identify(Base* p) 
{
    if (dynamic_cast<A*>(p)) 
    {
        std::cout << "A\n";
    } else if (dynamic_cast<B*>(p)) 
    {
        std::cout << "B\n";
    } else if (dynamic_cast<C*>(p)) 
    {
        std::cout << "C\n";
    }
}

void identify(Base& p) 
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A\n";
        return;
    } catch (...) {}
    try 
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B\n";
        return;
    } catch (...) {}
    try 
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C\n";
        return;
    } catch (...) {}
}
