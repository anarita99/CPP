/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 11:01:33 by adores            #+#    #+#             */
/*   Updated: 2026/07/20 10:16:15 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "ClapTrap";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	if (&other != this)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << this->_name << " has no energy left." << std::endl;
	else
	{
		std::cout << this->_name << " attacks " << target << ", causing "<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0)
		std::cout << this->_name << " has no energy left." << std::endl;
	if (this->_hitPoints < amount)
	{
		this->_hitPoints = 0;
		std::cout << this->_name << " has no energy left." << std::endl;
	}
	else
	{
		std::cout << this->_name << " took "<< amount << " points of damage." << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0 || this->_energyPoints == 0 )
		std::cout << this->_name << " has no energy to repair itself." << std::endl;
	else
	{
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << this->_name << " has "<< amount << " more hitpoints." << std::endl;
	}
}