/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/04 14:17:29 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/15 13:29:36 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	std::string	name = "Zombie from the horde";
	std::cout << "Creating a horde of " << N << " zombies" << std::endl;
	Zombie * horde = zombieHorde(N, name);
	int	i = 0;
	while (i < N)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
		i++;
	}
	std::cout << "Sending zombies back to the void" << std::endl;
	delete [] horde;
	return (0); 
}
