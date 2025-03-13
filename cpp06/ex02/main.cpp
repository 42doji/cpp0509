/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:25:02 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 18:57:54 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    std::srand(static_cast<unsigned>(std::time(0)));
    std::cout << "Testing identify(Base* p):" << std::endl;
    Base* obj1 = generate();
    identify(obj1);

    Base* obj2 = generate();
    identify(obj2);

    Base* obj3 = generate();
    identify(obj3);

    delete obj1;
    delete obj2;
    delete obj3;

    std::cout << "\nTesting identify(Base* p) with NULL:" << std::endl;
    Base* nullPtr = NULL;
    identify(nullPtr);

    std::cout << "\nTesting identify(Base& p):" << std::endl;
    A a;
    B b;
    C c;

    identify(a); 
    identify(b); 
    identify(c); 

    return 0;
}
