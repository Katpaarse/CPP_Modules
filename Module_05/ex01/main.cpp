/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/15 00:41:27 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	
	std::cout << "\nCreating valid forms.." << std::endl;
	Form internContract("Intern Contract", 5, 50);
	Form employeeContract("Employee Contract", 50, 3);
	std::cout << internContract << std::endl;
	std::cout << employeeContract << std::endl;
	
	std::cout << "\nCreating an invald Form" << std::endl;
	try
	{
		Form invalidContract("Executive Contract", 0, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "Form exception caught: " <<  e.what() << std::endl;
	}
	
	std::cout << "\nSigning contracts.." << std::endl;
    try
    {
        internContract.beSigned(employee);
    }
    catch (std::exception &e)
    {
        std::cout << employee.getName() << " couldn't sign " << internContract.getName() << " because: " << e.what() << std::endl;
    }
    try
    {
        internContract.beSigned(manager);
        std::cout << manager.getName() << " signed " << internContract.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
    {
        employeeContract.beSigned(manager);
        std::cout << manager.getName() << " successfully signed " << employeeContract.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "\nFinal Forms State:" << std::endl;
    std::cout << internContract << std::endl;
    std::cout << employeeContract << std::endl;
	return (0);
}
