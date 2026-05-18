/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:39:21 by adores            #+#    #+#             */
/*   Updated: 2026/05/18 16:52:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	HumanB::name = name;
}

HumanB::~HumanB()
{
	
}

void HumanB::attack()
{
	if(weapon.getType().length() == 0)
		std::cout << name << " attacks with their nothing" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}