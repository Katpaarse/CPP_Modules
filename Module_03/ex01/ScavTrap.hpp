/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Scavtrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/05 22:32:56 by jul           #+#    #+#                 */
/*   Updated: 2026/06/05 23:33:41 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		
		void	guardGate();
		void	attack(const std::string &target);
};