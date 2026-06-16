/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:20:10 by adores            #+#    #+#             */
/*   Updated: 2026/06/16 11:21:17 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		exit_eof();
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
	}
	return (0);
}