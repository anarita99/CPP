/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:39:52 by adores            #+#    #+#             */
/*   Updated: 2026/06/18 14:34:42 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	Zombie *horde1;
	Zombie *horde2;
	horde1 = zombieHorde(-8, "maria");
	if (!horde1)
		std::cout << "Error: Wrong number of zombies in horde 1." << std::endl;
	horde2 = zombieHorde(2, "joaquim");
	if (!horde2)
		std::cout << "Error: Wrong number of zombies in horde 2." << std::endl;
	
	delete [] horde1;
	delete [] horde2;
}