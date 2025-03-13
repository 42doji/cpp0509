/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:32:26 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 21:32:43 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&)) 
{
    for (size_t i = 0; i < length; ++i) 
        func(array[i]);
}

template <typename T>
void iter(const T* array, size_t length, void (*func)(const T&)) 
{
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

#endif
