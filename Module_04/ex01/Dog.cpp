/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:07 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 01:03:39 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Default constructor for dog has been called. A brain is allocated.." << std::endl;
}
Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor is called.." << std::endl;
	_type = src._type;
	_brain = new Brain();
	*(_brain) = *(src._brain);
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment copy operator is called.." << std::endl;
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

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor for dog is called, brain memory has been freed.." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says: *WOOF WOOF*" << std::endl;
}

std::string Dog::getType() const
{
	return (_type);
}
