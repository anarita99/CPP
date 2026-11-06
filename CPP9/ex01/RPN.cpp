/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:04:43 by adores            #+#    #+#             */
/*   Updated: 2026/11/06 14:58:10 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::~RPN()
{
	
}

RPN::RPN(const RPN &other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN &other)
{
	if (this != &other)
		this->nums = other.nums;
	return(*this);
}

int add(int num1, int num2)
{
	return (num1 + num2);
}

int sub(int num1, int num2)
{
	return (num1 - num2);
}

int divide(int num1, int num2)
{
	if (num2 == 0)
		throw "can't divide by zero";
	return (num1 / num2);
}

int mult(int num1, int num2)
{
	return (num1 * num2);
}

bool is_valid(const std::string &line)
{
	std::size_t found = line.find_first_not_of(" +-*/0123456789");
	 if (found !=std::string::npos)
	 	return false;
	return true;
}

bool is_operator(char c)
{
	if(c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

int RPN::calc(std::string line)
{
	int result;
	if (!is_valid(line))
		throw "string not valid";
	for(size_t i = 0; i < line.size();  i++)
	{
		if (std::isdigit(line[i]))
			nums.push(line[i] - '0');
		if (line[i] == ' ')
			continue;
		if(is_operator(line[i]))
		{
			if (nums.size() < 2)
				throw "not enough numbers";
			int num2 = nums.top();
			nums.pop();
			int num1 = nums.top();
			nums.pop();
			if(line[i] == '+')
				result = add(num1, num2);
			else if(line[i] == '-')
				result = sub(num1, num2);
			else if(line[i] == '/')
				result = divide(num1, num2);
			else if(line[i] == '*')
				result = mult(num1, num2);
			nums.push(result);
		}
	}
	if(nums.size() != 1)
		throw "invalid string";
	return nums.top();
}