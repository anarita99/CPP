/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:14:42 by adores            #+#    #+#             */
/*   Updated: 2026/10/07 13:29:50 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

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
	
}

void identify(Base* p)
{
	
}

void identify(Base& p)
{
	
}

int main()
{
	
}