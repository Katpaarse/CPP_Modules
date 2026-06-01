/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/29 13:33:37 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/29 14:07:21 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int				  _fixedNum;
		static int	const _fractBits = 8;
	public:
		Fixed(); //constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed &operator=(const Fixed &other); //copy assignment operator
		~Fixed(); //destructor
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
