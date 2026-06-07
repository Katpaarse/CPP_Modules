/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/07 13:43:24 by jul           #+#    #+#                 */
/*   Updated: 2026/06/07 13:59:38 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		void	highFiveGuys(void);
		void	attack(const std::string &target);
};