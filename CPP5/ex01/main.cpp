/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:23:47 by adores            #+#    #+#             */
/*   Updated: 2026/09/14 14:25:51 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*int main()
{
	try
	{
		Bureaucrat("bureaucrat", 0);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b;
		b.upGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b;
		b.lowGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

*/

#include <iostream>
#include "Bureaucrat.hpp"
 
int main()
{
	std::cout << "----- Test 1: valid construction -----" << std::endl;
	try
	{
		Bureaucrat a("Alice", 1);
		Bureaucrat b("Bob", 150);
		Bureaucrat c("Charlie", 75);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 2: grade too high (<= 0) -----" << std::endl;
	try
	{
		Bureaucrat tooHigh("TooHigh", 0);
		std::cout << tooHigh << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 3: grade too low (> 150) -----" << std::endl;
	try
	{
		Bureaucrat tooLow("TooLow", 151);
		std::cout << tooLow << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 4: getName() / getGrade() -----" << std::endl;
	try
	{
		Bureaucrat d("Dave", 42);
		std::cout << "Name: " << d.getName() << std::endl;
		std::cout << "Grade: " << d.getGrade() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 5: upGrade() normal case -----" << std::endl;
	try
	{
		Bureaucrat e("Eve", 3);
		std::cout << "Before: " << e << std::endl;
		e.upGrade();
		std::cout << "After increment (should be grade 2): " << e << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << "Unexpected exception: " << ex.what() << std::endl;
	}
 
	std::cout << "\n----- Test 6: upGrade() at limit (grade 1) -----" << std::endl;
	try
	{
		Bureaucrat f("Frank", 1);
		f.upGrade();
		std::cout << f << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught (expected GradeTooHighException): " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 7: lowGrade() normal case -----" << std::endl;
	try
	{
		Bureaucrat g("Grace", 3);
		std::cout << "Before: " << g << std::endl;
		g.lowGrade();
		std::cout << "After decrement (should be grade 4): " << g << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 8: lowGrade() at limit (grade 150) -----" << std::endl;
	try
	{
		Bureaucrat h("Heidi", 150);
		h.lowGrade();
		std::cout << h << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Caught (expected GradeTooLowException): " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 9: copy constructor (Orthodox Canonical Form) -----" << std::endl;
	try
	{
		Bureaucrat original("Ivan", 10);
		Bureaucrat copy(original);
		std::cout << "Original: " << original << std::endl;
		std::cout << "Copy:     " << copy << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	std::cout << "\n----- Test 10: copy assignment operator -----" << std::endl;
	try
	{
		Bureaucrat j("Judy", 20);
		Bureaucrat k("Karl", 100);
		std::cout << "Before assignment -> k: " << k << std::endl;
		k = j;
		std::cout << "After assignment  -> k: " << k << std::endl;
		std::cout << "j should be unchanged:  " << j << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Unexpected exception: " << e.what() << std::endl;
	}
 
	return 0;
}
