/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 13:32:33 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/22 16:31:38 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	std::string input;
	int i = 0;
	int target = i % 8;

	input = "";
	while (input.empty())
	{
		std::cout << ("Enter First Name: ");
		if (!std::getline(std::cin, input))
			return ;
	}
	_contacts[target].setFirstName(input);
	input = "";
	while (input.empty())
	{
		std::cout << ("Enter Last Name: ");
		if (!std::getline(std::cin, input))
			return ;
	}
	_contacts[target].setLastName(input);
	
}

void	PhoneBook::searchContact(void)
{
	std::string name;
}