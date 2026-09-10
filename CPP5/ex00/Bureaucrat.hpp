/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:12:51 by adores            #+#    #+#             */
/*   Updated: 2026/09/10 14:23:01 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

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
		int	getGrade();
		void upGrade();
		void lowGrade();
		class GradeTooHighException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		class GradeTooLowException : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &b);

#endif