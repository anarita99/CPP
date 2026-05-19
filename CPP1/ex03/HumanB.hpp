/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:31:11 by adores            #+#    #+#             */
/*   Updated: 2026/05/19 10:45:01 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon weapon);
		
};

#endif