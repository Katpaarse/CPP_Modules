/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/09 16:13:30 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/10 17:28:57 by jukerste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{
	
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : _name(other._name), _isSigned(other._isSigned), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{

}

Form& Form:: operator=(Form const &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

Form::~Form()
{
	
}

std::string const Form::getName() const
{
	return (_name);
}

bool Form::getIsSigned() const
{
	return (_isSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeSign);
}

int Form::getGradeToExec() const
{
	return (_gradeExec);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

std::ostream& operator<<(std::ostream& output, Form const& toPrint)
{
	output << "Form " << toPrint.getName() << ", signed: ";
	if (toPrint.getIsSigned())
		output << "yes";
	else
		output << "no";
	output << ", grade required to sign: " << toPrint.getGradeToSign() << ", grade required to execute: " << toPrint.getGradeToExec() << ".";
	return (output);
}
