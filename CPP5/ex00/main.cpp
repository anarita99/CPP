/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 14:23:47 by adores            #+#    #+#             */
/*   Updated: 2026/08/24 14:29:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat(151);
	}
	catch(int n)
	{
		if(n == -1)
			std::cerr << "GradeTooLowException" << std::endl;
		else if(n == -2)
			std::cerr << "GradeTooHighException" << std::endl;
	}
}