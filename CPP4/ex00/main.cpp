/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:56:14 by adores            #+#    #+#             */
/*   Updated: 2026/08/05 14:38:45 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* l = new WrongCat();

	Dog a;
	Dog b(a);
	Dog c;
	c = a;
	
	std::cout << a.getType() << " " << std::endl;
	std::cout << b.getType() << " " << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	l->makeSound();
	
	delete i;
	delete j;
	delete l;
	delete meta;
	return 0;
}