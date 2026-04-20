/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jul <jul@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 14:59:29 by jukerste          #+#    #+#             */
/*   Updated: 2026/04/21 00:24:17 by jul              ###   ########.fr       */
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
		if (cmd == "ADD")
			MyBook.addContact();
		else if (cmd == "SEARCH")
			MyBook.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "Try something else ;)";
	}
	return(0);
}