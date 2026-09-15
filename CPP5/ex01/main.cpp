/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:23:47 by adores            #+#    #+#             */
/*   Updated: 2026/09/15 15:20:23 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
 
int main()
{
	std::cout << "----- Test 1: valid Form construction -----" << std::endl;
	try
	{
		Form f1("Tax Form", 50, 25);
		std::cout << f1 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 2: Form sign grade too high (<= 0) -----" << std::endl;
	try
	{
		Form f2("Bad Form", 0, 25);
		std::cout << f2 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 3: Form exec grade too low (> 150) -----" << std::endl;
	try
	{
		Form f3("Bad Form", 50, 151);
		std::cout << f3 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 4: successful signing via signForm() -----" << std::endl;
	try
	{
		Bureaucrat highGrade("Alice", 10);
		Form form("Permit", 50, 25);
		std::cout << form << std::endl;
		highGrade.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 5: failed signing (grade too low) via signForm() -----" << std::endl;
	try
	{
		Bureaucrat lowGrade("Bob", 100);
		Form form("Permit", 50, 25);
		lowGrade.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 6: signing exactly at required grade -----" << std::endl;
	try
	{
		Bureaucrat exact("Charlie", 50);
		Form form("Exact Permit", 50, 25);
		exact.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 7: direct call to beSigned() with insufficient grade -----" << std::endl;
	try
	{
		Bureaucrat lowGrade("Dave", 100);
		Form form("Direct Test", 50, 25);
		form.beSigned(lowGrade);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught (expected GradeTooLowException): " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 8: signing an already signed form -----" << std::endl;
	try
	{
		Bureaucrat eve("Eve", 1);
		Form form("Double Sign", 50, 25);
		eve.signForm(form);
		std::cout << form << std::endl;
		eve.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 9: copy constructor / assignment operator (OCF) -----" << std::endl;
	try
	{
		Form original("Original Form", 50, 25);
		Form copy(original);
		std::cout << "Original: " << original << std::endl;
		std::cout << "Copy:     " << copy << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	return 0;
}