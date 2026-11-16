/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:03:49 by adores            #+#    #+#             */
/*   Updated: 2026/11/13 16:23:55 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	(void)other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if(this != &other)
		this->nums = other.nums;
	return *this;
}

bool isLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0)
		return true;
	else if (year % 100 == 0)
		return false;
	else
		return false;

}

bool validDate(std::string date)
{
	if (date.empty())
		return false;
	if (date.size() != 10)
		return false;
	if (date[2] != '-' || date[5] != '-')
		return false;
	std::string year = date.substr (0, 3);
	for(int i = 0; year[i]; i++)
	{
		if(!isdigit(year[i]))
			return false;
	}
	
	std::string month = date.substr(5,6);
	for(int i = 0; month[i]; i++)
	{
		if(!isdigit(month[i]))
			return false;
	}
	std::string day = date.substr(8,9);
	for(int i = 0; day[i]; i++)
	{
		if(!isdigit(day[i]))
			return false;
	}
	
	
	
}

int BitcoinExchange::loadDatabase()
{
	std::string line;
	std::ifstream myFile("data.csv");

	if (!myFile.is_open()){
		std::cout << "Error: couldn't open data.csv" << std::endl;
		return 0;
	}
	std::string firstLine;
	getline(myFile, firstLine);
	if (firstLine != "date,exchange_rate")
		return (myFile.close(), 0);
	while (getline (myFile, line))
	{
		std::size_t pos = line.find(",");
		if(pos == std::string::npos)
			break;
		std::string date = line.substr (0, pos); //date
		std::string exchangeRatestr = line.substr (pos + 1);
		std::istringstream iss(exchangeRatestr);
		float exchangeRate;
		char c;
		if(!(iss >> exchangeRate) || (iss >> c))
		{
			std::cout<< "Error: Not a valid number" << std::endl;
			return (myFile.close(), 0);
		}
		nums.insert(std::make_pair(date, exchangeRate));
	}
	myFile.close();
	return 1;
}

static bool validValue(float value)
{
	if(value < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if(value > 1000)
	{
		std::cout << "Error:  too large a number." << std::endl;
		return false;
	}
	return true;
}

int BitcoinExchange::processInput(const std::string &filename)
{
	std::string line;
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()){
		std::cout << "Error: couldn't open input file" << std::endl;
		return 0;
	}
	std::string firstLine;
	getline(inputFile, firstLine);
	if (firstLine != "date | value")
		return (inputFile.close(), 0);
	while (getline (inputFile, line))
	{
		std::size_t pos = line.find(" | ");
		if(pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue;
		}
		std::string date = line.substr (0, pos); //date
		std::string valuestr = line.substr (pos + 1);
		std::istringstream iss(valuestr);
		float value;
		char c;
		if(!(iss >> value) || (iss >> c))
		{
			std::cout<< "Error: bad input => " << std::endl;
			continue;
		}
		if (!validValue(value))
			continue;
	}
	return (inputFile.close(), 1);
}

void BitcoinExchange::printDatabase()
{
	std::map<std::string, float>::iterator it = nums.begin();
	std::map<std::string, float>::iterator ite = nums.end();

	while (it != ite)
	{
		std::cout << "Chave (Key): " << it->first 
		<< " | Valor (Value): " << it->second << std::endl;
		++it;
	}
}

