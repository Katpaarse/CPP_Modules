/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/02 13:43:21 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/02 14:49:47 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "Creating robots.." << std::endl;
	ClapTrap clappy ("Clappy");
	ClapTrap enemy ("Bandit");
	
	std::cout << "\nRound 1: basic attacks.." << std::endl;
	clappy.attack("Bandit");
	enemy.takeDamage(0);
	
	std::cout << "\nRound 2: repairing and energy points.." << std::endl;
	clappy.beRepaired(5);
	
	std::cout << "\nRound 3: taking damage.." << std::endl;
	enemy.setAttackDamage(15);
	enemy.attack("Clappy");
	clappy.takeDamage(enemy.getAttackDamage());

	std::cout <<"\nRound 4: testing dead state.." << std::endl;
	clappy.attack("Bandit");
	clappy.beRepaired(5);
	
	std::cout <<"\nRound 5: destroying robots.." <<std::endl;
	return (0);
}
