/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/06/12 15:23:18 by jukerste      #+#    #+#                 */
/*   Updated: 2026/06/23 00:54:37 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor to create brain is called.." << std::endl;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor is called.." << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain &src)
{
	std::cout << "Brain assignment operator is called.." << std::endl;
	if (this != &src)
	{
		int i = 0;
		while (i < 100)
		{
			_ideas[i] = src._ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor to delete brain is called.." << std::endl;
}
