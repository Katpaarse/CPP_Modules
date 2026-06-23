/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:37:06 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:54:40 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	_type = "Generic Animal";
	std::cout << _type << " is being created.." << std::endl;
}

Animal::Animal (const Animal &src)
{
	std::cout << "Copy constructor for Animal is called.." << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal &src)
{
	std::cout << "Assignment operator for Animal is called.." << std::endl;
	_type = src._type;
	return (*this);
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
