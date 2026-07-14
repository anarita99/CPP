/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:32:27 by adores            #+#    #+#             */
/*   Updated: 2026/07/14 09:58:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap;
	clap.attack("Wall-e");
	clap.beRepaired(3);
	clap.takeDamage(7);
	clap.takeDamage(12);
	clap.beRepaired(3);
}