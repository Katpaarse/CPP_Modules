/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/18 17:05:59 by jukerste      #+#    #+#                 */
/*   Updated: 2026/05/18 17:12:36 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "invalid arguments given to the program" << std::endl;
		return (1);
	}
	return (0);
}
