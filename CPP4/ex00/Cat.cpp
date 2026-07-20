/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:57:35 by adores            #+#    #+#             */
/*   Updated: 2026/07/20 15:58:40 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "Cat copy constructor called." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}