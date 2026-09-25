/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/22 15:50:54 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/25 16:50:14 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::cout << "Testing with std::vector" << std::endl;
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);

	std::cout << "Looking for values in vector.." << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 30);
		std::cout << "Value found: " << *it << std::endl;
		std::cout << "Looking for non existing value: " << std::endl;
		easyfind(vec, 100);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Looking for values with list.." << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(25);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 15);
		std::cout << "Value found in list: " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
