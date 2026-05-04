/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/04 14:01:50 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook:: add()
{
	std::cout << "First name: ";
	std::getline(std::cin, contact[i].first_name);
	std::cout << "Last name: ";
	std::getline(std::cin, contact[i].last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, contact[i].nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, contact[i].phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, contact[i].darkest_secret);
	i++;
}

void PhoneBook::search()
{
	std::cout << "Searching number"<< std:: endl;
	std::cout << contact[0].first_name << std:: endl;
	std::cout << contact[0].last_name << std:: endl;
	std::cout << contact[0].nickname << std:: endl;
	
}

void PhoneBook::exit()
{
	std::cout << "Exiting program"<< std:: endl;
}

int main()
{
	PhoneBook contact1;
	std:: string input;
	contact1.i = 0;
	while(1)
	{
		std:: cout << "> Please enter ADD, SEARCH or EXIT: " << std:: endl;
		std::getline(std::cin, input);
		if(input == "ADD")
			contact1.add();
		else if(input == "SEARCH")
			contact1.search();
		else if(input == "EXIT")
		{
			contact1.exit();
			break ;
		}
		else
			std:: cout << "Not a valid word. " << std:: endl;
		std::cout << contact1.i << std::endl;
	}
	return (0);
	
}
