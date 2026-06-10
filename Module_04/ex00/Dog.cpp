/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:07 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 16:38:51 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << this->_type << " is being created.." << std::endl;
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
	return (this->_type);
}
