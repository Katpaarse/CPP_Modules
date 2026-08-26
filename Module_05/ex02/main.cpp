/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/26 17:16:54 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "Testing ShrubberyCreationForm.." << std::endl;
	try
	{
		ShrubberyCreationForm shrubForm("home");
		Bureaucrat intern("Intern", 150);
		Bureaucrat manager("Manager", 1);

		std::cout << "Trying to execute unsigned form.." << std::endl;
		manager.executeForm(shrubForm);
		std::cout << "Intern tries to sign form.." << std::endl;
		intern.signForm(shrubForm);
		std::cout << "Executive tries to sign form.." << std::endl;
		manager.signForm(shrubForm);
		std::cout << "Intern tries to execute signed form.." << std::endl;
		intern.executeForm(shrubForm);
		std::cout << "Executive tries to execute signed form.." << std::endl;
		manager.executeForm(shrubForm);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "Testing RobotomyRequestForm.." << std::endl;
	try
	{
		RobotomyRequestForm robotForm("Drill");
		Bureaucrat intern("Intern", 150);
		Bureaucrat technician("Technician", 40);

		std::cout << "Trying to execute unsigned robotomy form.." << std::endl;
		technician.executeForm(robotForm);
		std::cout << "Intern trying to sign robot form.." << std::endl;
		intern.signForm(robotForm);
		std::cout << "Technician signs form.." << std::endl;
		technician.signForm(robotForm);
		std::cout << "Intern tries to execute form.." << std::endl;
		intern.executeForm(robotForm);

		std::srand(std::time(nullptr)); // sets time for randomness for Robotomy
		std::cout << "Technician executes robotomy form.." << std::endl;
		technician.executeForm(robotForm);
		std::cout << "Technician executes another round of robotomy form for randomness.." << std::endl;
		technician.executeForm(robotForm);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	try
	{
		PresidentialPardonForm pardonForm("Jul");
		Bureaucrat employee("Employee", 40);
		Bureaucrat president("President", 1);

		std::cout << "Employee tries to sign Presidential form.." << std::endl;
		employee.signForm(pardonForm);
		std::cout << "President tries to sign Presidential form.." << std::endl;
		president.signForm(pardonForm);
		std::cout << "Employee tries to execute signed presidential form.." << std::endl;
		employee.executeForm(pardonForm);
		std::cout << "President tries to execute signed presidential form.." << std::endl;
		president.executeForm(pardonForm);
	}
	catch(std::exception &e)
	{
		std::cout << "Exception caught: " <<  e.what() << std::endl;
	}
    return (0);
}
