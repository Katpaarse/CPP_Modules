/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 14:36:37 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/18 16:30:16 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon &_weapon);
		~HumanA(void);
		void	attack(void);
};
