/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 15:06:43 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/21 16:16:00 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}
std::string	Contact::getFirstName(void)
{
	return (_firstName);
}

void	Contact::setLastName(std::string str)
{
	_lastName = str;
}

std::string	Contact::getLastName(void)
{
	return (_lastName);
}

void	Contact::setNickName(std::string str)
{
	_nickName = str;
}

std::string Contact::getNickName(void)
{
	return (_nickName);
}

void	Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

std::string Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}
