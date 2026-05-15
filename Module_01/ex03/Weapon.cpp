/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 14:22:01 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/15 16:31:59 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	
}

Weapon::~Weapon(void)
{
	std::cout << "Destructor is called.." << std::endl;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType(void)
{
	return (this->_type);
}
