/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/17 14:54:48 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/17 19:17:07 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 1;
	int b = 2;

	::swap(a, b);
	std::cout << "after swap: a = " << a << ", " << "b = " << b << std::endl;
	std::cout << ::min(a, b) << std::endl;
	std::cout << ::max(a, b) << std::endl;

	std::string str1 = "thing1";
	std::string str2 = "thing2";
	
	::swap(a, b);
	std::cout << "string1: " << str1 << " " << "string2: " << str2 << " " << std::endl;
	std::cout << ::min(str1, str2) << std::endl;
	std::cout << ::max(str1, str2) << std::endl;
	return (0);
}
