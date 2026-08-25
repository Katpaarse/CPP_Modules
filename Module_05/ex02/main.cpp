/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/19 16:57:01 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	std::cout << "Creating Bureaucrats.." << std::endl;
	Bureaucrat employee("Employee", 50);
	Bureaucrat intern("Intern", 150);
	Bureaucrat manager("Manager", 5);
	std::cout << employee << std::endl;
	std::cout << intern << std::endl;
	std::cout << manager << std::endl;

	try
	{
		Bureaucrat invalidBuro("Invalid Bureaucrat", 151);
		std::cout << invalidBuro << std::endl;
	}
	catch (std::exception &e)
	{
        std::cout << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\nCreating forms.." << std::endl;
	Form internContract("Intern Contract", 5, 50);
	Form employeeContract("Employee Contract", 50, 3);
	std::cout << internContract << std::endl;
	std::cout << employeeContract << std::endl;
	
	std::cout << "\nCreating invalid Form" << std::endl;
	try
	{
		Form invalidContract("Executive Contract", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Form exception caught: " <<  e.what() << std::endl;
	}

	std::cout << "\nSigning contracts.." << std::endl;
    employee.signForm(internContract);
    manager.signForm(internContract);
    manager.signForm(employeeContract);

    std::cout << "\nFinal Forms State:" << std::endl;
    std::cout << internContract << std::endl;
    std::cout << employeeContract << std::endl;
    return (0);
}
