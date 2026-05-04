#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname; 
		std::string phone_number;
		std::string darkest_secret;
};

class PhoneBook{
	public:
		int	i;
		Contact contact[8];
		void add();
		void search();
		void exit();
};

#endif
