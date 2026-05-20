/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:18:17 by adores            #+#    #+#             */
/*   Updated: 2026/05/20 12:22:35 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
	HumanA::name = name;
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}