/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:42:54 by adores            #+#    #+#             */
/*   Updated: 2026/11/17 14:37:30 by adores           ###   ########.fr       */
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
	//bit.printDatabase();
	bit.processInput(av[1]);
	
}