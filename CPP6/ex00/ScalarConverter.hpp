/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:10:35 by adores            #+#    #+#             */
/*   Updated: 2026/10/22 12:13:09 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <climits>
#include <iomanip>
#include <sstream>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
	public:
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		static void convert(std::string s);
};

#endif