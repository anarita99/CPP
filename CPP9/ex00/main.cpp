/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:42:54 by adores            #+#    #+#             */
/*   Updated: 2026/11/13 09:42:49 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	BitcoinExchange bit;
	bit.loadDatabase();
	bit.printDatabase();
	bit.processInput(av[1]);
	
}