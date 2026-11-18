/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:42:54 by adores            #+#    #+#             */
/*   Updated: 2026/11/18 15:38:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "Error: Error: could not open file." << std::endl;
		return 1;
	}
	BitcoinExchange bit;
	if(!bit.loadDatabase())
		return 1;
	//bit.printDatabase();
	bit.processInput(av[1]);
	return 0;
}