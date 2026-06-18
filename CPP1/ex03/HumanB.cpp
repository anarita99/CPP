/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:39:21 by adores            #+#    #+#             */
/*   Updated: 2026/06/18 14:38:17 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	
}

HumanB::~HumanB()
{
	
}

void HumanB::attack()
{
	if (!weapon)
	{
		std::cout << name << " has no weapon" << std::endl;
		return ;
	}
	if (weapon->getType().length() == 0)
		std::cout << name << " attacks with their nothing" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	HumanB::weapon = &weapon;
}
