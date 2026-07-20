/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:32:27 by adores            #+#    #+#             */
/*   Updated: 2026/07/20 10:27:11 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap;
	ScavTrap scav;
	FragTrap frag;
	
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

	frag.beRepaired(3);
	frag.takeDamage(7);
	frag.takeDamage(40);
	frag.beRepaired(3);
	frag.highFivesGuys();
}