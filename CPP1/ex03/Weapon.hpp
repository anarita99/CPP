/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:14:39 by adores            #+#    #+#             */
/*   Updated: 2026/06/20 14:21:49 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{

	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		const std::string &getType();
		void setType(std::string newType);
};

#endif