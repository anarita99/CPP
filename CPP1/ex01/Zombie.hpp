/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:40:02 by adores            #+#    #+#             */
/*   Updated: 2026/05/14 14:41:19 by adores           ###   ########.fr       */
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

Zombie* zombieHorde(int N, std::string name);



#endif