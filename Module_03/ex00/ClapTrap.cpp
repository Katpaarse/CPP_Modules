/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/02 13:18:30 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/02 14:48:20 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " is created.." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed.." << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << "can't attack because it died" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints - 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = _hitPoints - amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " point of damage! HP is now " << _hitPoints << "." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself because it already died!" << std::endl;
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is too exhausted to repair itself!" << std::endl;
		return ;
	}
	_energyPoints = _energyPoints - 1;
	_hitPoints = _hitPoints + amount;
	std::cout << "ClapTrap " << _name << " is repairing itself for " << amount << " HP. New HP is now " << _hitPoints << " HP." << std::endl; 
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	_attackDamage = amount;
}

int	ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}
