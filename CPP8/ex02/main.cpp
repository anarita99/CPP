/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:05:23 by adores            #+#    #+#             */
/*   Updated: 2026/11/05 13:28:14 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main()
{
	std::cout << "--- MUTANTSTACK TEST ---" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "\n--- STD::LIST TEST (Comparison) ---" << std::endl;
	
	std::list<int> list_container;
	
	list_container.push_back(5);
	list_container.push_back(17);
	std::cout << list_container.back() << std::endl; // list uses back() instead of top()
	list_container.pop_back();                       // list uses pop_back() instead of pop()
	std::cout << list_container.size() << std::endl;
	list_container.push_back(3);
	list_container.push_back(5);
	list_container.push_back(737);
	list_container.push_back(0);
	
	std::list<int>::iterator list_it = list_container.begin();
	std::list<int>::iterator list_ite = list_container.end();
	++list_it;
	--list_it;
	while (list_it != list_ite)
	{
		std::cout << *list_it << std::endl;
		++list_it;
	}

	return 0;
}
