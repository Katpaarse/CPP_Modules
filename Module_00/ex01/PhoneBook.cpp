/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 13:32:33 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/04 13:57:20 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	PhoneBook::addContact(void)
{
	std::string input;
	int			target = _index % 8;

	input = "";
	while (input.empty())
	{
		std::cout << "Enter First Name: ";
		if (!std::getline(std::cin, input))
			return (false);
	}
	_contacts[target].setFirstName(input);
	input = "";
	while (input.empty())
	{
		std::cout << "Enter Last Name: ";
		if (!std::getline(std::cin, input))
			return (false);
	}
	_contacts[target].setLastName(input);
	input = "";
	while (input.empty())
	{
		std::cout << "Enter Nickname: ";
		if (!std::getline(std::cin, input))
			return (false);
	}
	_contacts[target].setNickName(input);
	input = "";
	while (input.empty())
	{
		std::cout << "Enter your Darkest Secret: ";
		if (!std::getline(std::cin, input))
			return (false);
	}
	_contacts[target].setDarkestSecret(input);
	input = "";
	while (input.empty())
	{
		std::cout << "Enter Phone Number: ";
		if (!std::getline(std::cin, input))
			return (false);
		if (!input.empty() && !_validPhoneNum(input))
		{
			std::cout << "Not a valid Phone Number" << std::endl;
			input = "";
		}
	}
	_contacts[target].setPhoneNumber(input);
	_index++;
	return (true);
}

bool	PhoneBook::searchContact(void)
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
	return (true);
}

bool	PhoneBook::_validPhoneNum(std::string str)
{
	int	i = 0;
	
	if (str[0] == '+')
	{
		if (str.length() == 1)
			return (false);
		i = 1;
	}
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	PhoneBook::_digitsOnly(std::string str)
{
	int	i = 0;
	
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	return (true);
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
	int			target;
	
	while (input.empty())
	{
		std::cout << "Enter index to see contact info: " << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (_digitsOnly(input))
			target = std::atoi(input.c_str()) -1;
		if (target >= 0 && target <= 7 && !_contacts[target].getFirstName().empty())
		{
			std::cout << "First Name: " << _contacts[target].getFirstName() << std::endl;
			std::cout << "Last Name: " << _contacts[target].getLastName() << std::endl;
			std::cout << "Nick Name: " << _contacts[target].getNickName() << std::endl;
			std::cout << "Darkest Secret: " << _contacts[target].getDarkestSecret() << std::endl;
			std::cout << "Phone Number: " << _contacts[target].getPhoneNumber() << std::endl << std::endl;
		}
		else
		{
			std::cout << "Index out of range, pls try again" << std::endl;
			return ;
		}
	}
}
