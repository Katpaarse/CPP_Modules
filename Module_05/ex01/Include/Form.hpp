/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/09 16:12:48 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/09 17:24:17 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeSign;
		int const _gradeExec;
		
	public:
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const noexcept
			{
				return ("Form grade is too high! Max grade is 1");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const noexcept
			{
				return ("Form grade is too low. Min grade is 150");
			}
		};

		std::string const	getName() const;
		bool				isSigned() const;
		int					gradeToSign() const;
		int					gradeToExec() const;
		
		void				beSigned(Bureaucrat const &bureaucrat);
	
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &other);
		Form& operator=(Form const &other);
		~Form();
};