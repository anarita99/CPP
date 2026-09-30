/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:13:59 by adores            #+#    #+#             */
/*   Updated: 2026/09/30 12:56:00 by adores           ###   ########.fr       */
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

int	PseudoLiterals(std::string s)
{
	if (s == "nan" || s == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return 1;	
	}
	else if (s == "inf" || s == "inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
		return 1;
	}
	else if (s == "+inf" || s == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return 1;
	}
	else if (s == "-inf" || s == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return 1;
	}
	return 0;
}

void ScalarConverter::convert(std::string s)
{
		if (PseudoLiterals(s))
			return ;
		char *ptr = NULL;
		long int li = std::strtol(s.c_str(), &ptr, 10);
		//CHAR CHECK
		if (s.size() == 1 && isascii(s[0]) && !isdigit(s[0]))
		{
			std::cout << "char: " << static_cast<char>(s[0]) << std::endl;
			std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(s[0]) << ".0f" <<std::endl;
			std::cout << "double: " << static_cast<double>(s[0]) << std::endl;
			return ;
		}
		else 
		{
			if (*ptr != '\0') 
				std::cout << "char: impossible" << std::endl;
			else if (!isprint(li))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(li) << std::endl;
		}
		if (*ptr == 'f' && *(ptr + 1) == '\0')
			ptr++;
		//INTEGERS CHECK
		else if((*ptr != '\0' && *ptr != 'f')|| s == "\0")
			std::cout << "int: impossible" << std::endl;
		else if (li < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else if(li > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << li << std::endl;
		
		//FLOAT CHECK
		
	}
	// 222323a\0


