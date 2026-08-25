/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/09 16:12:48 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/19 18:51:41 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
		class FormNotSignedException : public std::exception
		{
			public:
			virtual const char* what() const noexcept
			{
				return ("Form is not signed. Can not be executed");
			}
		};
		
		AForm();
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(AForm const &other);
		AForm& operator=(AForm const &other);
		~AForm();
		
		std::string const	getName() const;
		bool				getIsSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		
		void				beSigned(Bureaucrat const &bureaucrat);

		virtual void		execute(Bureaucrat const &executor) const = 0;
};

std::ostream& operator<<(std::ostream& output, AForm const& toPrint);