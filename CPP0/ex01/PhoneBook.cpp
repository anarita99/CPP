/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/04/30 12:19:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook:: add()
{
	Contact new_contact;
	std::cout << "First name: ";
	std::cin >> new_contact.first_name;
	std::cout << "Last name: ";
	std::cin >> new_contact.last_name;
	std::cout << "Nickname: ";
	std::getline(std::cin, new_contact.nickname);
	std::cout << "Phone number: ";
	std::cin >> new_contact.phone_number;
	std::cout << "Darkest secret: ";
	std::getline(std::cin, new_contact.darkest_secret);
	
}

void PhoneBook::search()
{
	std::cout << "Searching number"<< std:: endl;
}

void PhoneBook::exit()
{
	std::cout << "Exiting program"<< std:: endl;
}

int main()
{
	PhoneBook contact1;
	std:: string input;
	while(1)
	{
		std:: cout << "> Please enter ADD, SEARCH or EXIT: " << std:: endl;
		std:: cin >> input;
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
	}
	return (0);
	
}
