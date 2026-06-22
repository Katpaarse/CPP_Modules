/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:07 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 00:39:29 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << " is being created.." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor for dog is called.." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << " *WOOF WOOF*" << std::endl;
}

std::string Dog::getType() const
{
	return (_type);
}
