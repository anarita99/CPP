/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:14:42 by adores            #+#    #+#             */
/*   Updated: 2026/10/08 11:54:16 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void)
{
	Base *base;
	int num;
	num = rand() % 3;
	if (num == 0)
		base = new A();
	else if(num == 1)
		base = new B();
	else if(num == 2)
		base = new C();
	else
		base = NULL;
	return base;
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if(a)
		std::cout << "A" << std::endl;
	else if(b)
		std::cout << "B" << std::endl;
	else if(c)
		std::cout << "C" << std::endl;
	else
		std::cout << "It's nothing." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(...)
	{
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(...)
	{
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(...)
	{
	}
	
}

int main()
{
	srand(time(NULL));
	Base *b;
	Base *c;
	b = generate();
	c = generate();
	identify(b);
	identify(c);
	identify(*b);
	identify(*c);
	delete b;
	delete c;
}