/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:05:43 by adores            #+#    #+#             */
/*   Updated: 2026/05/18 16:49:39 by adores           ###   ########.fr       */
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