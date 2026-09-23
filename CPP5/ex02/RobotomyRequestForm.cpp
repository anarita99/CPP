/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 12:22:01 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 12:15:30 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request form", 72, 45)
{
	this->_target = target;
}
 
RobotomyRequestForm::~RobotomyRequestForm()
{
 
}
 
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}
 
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other.getName(), 72, 45), _target(other._target)
{
 
}
 
void RobotomyRequestForm::writeForm() const
{
	std::cout << "* DRILLING NOISES *" << std::endl;

	if (rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy of " << this->_target << " failed." << std::endl;
}