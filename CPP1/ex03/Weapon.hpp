/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:14:39 by adores            #+#    #+#             */
/*   Updated: 2026/05/18 16:48:51 by adores           ###   ########.fr       */
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
		~Weapon();
		const std::string &getType();
		void setType(std::string newType);
};

#endif