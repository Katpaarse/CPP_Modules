/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 14:06:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 00:39:13 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << " is being created.." << std::endl;
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
	return (_type);
}
