/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:17:58 by adores            #+#    #+#             */
/*   Updated: 2026/05/07 11:57:09 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void Contact::  edit_first_name(std:: string firstname)
{
	first_name = firstname;
}

void Contact:: edit_last_name(std:: string lastname)
{
	last_name = lastname;
}

void	Contact:: edit_nickname(std:: string nick)
{
	nickname = nick;
}

void Contact:: edit_phone_number(std:: string number)
{
	phone_number = number;
}

void Contact:: edit_darkest_secret(std:: string dark)
{
	darkest_secret = dark;
}

/*std::string Contact:: get_first()
{
	return first_name;
}

std::string Contact:: get_last()
{
	return last_name;
}

std::string Contact:: get_nick()
{
	return nickname;
}

std::string Contact:: get_phone()
{
	return phone_number;
}

std::string Contact:: get_dark()
{
	return darkest_secret;
}*/