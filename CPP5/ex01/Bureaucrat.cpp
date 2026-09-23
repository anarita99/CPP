/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:36 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 12:24:57 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(1)
{
	
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if(this != &other)
	{
		this->_grade = other._grade;
	}
	return(*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if(grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upGrade()
{
	if(this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::lowGrade()
{
	if(this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}


std::ostream &operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}

const char* Bureaucrat::GradeTooHighException::what() const _GLIBCXX_NOTHROW
{
	return "Grade too high exception";
}

const char* Bureaucrat::GradeTooLowException::what() const _GLIBCXX_NOTHROW
{
	return "Grade too low exception";
}

void Bureaucrat::signForm(Form &f)
{
	if(f.getIsSigned() == true)
	{
		std::cout << "The form is already signed." << std::endl;
		return;
	}
	try
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << this->getName() << " couldn't sign "<< f.getName() << " because " << e.what() << std::endl;
	}
}