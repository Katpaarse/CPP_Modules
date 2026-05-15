/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 14:36:37 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/15 16:03:00 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon	&_weapon;
	public:
		HumanA(std::string name, Weapon &_weapon);
		~HumanA(void);
};

#endif