/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/25 12:25:44 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/26 14:48:57 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default target")
{
	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other) : AForm(other), _target(other._target)
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::cout << "* DRILLING NOISES *" << std::endl;
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized succesfully!" << std::endl;
	else
		std::cout << " has failed to robotomize on " << _target << "." << std::endl;
}
