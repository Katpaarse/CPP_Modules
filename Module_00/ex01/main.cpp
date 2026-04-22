/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/22 13:44:24 by jukerste      #+#    #+#                 */
/*   Updated: 2026/04/22 17:16:23 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	MyBook;
	std::string	cmd;
	
	while (1)
	{
		std::cout << "Enter: ADD, SEARCH, EXIT ";
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
			MyBook.addContact();
		else if (cmd == "SEARCH")
			MyBook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Try something else ;)\n";
	}
	return(0);
}