/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:07 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/12 16:45:51 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor for dog has been called. A brain is allocated.." << std::endl;
}
Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor is called.." << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
}

Dog& Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment copy operator is called.." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain();
		*(this->_brain) = *(src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor for dog is called, brain memory has been freed.." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says: *WOOF WOOF*" << std::endl;
}

std::string Dog::getType() const
{
	return (this->_type);
}
