/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:07:52 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 17:26:34 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal (const WrongAnimal &src);
		WrongAnimal& operator=(const WrongAnimal &src);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};
