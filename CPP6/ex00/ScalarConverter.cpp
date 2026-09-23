/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:13:59 by adores            #+#    #+#             */
/*   Updated: 2026/09/23 15:40:41 by adores           ###   ########.fr       */
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
	
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	
}


//printable characters 32-126
bool isChar(std::string s)
{
	char c;
	if (s.length() != 1)
		return false;
	c = static_cast<unsigned char>(s[0])
}

void ScalarConverter::convert(std::string s)
{
	if(s.lenght() != 1)
	
}