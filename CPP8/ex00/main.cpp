/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:58:13 by adores            #+#    #+#             */
/*   Updated: 2026/10/27 14:04:27 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(3);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 3);
		std::cout << "found: " << *it << std::endl;
		int pos = std::distance(v.begin(), it);
		std::cout << "position: " << pos << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	try
	{
		easyfind(v, 42);
		std::cout << "found (unexpected)" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}

	return 0;
}