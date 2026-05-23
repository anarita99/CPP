/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:59:32 by adores            #+#    #+#             */
/*   Updated: 2026/05/23 15:53:06 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl was born." << std::endl;
}
Harl::~Harl()
{
	std::cout << "Harl was destroyed." << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<< std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."<< std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 4)
	{
		if(level == levels[i])
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			std::cout << "[DEBUG]" << std::endl;
			debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[INFO]" << std::endl;
			info();
			std::cout << std::endl;
		case 2:
			std::cout << "[WARNING]" << std::endl;
			info();
			std::cout << std::endl;
		case 3:
			std::cout << "[ERROR]" << std::endl;
			info();
			std::cout << std::endl;
			break;
		default:
			std::cerr << "No level found with that name." << std::endl;
	}
}