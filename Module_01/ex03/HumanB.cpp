/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/18 15:10:13 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/08 19:15:45 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	
}
HumanB::~HumanB()
{
	std::cout << "Calling destructor for HumanB.." << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon; 
}

void	HumanB::attack(void)
{
	if (this->_weapon != NULL)
		std::cout << this->_name << "Attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << "Has not weapon to use to attack" << std::endl;
}
