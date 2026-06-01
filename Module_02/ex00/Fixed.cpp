/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/29 13:49:47 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/29 15:54:41 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedNum = 0;
	std::cout << "Default Constructor is called.." << std::endl;
}
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy Construtor is called.." << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy Assignment Operator is called.." << std::endl;
	if (this != &other)
		this->_fixedNum = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called.." << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function is called.." << std::endl;
	return (this->_fixedNum);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNum = raw;
}
