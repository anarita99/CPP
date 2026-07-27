/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:01:14 by adores            #+#    #+#             */
/*   Updated: 2026/07/27 15:15:17 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if(this != &other)
		//this->ideas = other.ideas;
	std::cout << "Brain copy assignment operator called" << std::endl;
}