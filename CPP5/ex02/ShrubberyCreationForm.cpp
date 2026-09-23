/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 15:31:27 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 12:10:18 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*ShrubberyCreationForm::ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm::~ShrubberyCreationForm();
		ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other);
		ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &other);
		void ShrubberyCreationForm::writeForm() const;*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &other) : AForm(other.getName(), 145, 137) , _target(other._target)
{
	
}

void ShrubberyCreationForm::writeForm() const
{
	std::string name;
	name = this->_target + "_shrubbery";
	std::ofstream file(name.c_str());
	if (!file)
		return;

	file <<"                ,@@@@@@@,\n"
         << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        << "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
        << "       |o|        | |         | |\n"
        << "       |.|        | |         | |\n"
        << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	file.close();
}