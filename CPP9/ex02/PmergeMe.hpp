/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:46:37 by adores            #+#    #+#             */
/*   Updated: 2026/11/25 16:02:28 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <vector>
#include <sys/time.h>
#include <utility>

class PmergeMe
{
		
	public:
		std::vector<int> nums;
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		bool validateNums(int ac, char **av);
		std::vector<int> sortVec(std::vector<int> &nums);
};

#endif