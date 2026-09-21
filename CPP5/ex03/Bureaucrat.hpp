/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:51 by adores            #+#    #+#             */
/*   Updated: 2026/09/17 14:25:53 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class AForm;

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
		std::string getName() const;
		int getGrade() const;
		void upGrade();
		void lowGrade();
		class GradeTooHighException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		class GradeTooLowException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		void signForm(AForm &f);
		void executeForm(AForm const & form) const;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif