/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:22 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 16:39:27 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "Wrong Cat";
	std::cout << this->_type << " is being created.." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for wrong cat is called.." << std::endl; 
}

void	WrongCat::makeSound()const
{
	std::cout << "*BZZZZ*" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->_type);
}
