/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:46:36 by adores            #+#    #+#             */
/*   Updated: 2026/10/06 15:20:25 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	
	Data *data2;
	uintptr_t ui;
	
	data.i = 42;
	data.str = "HELLO";

	ui = Serializer::serialize(&data);
	data2 = Serializer::deserialize(ui);
	
	if(&data == data2)
	{
		std::cout << data2->i << " " << data2->str << std::endl;
		std::cout << &data << std::endl;
		std::cout << data2 << std::endl;
		std::cout << "They are the same" << std::endl;
	}
	else
		std::cout << "Not the same" << std::endl;
	return 0;
}