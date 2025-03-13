/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:24:46 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 19:45:03 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() 
{
    Data data;
    data.value = 42;
    data.ch = 'A';

    uintptr_t serialized = Serializer::serialize(&data);
    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "Original pointer: " << &data << "\n";
    std::cout << "Deserialized pointer: " << deserialized << "\n";
    std::cout << "Value: " << deserialized->value << "\n";
    std::cout << "Char: " << deserialized->ch << "\n";

    return 0;
}
