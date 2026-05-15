/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:38:16 by adores            #+#    #+#             */
/*   Updated: 2026/05/15 11:25:53 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if(N == 0)
		return NULL;
	Zombie* horde = new Zombie[N];
	int i = 0;
	while(i < N)
	{
		horde[i].set_name(name);
		i++;
	}
	return (horde);
}