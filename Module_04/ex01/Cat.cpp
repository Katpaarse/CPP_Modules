/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 14:06:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/12 16:56:54 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << this->_type << " is being created.." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor is called.." << std::endl;
	this->_type = src._type;
	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
}

Cat& Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment copy operator is called.." << std::endl;
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

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor for cat is called, brain memory is freed.." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat says: *MEOW*" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
