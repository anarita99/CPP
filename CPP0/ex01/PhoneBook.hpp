/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 14:08:07 by adores            #+#    #+#             */
/*   Updated: 2026/05/07 13:59:40 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contact[8];
	public:
		int	i;
		int added_contacts;
		void add();
		void search();
		void exit();
};

#endif
