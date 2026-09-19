/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/19 17:02:34 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/19 18:15:48 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int digits[] = {1, 2, 3, 4, 5};
	::iter(digits, 5, printElement<int>);
	std::cout << std::endl;
	::iter(digits, 5, increment<int>);
	std::cout << std::endl;
	
	std::string words[] = {"one", "two" , "three"};
	::iter(words, 3, printElement<std::string>);
	return (0);
}
