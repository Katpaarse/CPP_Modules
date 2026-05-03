/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:44:24 by jukerste          #+#    #+#             */
/*   Updated: 2026/05/03 12:16:37 by jul              ###   ########.fr       */
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
			MyBook.addContact();
		else if (cmd == "SEARCH")
			MyBook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Try something else ;)" << std::endl;
	}
	return (0);
}
