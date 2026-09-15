/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:12 by adores            #+#    #+#             */
/*   Updated: 2026/09/15 15:56:39 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>

class Bureaucrat;

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
	std::string getName() const;
	bool	getIsSigned() const;
	int		getGradeToSign() const;
	int		getGradeToExe() const;
	Form();
	~Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExe);
	Form(const Form &other);
	Form &operator=(const Form &other);
	void beSigned(Bureaucrat &b);

};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif