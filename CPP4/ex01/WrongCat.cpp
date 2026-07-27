/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:21:27 by adores            #+#    #+#             */
/*   Updated: 2026/07/20 16:28:40 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "WrongCat copy constructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "wrong meow wrong meow wrong meow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}