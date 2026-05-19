/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:05:43 by adores            #+#    #+#             */
/*   Updated: 2026/05/19 10:06:45 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	
}

Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
