/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:24:39 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 18:37:52 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter
{
	private:
			ScalarConverter();
			
			ScalarConverter(const ScalarConverter& other);
			
			ScalarConverter& operator=(const ScalarConverter& other);

			static bool isChar(const std::string& literal);
			static bool isSpecialValue(const std::string& literal);
			static void printChar(double value);
			static void printInt(double value);
			static void printFloat(double value);
			static void printDouble(double value);
			static void handleChar(char c);
			static void handleSpecialValue(const std::string& literal);

	public:
			~ScalarConverter();
		
	    	static void convert(const std::string& literal);
};

#endif