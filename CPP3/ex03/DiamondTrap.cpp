/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 10:30:41 by adores            #+#    #+#             */
/*   Updated: 2026/07/20 11:39:06 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
DiamondTrap& operator=(const DiamondTrap &other);
DiamondTrap(const DiamondTrap &other);
~DiamondTrap();*/

DiamondTrap :: DiamondTrap()
{
	_name = "DiamondTrap";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap :: DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called." << std::endl;
}

DiamondTrap& DiamondTrap:: operator=(const DiamondTrap &other)
{
	if(this != &other)
	{
		this->_name = other._name;
		ClapTrap::_name = other.ClapTrap::_name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;	
		this->_attackDamage = other._attackDamage;
	}
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) , FragTrap(other), ScavTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << "." << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}