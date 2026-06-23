/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:07 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:39:38 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << " is being created.." << std::endl;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Copy constructor for dog is called.." << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Assignment operator for Dog is called.." << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor for dog is called.." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << " *WOOF WOOF*" << std::endl;
}
