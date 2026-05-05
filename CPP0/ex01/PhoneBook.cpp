/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/05 15:03:27 by adores           ###   ########.fr       */
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
	std::string answer;
	int j = 0;
	std::cout << "What number you want to search?"<< std:: endl;
	std::getline(std::cin, answer);
	while(j <= 8)
	{
		if(answer == contact[j].phone_number)
		{
			std::cout << "First name: "<< contact[j].first_name << std:: endl;
			std::cout << "Last name: "<< contact[j].last_name << std:: endl;
			std::cout <<"Nickname: "<< contact[j].nickname << std:: endl;
			std::cout <<"Phone number: "<< contact[j].phone_number << std:: endl;
			std::cout <<"Darkest secret: "<< contact[j].darkest_secret << std:: endl;
		}
		j++;
	}
	
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
