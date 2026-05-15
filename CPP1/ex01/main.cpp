/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:39:52 by adores            #+#    #+#             */
/*   Updated: 2026/05/15 11:27:16 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie *zombies;
	Zombie *horde2;
	zombies = zombieHorde(5, "maria");
	horde2 = zombieHorde(2, "joaquim");
	
	delete [] zombies;
	delete [] horde2;
}