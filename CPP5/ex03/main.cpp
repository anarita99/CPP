/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:23:47 by adores            #+#    #+#             */
/*   Updated: 2026/09/21 12:46:29 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
 
int main()
{
	srand(time(NULL));
 
	std::cout << "----- Test 1: Intern creates a ShrubberyCreationForm -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* form = someRandomIntern.makeForm("shrubbery creation", "home");
		if (form)
		{
			std::cout << *form << std::endl;
			delete form;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 2: Intern creates a RobotomyRequestForm -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* form = someRandomIntern.makeForm("robotomy request", "Bender");
		if (form)
		{
			std::cout << *form << std::endl;
			delete form;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 3: Intern creates a PresidentialPardonForm -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* form = someRandomIntern.makeForm("presidential pardon", "Fry");
		if (form)
		{
			std::cout << *form << std::endl;
			delete form;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 4: Intern given an unknown form name -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* form = someRandomIntern.makeForm("form 28B", "nowhere");
		if (form)
		{
			std::cout << *form << std::endl;
			delete form;
		}
		else
			std::cout << "form is NULL, as expected." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 5: full flow - intern creates, bureaucrat signs and executes -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		Bureaucrat boss("Boss", 1);
 
		AForm* rrf = someRandomIntern.makeForm("robotomy request", "Zoidberg");
		if (rrf)
		{
			boss.signForm(*rrf);
			boss.executeForm(*rrf);
			delete rrf;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 6: create several forms in a loop -----" << std::endl;
	try
	{
		Intern someRandomIntern;
		std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
 
		for (int i = 0; i < 3; i++)
		{
			AForm* form = someRandomIntern.makeForm(names[i], "Amy");
			if (form)
			{
				std::cout << *form << std::endl;
				delete form;
			}
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	return 0;
}