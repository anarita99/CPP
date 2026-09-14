/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:06 by adores            #+#    #+#             */
/*   Updated: 2026/09/14 15:54:04 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() 
: _name("FORM"), _isSigned(false),_gradeToSign(15), _gradeToExe(2)
{
	
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExe)
	: _name(name), _gradeToSign(gradeToSign), _gradeToExe(gradeToExe) 
{
	
}

Form::~Form()
{
	
}

const char* Form::GradeTooHighException::what() const _GLIBCXX_NOTHROW
{
	return "Grade too high exception";
}

const char* Form::GradeTooLowException::what() const _GLIBCXX_NOTHROW
{
	return "Grade too low exception";
}

std::string Form::getName()
{
	return(this->_name);
}

bool Form::getIsSigned()
{
	return(this->_isSigned);
}

int Form::getGradeToSign()
{
	return(this->_gradeToSign);
}

int Form::getGradeToExe()
{
	return(this->_gradeToExe);
}

