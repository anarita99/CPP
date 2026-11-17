/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:03:49 by adores            #+#    #+#             */
/*   Updated: 2026/11/17 17:06:31 by adores           ###   ########.fr       */
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

bool validDate(std::string &date)
{
	if (date.empty())
		return false;
	if (date.size() != 10)
		return false;
	if (date[4] != '-' || date[7] != '-')
		return false;
	std::size_t found = date.find_first_not_of("-0123456789");
	if (found !=std::string::npos)
	 	return false;
	std::string year = date.substr (0, 4);
	std::string month = date.substr(5,2);
	std::string day = date.substr(8,2);
	//std::cout << "s_year: " << year << "\ns_month: " << month << "\ns_day: " << day << std::endl;
	
	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());
	
	//std::cout << "year: " << y << "\nmonth: " << m << "\nday: " << d << std::endl;
	
	if(isLeapYear(y) && m == 2 && d > 29)
		return false;
	else if(!isLeapYear(y) && m == 2 && d > 28)
		return false;
	
	if (m > 12 || m <= 0)
		return false;
	if((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d > 31 || d <= 0))
		return false;
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && (d <= 0 || d >= 30))
		return false;
	
	if (y <= 0 || y > 9999)
		return false;

	return true;
	
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
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

float BitcoinExchange::searchData(std::string &date)
{
	std::map<std::string, float>::iterator it = nums.lower_bound(date);
	if (it != nums.end() && it-> first == date)
		return (it->second);


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
	for (int i = 0; getline (inputFile, line); i++)
	{
		//std::cout << i << ": " << line << std::endl;
		std::size_t pos = line.find(" | ");
		if(pos == std::string::npos)
		{
			std::cout << "Error: bad input1 => " << line << std::endl;
			continue;
		}
		std::string date = line.substr (0, pos); //date
		if(!validDate(date))
		{
			std::cout << "Error: bad input2 => " << line << std::endl;
			continue;
		}
		std::string valuestr = line.substr (pos + 3);
		std::istringstream iss(valuestr);
		float value;
		char c;
		if(!(iss >> value) || (iss >> c))
		{
			std::cout<< "Error: bad input3 => " << line << std::endl;
			continue;
		}
		if (!validValue(value))
			continue;
		float rate = searchData(date);
		if (searchData(date))
		{
			std::cout << date <<" => "<< value <<" = "<< rate <<std::endl;
			continue;
		}
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

