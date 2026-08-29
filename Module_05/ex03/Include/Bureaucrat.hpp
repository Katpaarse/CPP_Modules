/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/07/17 14:06:09 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/25 14:59:05 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class AForm;

class Bureaucrat
{
	private:
		std::string const _name;
		int			_grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* what() const noexcept
			{
				return ("Bureaucrat grade is too high! Max grade is 1");
			}
		};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* what() const noexcept
			{
				return ("Bureaucrat grade is too low! Max grade is 150");
			}	
		};
		
		void incrementGrade();
		void decrementGrade();

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat& operator=(Bureaucrat const &other);
		~Bureaucrat();
		
		std::string const getName() const;
		int	getGrade() const;
		void signForm(AForm &form);

		void executeForm(AForm const &form);
};

std::ostream& operator<<(std::ostream& output, Bureaucrat const& toPrint);