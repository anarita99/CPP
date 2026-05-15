/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:39:53 by adores            #+#    #+#             */
/*   Updated: 2026/05/15 15:00:48 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
	std::string brain;

	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "Memory address of the string variable: "<< &brain << std::endl;
	std::cout << "Memory address held by stringPTR: "<< stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: "<< &stringREF << std::endl;

	std::cout << "Value of the string variable: " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
