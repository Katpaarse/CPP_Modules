/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/02 12:23:00 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/05 23:48:53 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string	_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
		
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	setAttackDamage(unsigned int amount);
		int 	getAttackDamage(void) const;
};