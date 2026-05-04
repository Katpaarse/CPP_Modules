/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 14:17:42 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/04 15:00:49 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <memory>

class Zombie
{
	private:
	void	announce(void);
	
	public:
	Zombie* newZombie(std::string name);
	void 	randomChump(std::string name);
	
};

#endif