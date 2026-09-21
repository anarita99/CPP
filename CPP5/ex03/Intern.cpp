/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:55:33 by adores            #+#    #+#             */
/*   Updated: 2026/09/21 12:41:46 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	
}

Intern::~Intern()
{
	
}

Intern::Intern(const Intern &other)
{
	(void)other;
}
		
Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return(*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	std::string formNames[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	while(i < 3)
	{
		if(name == formNames[i])
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return new RobotomyRequestForm(target);
		case 1:
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return new PresidentialPardonForm(target);
		case 2:
			std::cout << "Intern creates " << formNames[i] << std::endl;
			return new ShrubberyCreationForm(target);
		default:
			std::cerr << "No form found with that name." << std::endl;
			return NULL;
	}	
}