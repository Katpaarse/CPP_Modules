/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/10 18:11:13 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "Creating Bureaucrats.." << std::endl;
	try
	{
		Bureaucrat employee("Employee", 50);
		Bureaucrat intern("Intern", 150);
		Bureaucrat manager("Manager", 5);
		std::cout << employee << std::endl;
		std::cout << intern << std::endl;
		std::cout << manager << std::endl;

		std::cout << "Creating forms.." << std::endl;
		Form contract()
	}
	catch (std::exception &e)
	{
        std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}
