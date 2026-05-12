/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 14:17:42 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/12 15:40:25 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

#endif