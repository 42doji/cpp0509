/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:32:09 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 21:32:16 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main() 
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    std::cout << "min(a, b) = " << ::min(a, b) << "\n";
    std::cout << "max(a, b) = " << ::max(a, b) << "\n";

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << "\n";
    std::cout << "min(c, d) = " << ::min(c, d) << "\n";
    std::cout << "max(c, d) = " << ::max(c, d) << "\n";

    return 0;
}
