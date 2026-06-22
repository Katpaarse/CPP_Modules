/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:31 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 01:04:09 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "Wrong Animal";
	std::cout << this->_type << " is being created.." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor for wrong animal is called.." << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << " *does a weird and not fitting generic animal sound*" << std::endl;
}
