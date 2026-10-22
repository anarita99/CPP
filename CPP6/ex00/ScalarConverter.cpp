/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:13:59 by adores            #+#    #+#             */
/*   Updated: 2026/10/22 12:13:23 by adores           ###   ########.fr       */
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

int hasOneF(std::string s)
{
	bool hasF = false;
	long unsigned int i = 0;

	while(i < s.size())
	{
		if (s[i] == 'f')
		{
			if (hasF)
				return 0;
			hasF = true;
		}
		i++;
	}
	return 1;
}

void ScalarConverter::convert(std::string s)
{
		if (PseudoLiterals(s))
			return ;
		double d;
		char *endptr;
		d = std::strtod(s.c_str(), &endptr);
		//CHAR CHECK
		if (s.size() == 1 && isascii(s[0]) && !isdigit(s[0]))
		{
			std::cout << "char: '" << static_cast<char>(s[0]) << "'" << std::endl;
			std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(s[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(s[0]) << ".0"<< std::endl;
			return ;
		}
		else 
		{
			if ((*endptr != '\0' && (!hasOneF(s) || *endptr != 'f')) || s.empty()) 
				std::cout << "char: impossible" << std::endl;
			else if (d < 0 || d > 127) 
				std::cout << "char: impossible" << std::endl;
			else if (!isprint(static_cast<int>(d)))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: '" << static_cast<char>(d) <<"'"<< std::endl;
		}
		//INTEGERS CHECK
		
		if((*endptr != '\0' && (!hasOneF(s) || *endptr != 'f') )|| s.empty()) 
			std::cout << "int: impossible" << std::endl;
		else if (d < INT_MIN || d > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		
		//FLOAT CHECK
		float f = static_cast<float>(d);
		if((*endptr != '\0' && (!hasOneF(s) || *endptr != 'f') )|| s.empty()) 
			std::cout << "float: impossible" << std::endl;
		else if (std::fmod(d, 1.0) == 0.0 && d < 1000000.0 && d > -1000000.0)
				std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		
		//DOUBLE CHECK
		if((*endptr != '\0' && (!hasOneF(s) || *endptr != 'f') )|| s.empty()) 
			std::cout << "double: impossible" << std::endl;
		else if (std::fmod(d, 1.0) == 0.0 && d < 1000000.0 && d > -1000000.0)
				std::cout << "double: " << d << ".0" << std::endl;
		else
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		}
