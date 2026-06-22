/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:03:22 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 00:52:58 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "Wrong Cat";
	std::cout << _type << " is being created.." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor for wrong cat is called.." << std::endl; 
}

void	WrongCat::makeSound()const
{
	std::cout << "*BZZZZ*" << std::endl;
}
