/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:17:42 by jukerste          #+#    #+#             */
/*   Updated: 2026/05/04 18:29:43 by jul              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <memory>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie* newZombie(std::string name);
void 	randomChump(std::string name);

#endif