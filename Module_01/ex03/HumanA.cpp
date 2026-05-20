/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 16:03:15 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/18 16:35:47 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA(void)
{
	std::cout << "Calling destructor for HumanA.." << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " Attacks with their " << this->_weapon.getType() << std::endl;
}
