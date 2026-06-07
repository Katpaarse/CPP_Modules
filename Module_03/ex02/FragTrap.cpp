/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/07 13:45:16 by jul           #+#    #+#                 */
/*   Updated: 2026/06/07 14:03:19 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << "has spawned!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << "has been destroyed.." << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is giving out high fives!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "FragTrap can't attack because it died.." << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "FragTrap has no energy to attack.." << std::endl;
		return ;
	}
	this->_energyPoints = this->_energyPoints -1;
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
}