/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:37:06 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 16:38:33 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Generic Animal";
	std::cout << this->_type << " is being created.." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor for Animal is called.." << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << " *Makes generic animal sound* " << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
