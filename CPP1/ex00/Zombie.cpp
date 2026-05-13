/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:40:11 by adores            #+#    #+#             */
/*   Updated: 2026/05/13 15:39:43 by adores           ###   ########.fr       */
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

