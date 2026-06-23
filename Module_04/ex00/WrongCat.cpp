/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:22 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:32:32 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Wrong Cat";
	std::cout << _type << " is being created.." << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "Copy constructor for WrongCat is called.." << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	std::cout << "Assignment operator for WrongCat is called.." << std::endl;
	if (this != &src)
		_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for wrong cat is called.." << std::endl; 
}

void	WrongCat::makeSound()const
{
	std::cout << "*BZZZZ*" << std::endl;
}
