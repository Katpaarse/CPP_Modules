/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jul <jul@student.42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/22 13:44:24 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/04 13:55:12 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	MyBook;
	std::string	cmd;
	
	while (1)
	{
		std::cout << "Enter: ADD, SEARCH, EXIT" << std::endl;
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
		{
			if (MyBook.addContact() == false)
				break ;
		}
		else if (cmd == "SEARCH")
		{
			if (MyBook.searchContact() == false)
				break ;
		}
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Try something else ;)" << std::endl;
	}
	return (0);
}
