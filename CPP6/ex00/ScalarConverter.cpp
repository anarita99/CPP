/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:13:59 by adores            #+#    #+#             */
/*   Updated: 2026/09/28 15:56:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return(*this);
}

//printable characters 32-126

void ScalarConverter::convert(std::string s)
{
		long int li;
		char *ptr = NULL;
		li = std::strtol(s.c_str(), &ptr, 10);
		//CHAR CHECK
		if (s.size() == 1 && isascii(s[0]) && !isdigit(s[0]))
				std::cout << "char: " << static_cast<char>(s[0]) << std::endl;
		else 
		{
			if (*ptr != '\0') 
				std::cout << "char: impossible" << std::endl;
			else if (!isprint(li))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(li) << std::endl;
		}
		
		//INTEGERS CHECK
		if (li < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else if(li > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << li << std::endl;
		
		//FLOAT CHECK
		
	}	
	// 222323a\0


