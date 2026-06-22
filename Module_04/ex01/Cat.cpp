/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 14:06:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 01:02:43 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " is being created.." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor is called.." << std::endl;
	_type = src._type;
	_brain = new Brain();
	*(_brain) = *(src._brain);
}

Cat& Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment copy operator is called.." << std::endl;
	if (this != &src)
	{
		_type = src._type;
		if (_brain)
			delete _brain;
		_brain = new Brain();
		*(_brain) = *(src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor for cat is called, brain memory is freed.." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat says: *MEOW*" << std::endl;
}

std::string	Cat::getType() const
{
	return (_type);
}
