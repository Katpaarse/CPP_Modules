/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/02 13:43:21 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/07 14:20:30 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "Creating robots.." << std::endl;
	ClapTrap clappy ("Clappy");
	FragTrap enemy ("Fraggy");
	
	std::cout << "\nRound 1: basic attacks.." << std::endl;
	clappy.attack("Fraggy");
	enemy.takeDamage(clappy.getAttackDamage());
	
	std::cout << "\nRound 2: repairing and energy points.." << std::endl;
	clappy.beRepaired(5);
	
	std::cout << "\nRound 3: taking damage.." << std::endl;
	enemy.setAttackDamage(enemy.getAttackDamage());
	enemy.attack("Clappy");
	clappy.takeDamage(enemy.getAttackDamage());

	std::cout <<"\nRound 4: testing dead state.." << std::endl;
	clappy.attack("Fraggy");
	clappy.beRepaired(5);
	
	std::cout <<"\nRound 5: FragTrap special ability.." << std::endl;
	enemy.highFiveGuys();
	
	std::cout <<"\nRound 6: destroying robots.." <<std::endl;
	return (0);
}
