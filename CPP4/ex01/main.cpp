/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 14:56:14 by adores            #+#    #+#             */
/*   Updated: 2026/07/28 15:43:10 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* l = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	l->makeSound();
	
	Cat a;
	Dog b;
	Dog c(b);

	a.getBrain()->writeIdea("Hungry", 0);
	std::cout << a.getBrain()->getIdea(0) << std::endl;
	std::cout << b.getBrain()->getIdea(0) << std::endl;
	b.getBrain()->writeIdea("Sleepy", 0);
	std::cout << b.getBrain()->getIdea(0) << std::endl;
	std::cout << c.getBrain()->getIdea(0) << std::endl;
	
	
	delete i;
	delete j;
	delete l;
	delete meta;
	return 0;
}