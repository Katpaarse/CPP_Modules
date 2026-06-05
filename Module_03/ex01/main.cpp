/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/02 13:43:21 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/06 00:06:13 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "Creating robots.." << std::endl;
	ClapTrap clappy ("Clappy");
	ScavTrap enemy ("Bandit");
	
	std::cout << "\nRound 1: basic attacks.." << std::endl;
	clappy.attack("Bandit");
	enemy.takeDamage(clappy.getAttackDamage());
	
	std::cout << "\nRound 2: repairing and energy points.." << std::endl;
	clappy.beRepaired(5);
	
	std::cout << "\nRound 3: taking damage.." << std::endl;
	enemy.setAttackDamage(enemy.getAttackDamage());
	enemy.attack("Clappy");
	clappy.takeDamage(enemy.getAttackDamage());

	std::cout <<"\nRound 4: testing dead state.." << std::endl;
	clappy.attack("Bandit");
	clappy.beRepaired(5);
	
	std::cout <<"\nRound 5: ScavTrap special ability.." << std::endl;
	enemy.guardGate();
	
	std::cout <<"\nRound 6: destroying robots.." <<std::endl;
	return (0);
}
