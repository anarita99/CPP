/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 14:53:50 by adores            #+#    #+#             */
/*   Updated: 2026/06/18 12:36:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void announce(void);
		std::string get_name(void);
		void set_name(std::string zombie_name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif