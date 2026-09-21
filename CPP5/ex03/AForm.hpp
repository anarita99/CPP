/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:25:12 by adores            #+#    #+#             */
/*   Updated: 2026/09/21 11:10:39 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <string>
#include <exception>

class Bureaucrat;

class AForm
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
	class NotAllowedException : public std::exception{
		virtual const char* what() const _GLIBCXX_NOTHROW;
	};
	std::string getName() const;
	bool	getIsSigned() const;
	int		getGradeToSign() const;
	int		getGradeToExe() const;
	AForm();
	virtual ~AForm();
	AForm(const std::string name, const int gradeToSign, const int gradeToExe);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	void beSigned(Bureaucrat &b);
	void execute(Bureaucrat const & executor) const;
	virtual void writeForm() const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif