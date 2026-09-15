/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:51 by adores            #+#    #+#             */
/*   Updated: 2026/09/15 15:45:54 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator=(const Bureaucrat &other);
		std::string getName();
		int getGrade();
		void upGrade();
		void lowGrade();
		class GradeTooHighException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		class GradeTooLowException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		void signForm(Form &f);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif