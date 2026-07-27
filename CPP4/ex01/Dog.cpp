/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:57:39 by adores            #+#    #+#             */
/*   Updated: 2026/07/27 13:55:09 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "bark bark bark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}