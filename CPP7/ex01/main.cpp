/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:51:59 by adores            #+#    #+#             */
/*   Updated: 2026/10/09 16:43:37 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printNum(int i)
{
	std::cout << i << std::endl;
}

void printChar(char c)
{
	std::cout << c << std::endl;
}
void printConstNum(const int &i)
{
	std::cout << i << std::endl;
}

void mult2(int &i)
{
	i *= 2;
}

int main()
{
	int arr[] = {5, 6, 8, 9};
	char str[] = "hello";
	const int constnums[] = {1, 2, 3};
	
	::iter(arr, 4, printNum);
	::iter(arr, 4, mult2);
	::iter(arr, 4, printNum);
	::iter(constnums, 4, printConstNum);

	::iter(str, 6, printChar);
}