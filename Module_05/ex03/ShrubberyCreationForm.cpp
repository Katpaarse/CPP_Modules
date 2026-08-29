/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/25 12:25:47 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/25 15:05:30 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default target")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	
	if (!file.is_open())
	{
		std::cerr << "Could not open file" << filename << std::endl;
		return ;
	}
	file << "          # #### ####\n";
	file << "        ### \\/#|### |/####\n";
	file << "       ##\\/#/ \\||/##/_/##/_#\n";
	file << "     ###  \\/###|/ \\/ # ###\n";
	file << "   ##_\\_#\\_\\## | #/###_/_####\n";
	file << "  ## #### # \\ #| /  #### ##/##\n";
	file << "   __#_--###`  |{,###---###-~\n";
	file << "             \\ }{\n";
	file << "              }}{\n";
	file << "              }}{\n";
	file << "              {{}\n";
	file.close();
}
