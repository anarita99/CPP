/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 11:39:42 by adores            #+#    #+#             */
/*   Updated: 2026/06/16 12:24:41 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Boo");
	
	Zombie *zombie2 = newZombie("Foo");
	zombie2->announce();
	delete zombie2;
}

/*Stack (Pilha)
Gestão: Automática. A memória é limpa sozinha assim que a variável sai 
	de âmbito (no fecho da chaveta }).
	
  Heap (Memória Dinâmica)
  Gestão: Manual. Tu tens o controlo total: usas new para alocar espaço e 
  delete para o libertar.
  The exercise proves that the Stack is for temporary, local objects (safe and automatic),
   while the Heap is for persistent, flexible objects (powerful, but requires manual cleanup).
	*/