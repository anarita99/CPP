/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:57:06 by adores            #+#    #+#             */
/*   Updated: 2026/10/27 12:33:56 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>

class ErrNotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Couldn't find number in container.";
		}
		
};

template<typename T>
typename T::iterator easyfind(T& intcont, int num)
{
	typename T::iterator it;
	it = std::find(intcont.begin(), intcont.end(), num);
	if (it != intcont.end())
		return it;
	else
		throw ErrNotFound();
}


#endif