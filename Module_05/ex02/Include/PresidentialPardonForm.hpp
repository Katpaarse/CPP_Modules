/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/25 12:34:58 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/26 16:23:14 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string const _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &other);
		PresidentialPardonForm& operator=(PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		virtual void execute(Bureaucrat const &executor) const;
};