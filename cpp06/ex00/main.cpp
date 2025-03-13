/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:24:25 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 18:24:27 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
