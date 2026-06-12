/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 13:36:43 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 14:19:19 by jukerste      ########   odam.nl         */
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
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};
