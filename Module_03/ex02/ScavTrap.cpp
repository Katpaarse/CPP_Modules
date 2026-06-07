/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/05 22:32:29 by jul           #+#    #+#                 */
/*   Updated: 2026/06/06 00:03:28 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap:: ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << this->_name << " has spawned!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " has been destroyed.." << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode.." << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack because it died.." << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack because it has no energy.." << std::endl;
		return ;
	}
	this->_energyPoints = _energyPoints - 1;
	std::cout << "ScavTrap " << this->_name << " does critical damage to " << target << ", dealing " << this->_attackDamage << " points of critical damage.." << std::endl;
}
