/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:39:52 by adores            #+#    #+#             */
/*   Updated: 2026/05/14 14:41:05 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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

int main()
{
	//Zombie *zombie2 = newZombie("Foo");
	
	//zombie2->announce();
	//delete zombie2;
	Zombie *zombies;
	zombies = zombieHorde(5, "maria");
	delete [] zombies;
}