/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/07 14:29:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/29 17:36:23 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << "Testing Interns.." << std::endl;
	Bureaucrat manager("Manager", 5);
	Intern intern;
	
	AForm* shrub = intern.makeForm("Shrubbery form", "home");
	if (shrub)
	{
		manager.signForm(*shrub);
		manager.executeForm(*shrub);
		delete shrub;
	}
	std::cout << std::endl;
	
	AForm* robot = intern.makeForm("Robotomy form", "Beep Boop");
	if (robot)
	{
		manager.signForm(*robot);
		manager.executeForm(*robot);
		delete robot;
	}
	std::cout << std::endl;

	AForm* presidential = intern.makeForm("Presidential form", "Jul");
	if (presidential)
	{
		manager.signForm(*presidential);
		manager.executeForm(*presidential);
		delete presidential;
	}
	std::cout << std::endl;

	AForm* bad = intern.makeForm("Bad form", "Tax evasion form");
	if (bad)
	{
		manager.signForm(*bad);
		manager.executeForm(*bad);
		delete bad;
	}
    return (0);
}
