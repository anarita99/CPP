/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/06 15:55:03 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook:: add()
{
	if(i == 9)
		i = 0;
	std:: string input;
	
	std::cout << "First name: ";
	std::getline(std::cin, input);
	contact[i].edit_first_name(input); 
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	contact[i].edit_last_name(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	contact[i].edit_nickname(input);
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	contact[i].edit_phone_number(input);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	contact[i].edit_darkest_secret(input);
	i++;
}

void PhoneBook::search()
{
	std::string answer;
	std::cout << "What number you want to search?"<< std:: endl;
	std::getline(std::cin, answer);
	
}

void PhoneBook::exit()
{
	std::cout << "Exiting program"<< std:: endl;
}

int main()
{
	PhoneBook contacts;
	std:: string input;
	contacts.i = 0;
	while(1)
	{
		std:: cout << "> Please enter ADD, SEARCH or EXIT: " << std:: endl;
		std::getline(std::cin, input);
		if(input == "ADD")
			contacts.add();
		else if(input == "SEARCH")
			contacts.search();
		else if(input == "EXIT")
		{
			contacts.exit();
			break ;
		}
		else
			std:: cout << "Not a valid word. " << std:: endl;
		std::cout << contacts.i << std::endl;
	}
	return (0);
	
}
