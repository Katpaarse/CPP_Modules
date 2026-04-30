/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 13:32:33 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/24 14:33:42 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	std::string input;
	static int 	i = 0;
	int			target = i % 8;

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
	input = "";
	while (input.empty())
	{
		std::cout << ("Enter Nickname: ");
		if (!std::getline(std::cin, input))
			return ;
	}
	_contacts[target].setNickName(input);
	input = "";
	while (input.empty())
	{
		std::cout << ("Enter your Darkest Secret: ");
		if (!std::getline(std::cin, input))
			return ;
	}
	_contacts[target].setDarkestSecret(input);
	i++;
}

void	PhoneBook::searchContact(void)
{
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	int	i = 0;
	while (i < 8)
	{
		if (!_contacts[i].getFirstName().empty())
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << _maxString(_contacts[i].getFirstName()) << "|";
			std::cout << std::setw(10) << _maxString(_contacts[i].getLastName()) << "|";
			std::cout << std::setw(10) << _maxString(_contacts[i].getNickName()) << "|" << std::endl;
		}
		i++;
	}
	_seeContactInfo();
}

bool		PhoneBook::_isOnlyDigits(std::string str)
{
	bool	ok = true;
	
}

std::string	PhoneBook::_maxString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::_seeContactInfo(void)
{
	std::string	input;
	
	std::cout << "Enter index to see contact info: ";
	if (!std::getline(std::cin, input) || input.empty())
		return ;
	if (!_isOnlyDigits(input) || PhoneBook::_index > 7)
		std::cout << ("pls give index 1 - 8");
}
