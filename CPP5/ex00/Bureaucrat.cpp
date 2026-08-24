/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:36 by adores            #+#    #+#             */
/*   Updated: 2026/08/24 14:52:12 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bureaucrat"), _grade(1)
{
	
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat::Bureaucrat(int grade): _name("Bureau")
{
	if (grade > 150)
		throw -1;
	else if(grade < 1)
		throw -2;
	else
		_grade = grade;
}

std::string Bureaucrat::getName()
{
	return (Bureaucrat::_name);
}

int Bureaucrat::getGrade()
{
	return (Bureaucrat::_grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}
//<name>, bureaucrat grade <grade>