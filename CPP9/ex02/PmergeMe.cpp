/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:46:31 by adores            #+#    #+#             */
/*   Updated: 2026/11/24 15:00:01 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	
}

PmergeMe::~PmergeMe()
{
	
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &other)
{
	if(this != &other)
	{
		this->nums = other.nums;
	}
	return (*this); 
}

bool PmergeMe::validateNums(int ac, char **av)
{
	if(ac == 1)
	{
		std::cerr << "Error: Not enough arguments." << std::endl;
		return false;
	}
	for(int i = 1; i < ac; i++)
	{
		std::istringstream iss(av[i]);
		long num;
		char c;
		if(!(iss >> num) || (iss >> c))
		{
			std::cerr << "Error: needs to be a positive number int. " << std::endl;
			return false;
		}
		if(num < 0 || num > INT_MAX)
		{
			std::cerr << "Error: needs to be a positive number int. " << std::endl;
			return false;
		}
		nums.push_back(num);
		
	}
	std::cout << "Before: ";
	for (unsigned long i = 0; i < nums.size(); i++)
		std::cout << nums[i] << " ";
	return true;
}