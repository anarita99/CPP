/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:25:47 by adores            #+#    #+#             */
/*   Updated: 2026/11/09 11:34:44 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	try 
	{
		std::cout << "=== TEST 1: Span with 10,000 numbers via iterators ===" << std::endl;
		Span sp(10000);

		std::vector<int> numbersToAdd;
		for (int i = 1; i <= 10000; ++i) 
			numbersToAdd.push_back(i * 2);
		sp.addMultipleNums(numbersToAdd.begin(), numbersToAdd.end());

		std::cout << "Shortest Span (2): " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span (19998): " << sp.longestSpan() << std::endl;

		std::cout << "\n=== TEST 2: Full Span Exception ===" << std::endl;
		std::vector<int> extra;
		extra.push_back(42);
		extra.push_back(84);
		sp.addMultipleNums(extra.begin(), extra.end());
	}
	catch (const std::exception& e){
		std::cout << "Exception caught successfully: " << e.what() << std::endl;
	}
	try 
	{
		std::cout << "\n=== TEST 3: Not Enough Numbers Exception ===" << std::endl;
		Span smallSpan(2);
		smallSpan.addNumber(5);
		std::cout << smallSpan.shortestSpan() << std::endl;
	}
	catch (const std::exception& e) 
	{
		std::cout << "Exception caught successfully: " << e.what() << std::endl;
	}

	return 0;

}