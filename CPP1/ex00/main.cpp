/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:39:42 by adores            #+#    #+#             */
/*   Updated: 2026/05/13 15:40:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	//Zombie zombie1 = Zombie();
	randomChump("Boo");
	
	Zombie *zombie2 = newZombie("Foo");
	zombie2->announce();
	delete zombie2;
}