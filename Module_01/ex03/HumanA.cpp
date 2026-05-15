/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/15 16:03:15 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/15 16:10:11 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA(void)
{
	std::cout << "Destructor for HumanA is called.." << std::endl;
}
