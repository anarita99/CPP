/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:05:23 by adores            #+#    #+#             */
/*   Updated: 2026/11/06 10:13:03 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <stack>
#include "MutantStack.hpp"

int main()
{
	std::cout << "--- Subject test (MutantStack) ---" << std::endl;
	{
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
		std::stack<int> s(mstack);
	}

	std::cout << std::endl << "--- Same test with std::list ---" << std::endl;
	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);

		std::cout << mstack.back() << std::endl;

		mstack.pop_back();

		std::cout << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << std::endl << "--- Copy and assignment ---" << std::endl;
	{
		MutantStack<int> a;
		a.push(1);
		a.push(2);
		a.push(3);

		MutantStack<int> b(a);
		MutantStack<int> c;
		c = a;

		b.push(4);

		std::cout << "a size: " << a.size() << " (3)" << std::endl;
		std::cout << "b size: " << b.size() << " (4)" << std::endl;
		std::cout << "c size: " << c.size() << " (3)" << std::endl;
	}

	std::cout << std::endl << "--- Iterating a string stack ---" << std::endl;
	{
		MutantStack<std::string> words;
		words.push("it");
		words.push("works");
		words.push("!");

		for (MutantStack<std::string>::iterator it = words.begin(); it != words.end(); ++it)
			std::cout << *it << " ";
		std::cout << std::endl;
	}

	return 0;
}