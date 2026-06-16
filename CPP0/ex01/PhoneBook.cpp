/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/06/16 11:21:39 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void exit_eof(void)
{
	if (std::cin.eof())
	{
		std::cout << "Exiting program." << std::endl;
		std::exit(0);
	}
}

bool is_phone_number(std::string input)
{
	int i = 0;
	while(input[i])
	{
		if(!isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

void PhoneBook:: add()
{
	std:: string input;
	do
	{
		std::cout << "First name: ";
		std::getline(std::cin, input);
		exit_eof();
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_first_name(input); 
	do
	{
		std::cout << "Last name: ";
		std::getline(std::cin, input);
		exit_eof();
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_last_name(input);
	do
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
		exit_eof();
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_nickname(input);
	do
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
		exit_eof();
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
		if(is_phone_number(input) == false)
			std::cout << "You need to insert numbers only." << std::endl;
	}
	while(input.empty() || is_phone_number(input) == false);
	contact[i].edit_phone_number(input);
	do
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
		exit_eof();
		if(input.empty())
			std::cout << "Empty field. Try again." << std::endl;
	}
	while(input.empty());
	contact[i].edit_darkest_secret(input);
	i++;
	if (added_contacts < 8)
		added_contacts++;
}

void PhoneBook::print_contacts()
{
	int j = 0;
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "|  Index   |First name|Last name | Nickname |" << std::endl;
	std::cout << " -------------------------------------------" << std::endl;
	while(j < added_contacts)
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
}



void PhoneBook::search()
{
	print_contacts();
	std::string answer;
	int num;
	if(added_contacts == 0)
		std::cout << "No added contacts." << std::endl;
	else
	{
		while(1)
		{
			do
			{
				std::cout << "What index do you want?"<< std:: endl << "> ";
				std::getline(std::cin, answer);
				exit_eof();
				if(answer.empty())
					std::cout << "Empty field. Try again." << std::endl;
			}
			while(answer.empty());
			std::istringstream iss(answer);
			iss >> num;
			if(num >= added_contacts || !isdigit(answer[0]) || answer.length() > 1)
			{
				std::cout << "Index not correct." << std::endl;
				continue;
			}
			else if (num >= 0 && num < 8)
			{
				std::cout << "First name: "<< contact[num].get_first() << std::endl;
				std::cout << "Last name: "<< contact[num].get_last() << std::endl;
				std::cout << "Nickname: "<< contact[num].get_nick() << std::endl;
				std::cout << "Phone number: "<< contact[num].get_phone() << std::endl;
				std::cout << "Darkest secret: "<< contact[num].get_dark() << std::endl;
				break;
			}
			else
				std::cout << "Index out of range or not correct." << std::endl;
		}
	}
}

void PhoneBook::exit()
{
	std::cout << "Exiting program"<< std:: endl;
}

