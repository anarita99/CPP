/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:23:47 by adores            #+#    #+#             */
/*   Updated: 2026/09/17 16:20:14 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
 
int main()
{
	std::cout << "----- Test 1: construct concrete forms -----" << std::endl;
	try
	{
		// ShrubberyCreationForm shrub("home");
		// RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Fry");
		// std::cout << shrub << std::endl;
		// std::cout << robot << std::endl;
		std::cout << pardon << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	/*
	std::cout << "\n----- Test 2: execute without signing -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("garden");
		boss.executeForm(shrub);
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	/*
	std::cout << "\n----- Test 3: sign then execute (ShrubberyCreationForm) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("yard");
		boss.signForm(shrub);
		boss.executeForm(shrub);
		std::cout << "Check the file 'yard_shrubbery' in the working directory." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	/*
	std::cout << "\n----- Test 4: sign then execute (RobotomyRequestForm) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robot("Bender");
		boss.signForm(robot);
		boss.executeForm(robot);
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	std::cout << "\n----- Test 5: sign then execute (PresidentialPardonForm) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Fry");
		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	/*
	std::cout << "\n----- Test 6: signed but grade too low to execute -----" << std::endl;
	try
	{
		Bureaucrat signer("Signer", 1);
		Bureaucrat lowExecutor("LowExecutor", 150);
		ShrubberyCreationForm shrub("office");
		signer.signForm(shrub);
		lowExecutor.executeForm(shrub);
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	std::cout << "\n----- Test 7: grade too low to sign in the first place -----" << std::endl;
	try
	{
		Bureaucrat weak("Weak", 150);
		PresidentialPardonForm pardon("Zoidberg");
		weak.signForm(pardon);
		weak.executeForm(pardon);
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	/*
	std::cout << "\n----- Test 8: robotomy request run multiple times (random success/fail) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		for (int i = 0; i < 5; i++)
		{
			RobotomyRequestForm robot("Subject");
			boss.signForm(robot);
			boss.executeForm(robot);
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	std::cout << "\n----- Test 9: execute() called directly (not via Bureaucrat::executeForm) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Leela");
		boss.signForm(pardon);
		pardon.execute(boss);
	}
	catch (std::exception & e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
 
	/*
	std::cout << "\n----- Test 10: polymorphism through AForm pointers -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		AForm* forms[3];
		forms[0] = new ShrubberyCreationForm("park");
		forms[1] = new RobotomyRequestForm("Nibbler");
		forms[2] = new PresidentialPardonForm("Amy");
 
		for (int i = 0; i < 3; i++)
		{
			boss.signForm(*forms[i]);
			boss.executeForm(*forms[i]);
			delete forms[i];
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
	*/
 
	std::cout << "\n----- Test 10b: polymorphism through AForm pointer (PresidentialPardonForm only) -----" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		AForm* form = new PresidentialPardonForm("Amy");
		boss.signForm(*form);
		boss.executeForm(*form);
		delete form;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	return 0;
}
 