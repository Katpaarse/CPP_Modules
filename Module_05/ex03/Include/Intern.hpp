/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/29 14:45:27 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/29 14:59:44 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &other);
		Intern& operator=(Intern const &other);
		~Intern();
		
		AForm* makeForm(std::string const &formName, std::string const &target) const;	
};
