/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:12 by adores            #+#    #+#             */
/*   Updated: 2026/09/14 15:19:54 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExe;
	public:
	class GradeTooHighException : public std::exception{
		virtual const char* what() const _GLIBCXX_NOTHROW;
	};
	class GradeTooLowException : public std::exception{
		virtual const char* what() const _GLIBCXX_NOTHROW;
	};
	std::string getName();
	bool	getIsSigned();
	int		getGradeToSign();
	int		getGradeToExe();
	Form();
	~Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExe);
	Form(const Form &other);
	Form &operator=(const Form &other);
	void beSigned(Bureaucrat &b);
	

};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif