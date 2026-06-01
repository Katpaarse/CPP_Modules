/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/29 13:49:47 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/01 17:16:47 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedNum = 0;
	std::cout << "Default Constructor is called.." << std::endl;
}

Fixed::Fixed(const int intValue)
{
	std::cout << "Constructor to integer is called.." << std::endl;
	this->_fixedNum = intValue << _fractBits; 
}

Fixed::Fixed(const float floatValue)
{
	std::cout << "Constructor to float is called.." << std::endl;
	this->_fixedNum = roundf(floatValue * (1 << _fractBits));
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
		this->_fixedNum = other._fixedNum;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor is called.." << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedNum = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function is called.." << std::endl;
	return (this->_fixedNum);
}

float Fixed::toFloat(void)const
{
	return ((float)this->_fixedNum / (1 << _fractBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedNum >> _fractBits);
}


std::ostream &operator<< (std::ostream &o, const Fixed &i)
{
	o << i.toFloat();
	return (o);
}
