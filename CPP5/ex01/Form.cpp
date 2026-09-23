/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:06 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 12:24:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() 
: _name("FORM"), _isSigned(false), _gradeToSign(15), _gradeToExe(2)
{
	
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExe)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) 
{
	if (gradeToSign < 1 || gradeToExe < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExe > 150)
		throw GradeTooLowException();
}

Form::~Form()
{
	
}

const char* Form::GradeTooHighException::what() const _GLIBCXX_NOTHROW
{
	return "grade is too high";
}

const char* Form::GradeTooLowException::what() const _GLIBCXX_NOTHROW
{
	return "grade is too low";
}

std::string Form::getName() const
{
	return(this->_name);
}

bool Form::getIsSigned() const
{
	return(this->_isSigned);
}

int Form::getGradeToSign() const
{
	return(this->_gradeToSign);
}

int Form::getGradeToExe() const
{
	return(this->_gradeToExe);
}

Form&  Form::operator=(const Form &other)
{
	if(this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return(*this);
}

Form::Form(const Form &other) 
	: _name(other._name) , _isSigned(false), _gradeToSign(other._gradeToSign), _gradeToExe(other._gradeToExe)
{
	
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeToSign())
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}

//é suposto assinar quando está true?

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << "Name: " << f.getName() << "\nGrade to sign: " << f.getGradeToSign() << "\nGrade to Exe: " 
		<< f.getGradeToExe() << "\nIs it signed: ";
	if (f.getIsSigned() == 0)
		out << "False";
	else
		out << "True";
	return (out);
}