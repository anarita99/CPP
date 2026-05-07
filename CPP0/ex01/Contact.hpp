/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:05:24 by adores            #+#    #+#             */
/*   Updated: 2026/05/07 11:41:41 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname; 
		std::string phone_number;
		std::string darkest_secret;
	public:
		void	edit_first_name(std::string firstname);
		void	edit_last_name(std:: string lastname);
		void	edit_nickname(std:: string nick);
		void	edit_phone_number(std:: string number);
		void	edit_darkest_secret(std:: string dark);
		std::string	get_first();
		std::string	get_last();
		std::string	get_nick();
		std::string	get_phone();
		std::string	get_dark();
};


#endif