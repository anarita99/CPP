/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:57:35 by adores            #+#    #+#             */
/*   Updated: 2026/08/05 13:56:55 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	
	if (this != &other)
	{
		this->type = other.type;
		*(this->_brain) = *(other._brain);
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat &other) : Animal(other)
{
	_brain = new Brain();
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called." << std::endl;
}

Brain* Cat::getBrain(void)
{
	return(_brain);
}

std::string Cat::getcatIdea(int index)
{
	return(_brain->getIdea(index));
}