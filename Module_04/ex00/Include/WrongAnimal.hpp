/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/08 15:07:52 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/10 16:01:38 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class WrongAnimal : public Animal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};
