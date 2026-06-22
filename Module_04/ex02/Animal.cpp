/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:37:06 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 01:05:02 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Generic Animal";
	std::cout << _type << " is being created.." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal is called.." << std::endl;
}

void	Animal::makeSound() const
{
	
}

std::string	Animal::getType() const
{
	return (_type);
}
