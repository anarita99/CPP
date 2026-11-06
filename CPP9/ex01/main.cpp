/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:31:13 by adores            #+#    #+#             */
/*   Updated: 2026/11/06 15:07:41 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: not valid." << std::endl;
		return 1;
	}
	RPN rpn;
	int result;
	try{
		result = rpn.calc(av[1]);
		std::cout << result << std::endl;
	}
	catch(const char* msg){
		std::cerr << "Error: " << msg << std::endl;
		return 1;
	}
	return 0;
}


