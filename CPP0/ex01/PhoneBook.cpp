/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 10:41:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/07 12:05:14 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook:: add()
{
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

/*Display the saved contacts as a list of 4 columns: index, first name, last
name and nickname.
◦ Each column must be 10 characters wide. A pipe character (’|’) separates
them. The text must be right-aligned. If the text is longer than the column,
it must be truncated and the last displayable character must be replaced by a
dot (’.’).*/
void PhoneBook::search()
{
	i = 0;
	Contact contact;
	while(i < 8)
	{

		i++;
	}
	std::string answer;
	std::cout << "What index do you want?"<< std:: endl;
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
		std::cout << contacts.i << std::endl;
	}
	return (0);
	
}
