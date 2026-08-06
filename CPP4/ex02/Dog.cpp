/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:57:39 by adores            #+#    #+#             */
/*   Updated: 2026/08/05 12:04:31 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		*(this->_brain) = *(other._brain);
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &other) : Animal(other)
{
	_brain = new Brain();
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "bark bark bark" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called." << std::endl;
}

Brain* Dog::getBrain(void)
{
	return(_brain);
}