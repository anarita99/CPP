/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:32:27 by adores            #+#    #+#             */
/*   Updated: 2026/07/16 16:00:04 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap;
	ScavTrap scav;
	
	clap.attack("Wall-e");
	
	scav.attack("Bebop");
	
	clap.beRepaired(3);
	clap.takeDamage(7);
	clap.takeDamage(12);
	clap.beRepaired(3);

	scav.beRepaired(3);
	scav.takeDamage(7);
	scav.takeDamage(40);
	scav.beRepaired(3);
	scav.guardGate();
}