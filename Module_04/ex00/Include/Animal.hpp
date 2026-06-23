/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:36:43 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 16:42:31 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &src);
		Animal& operator=(const Animal &src);
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};
