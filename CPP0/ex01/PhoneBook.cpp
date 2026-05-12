/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/12 14:26:08 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook:: add()
{
	std:: string input;
	do
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_first_name(input); 
	do
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_last_name(input);
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_nickname(input);
	do
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_phone_number(input);
	do
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_darkest_secret(input);
	i++;
	added_contacts++;
}

void PhoneBook::search()
{
	int j = 0;
	std::cout << " -------------------------------------------" << std::endl;;
	std::cout << "|  Index   |First name|Last name | Nickname |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;;
	while(j < i)
	{
		std::cout << "|" << std::setw(10) << j;
		if(contact[j].get_first().length() > 10)
			std::cout << "|" << contact[j].get_first().substr(0,9) << ".";
		else
			std::cout << "|" << std::setw(10) << contact[j].get_first();
		if(contact[j].get_last().length() > 10)
			std::cout << "|" << contact[j].get_last().substr(0,9) << ".";
		else
			std::cout << "|" << std::setw(10) << contact[j].get_last();
		if(contact[j].get_nick().length() > 10)
			std::cout << "|" << contact[j].get_nick().substr(0,9) << "."<< "|" << std::endl;
		else
			std::cout << "|" << std::setw(10) << contact[j].get_nick() << "|" << std::endl;
		j++;
	}
	std::cout << " -------------------------------------------" << std::endl;
	std::string answer;
	int num;
	if(added_contacts == 0)
		std::cout << "No added contacts." << std::endl;
	else
	{
		std::cout << "\nWhat index do you want?"<< std:: endl << "> ";
		std::getline(std::cin, answer);
		num = atoi(answer.c_str());
		if (num >= 0 && num < 8)
		{
			std::cout << "First name: "<< contact[num].get_first() << std::endl;
			std::cout << "Last name: "<< contact[num].get_last() << std::endl;
			std::cout << "Nickname: "<< contact[num].get_nick() << std::endl;
			std::cout << "Phone number: "<< contact[num].get_phone() << std::endl;
			std::cout << "Darkest secret: "<< contact[num].get_dark() << std::endl;
		}
		else
			std::cout << "Index out of range or not correct." << std::endl;
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
	contacts.added_contacts = 0;
	while(1)
	{
		std:: cout << "> Please enter ADD, SEARCH or EXIT: " << std:: endl;
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			if(contacts.i < 8)
				contacts.add();
			else if(contacts.i == 8)
			{
				contacts.i = 0;
				contacts.add();
			}
		}
		else if(input == "SEARCH")
			contacts.search();
		else if(input == "EXIT")
		{
			contacts.exit();
			break ;
		}
		else
			std:: cout << "Not a valid word. " << std:: endl;
		//std::cout << contacts.i << std::endl;
	}
	return (0);
	
}
