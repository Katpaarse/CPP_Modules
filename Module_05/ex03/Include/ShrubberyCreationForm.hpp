/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/25 12:35:03 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/25 13:47:26 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string const _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();

		virtual void execute(Bureaucrat const &executor) const;
};