/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doji <doji@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:30:32 by doji              #+#    #+#             */
/*   Updated: 2025/03/13 21:30:42 by doji             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	std::cout << "\033[33m" << "Test vector container\n"<< "\033[0m";
	std::vector<int> v;

	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	try
	{
		std::cout << *easyfind(v, 5) << std::endl;
		std::cout << *easyfind(v, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\033[33m" << "Test list container\n"<< "\033[0m";
	std::list<int> l;

	for (int i = 0; i < 20; i++)
	{
		l.push_back(i);
	}
	try
	{
		std::cout << *easyfind(l, 0) << std::endl;
		std::cout << *easyfind(l, 1000) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "\033[33m" << "Test deque container\n"<< "\033[0m";
	std::deque<int> d;

	for (int i = 0; i < 350; i++)
	{
		d.push_back(i);
	}

	try
	{
		std::cout << *easyfind(d, 349) << std::endl;
		std::cout << *easyfind(d, 560) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
