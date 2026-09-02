/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/09/02 16:19:38 by jukerste      #+#    #+#                 */
/*   Updated: 2026/09/02 16:23:03 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: only 1 argument should be given to the program" << std::endl;	
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}