/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/29 14:59:51 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/29 17:00:09 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{

}

Intern::Intern(Intern const &other)
{
	(void)other;
}

Intern& Intern::operator=(Intern const &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	
}

static AForm* makeShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm* makeRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm* makePresidential(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target) const
{
	struct makeForms
	{
		std::string name;
		AForm* (*create)(std::string const &target);
	};
	makeForms const forms[3] = 
	{
		{"Shrubbery form", &makeShrubbery},
		{"Robotomy form", &makeRobotomy},
		{"Presidential form", &makePresidential},
	};
	for (int i = 0; i < 3; ++i)
	{
		if (forms[i].name == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (forms[i].create(target));
		}
	}
	std::cout << "Error: unkown form name. Intern could not create form" << formName << std::endl;
	return (nullptr);
}
