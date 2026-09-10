/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:36 by adores            #+#    #+#             */
/*   Updated: 2026/09/10 14:23:25 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(1)
{
	
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
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

std::string Bureaucrat::getName()
{
	return (this->_name);
}

int Bureaucrat::getGrade()
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
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
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