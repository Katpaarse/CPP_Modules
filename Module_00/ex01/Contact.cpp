/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/01 15:06:43 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/22 15:27:09 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}
std::string	Contact::getFirstname(void)
{
	return (_firstName);
}

void	Contact::setLastName(std::string str)
{
	_lastName = str;
}

std::string	Contact::getLastname(void)
{
	return (_lastName);
}
