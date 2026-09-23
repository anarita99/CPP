/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:06 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 12:19:21 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
: _name("AFORM"), _isSigned(false), _gradeToSign(15), _gradeToExe(2)
{
	
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExe)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) 
{
	if (gradeToSign < 1 || gradeToExe < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExe > 150)
		throw GradeTooLowException();
}

AForm::~AForm()
{
	
}

const char* AForm::GradeTooHighException::what() const _GLIBCXX_NOTHROW
{
	return "grade is too high";
}

const char* AForm::GradeTooLowException::what() const _GLIBCXX_NOTHROW
{
	return "grade is too low";
}

const char* AForm::NotAllowedException::what() const _GLIBCXX_NOTHROW
{
	return " is not allowed to execute the form ";
}

std::string AForm::getName() const
{
	return(this->_name);
}

bool AForm::getIsSigned() const
{
	return(this->_isSigned);
}

int AForm::getGradeToSign() const
{
	return(this->_gradeToSign);
}

int AForm::getGradeToExe() const
{
	return(this->_gradeToExe);
}

AForm&  AForm::operator=(const AForm &other)
{
	if(this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return(*this);
}

AForm::AForm(const AForm &other) 
	: _name(other._name) , _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe)
{
	
}

void AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

//é suposto assinar quando está true?

std::ostream &operator<<(std::ostream &out, const AForm &f)
{
	out << "Name: " << f.getName() << "\nGrade to sign: " << f.getGradeToSign() << "\nGrade to Exe: " 
		<< f.getGradeToExe() << "\nIs it signed: ";
	if (f.getIsSigned() == 0)
		out << "False";
	else
		out << "True";
	return (out);
}

void AForm::execute(Bureaucrat const &executor) const
{
	if(this->getIsSigned() == true && this->getGradeToExe() >= executor.getGrade())
		writeForm();
	else
		throw NotAllowedException();
}