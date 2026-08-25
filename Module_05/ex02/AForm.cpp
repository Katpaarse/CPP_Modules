/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jukerste <jukerste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/09 16:13:30 by jukerste      #+#    #+#                 */
/*   Updated: 2026/08/19 17:15:32 by jul           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _isSigned(false), _gradeSign(150), _gradeExec(150)
{

}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw AForm::GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{

}

AForm& AForm:: operator=(AForm const &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

AForm::~AForm()
{
	
}

std::string const AForm::getName() const
{
	return (_name);
}

bool AForm::getIsSigned() const
{
	return (_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeSign);
}

int AForm::getGradeToExec() const
{
	return (_gradeExec);
}

void AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

std::ostream& operator<<(std::ostream& output, AForm const& toPrint)
{
	output << "Form " << toPrint.getName() << ", signed: ";
	if (toPrint.getIsSigned())
		output << "yes";
	else
		output << "no";
	output << ", grade required to sign: " << toPrint.getGradeToSign() << ", grade required to execute: " << toPrint.getGradeToExec() << ".";
	return (output);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > _gradeExec)
		throw AForm::GradeTooLowException();
}
