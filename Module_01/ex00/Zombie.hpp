/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:17:42 by jukerste          #+#    #+#             */
/*   Updated: 2026/05/11 16:31:49 by jul              ###   ########.fr       */
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
		~Zombie(void);
		void	announce(void);
};

// Zombie* newZombie(std::string name);
// void 	randomChump(std::string name);

#endif