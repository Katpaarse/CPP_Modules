/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 14:06:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 16:39:12 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << this->_type << " is being created.." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor for cat is called.." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << " *MEOW*" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
