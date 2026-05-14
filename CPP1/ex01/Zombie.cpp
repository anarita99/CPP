/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:39:57 by adores            #+#    #+#             */
/*   Updated: 2026/05/14 14:45:41 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: Zombie()
{
	std::cout << "Zombie created with success!" << std::endl;
}

Zombie:: ~Zombie()
{
	std::cout << get_name() << " destroyed with success :(" << std::endl;
}

std::string Zombie:: get_name(void)
{
	return(name);
}

void Zombie:: set_name(std::string zombie_name)
{
	name = zombie_name;
}

void Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie* zombieHorde(int N, std::string name)
// {
// 	Zombie* horde = new Zombie[N];
// 	int i = 0;
// 	while(i < N)
// 	{
// 		horde[i].set_name(name);
// 		i++;
// 	}
// 	return (horde);
// }