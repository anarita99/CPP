/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:46:31 by adores            #+#    #+#             */
/*   Updated: 2026/11/26 15:55:42 by adores           ###   ########.fr       */
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
	std::cout << std::endl;
	return true;
}

size_t PmergeMe::binarySearch(const std::vector<int> &v, int value, size_t high)
{
	size_t low = 0;
	while(low < high)
	{
		size_t mid = low + (high - low) / 2;
		if (value < v[mid])
			high = mid;
		else
			low = mid + 1;
	}
	return low;
}


//winners no first e losers no second sempre
std::vector<int> PmergeMe::sortVec(std::vector<int> &nums)
{
	std::cout << nums.size() << std::endl;
	if (nums.size() <= 1)
		return nums;

	std::vector< std::pair<int,int> >pairs;
	std::vector<int> winners;
	
	size_t size = nums.size();
	for (size_t i = 0; i + 1 < size; i+= 2)
	{
		if(nums[i] > nums[i + 1])
			pairs.push_back(std::make_pair(nums[i], nums[i + 1]));
		else
			pairs.push_back(std::make_pair(nums[i + 1], nums[i]));
	}
	bool hasStraggler = (size % 2 != 0);
	int straggler = 0;
	if (hasStraggler)
		straggler = nums[size - 1];
	for (unsigned long i = 0; i < pairs.size(); i++)
		winners.push_back(pairs[i].first);
	winners = sortVec(winners);
	return nums;
}

std::vector<int> PmergeMe::jacobsthalOrder(size_t N)
{
	std::vector<int> order;
	size_t before = 1;
	size_t now = 2;
	while(before < N)
	{
		size_t lim;
		if(now < N)
			lim = now;
		else
			lim = before;
	}
}