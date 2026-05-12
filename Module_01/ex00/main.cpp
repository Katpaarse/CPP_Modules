/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 14:17:29 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/12 13:51:45 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "Calling Random Chump: " << std::endl;
	randomChump("Stack_zombie");
	std::cout << "Calling New Zombie: " << std::endl;
	Zombie*	allocZombie = newZombie("Heap_Zombie");
	allocZombie->announce();
	std::cout << "Calling Heap_Zombie to go back to void: " << std::endl;
	delete(allocZombie);
	return (0); 
}
