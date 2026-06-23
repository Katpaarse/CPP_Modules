/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 14:06:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:21:10 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << " is being created.." << std::endl;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Copy constructor for cat is called.." << std::endl;
	*this = src;
}

Cat& Cat:: operator=(const Cat &src)
{
	std::cout << "Assignment operator for cat is called.." << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor for cat is called.." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << " *MEOW*" << std::endl;
}
