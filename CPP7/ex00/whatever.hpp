/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:30:10 by adores            #+#    #+#             */
/*   Updated: 2026/10/08 14:47:27 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
T min(T a, T b)
{
	if(a < b)
		return a;
	else
		return b;
}

template <typename T>
void swap(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;
	
}

template <typename T>
T max(T a, T b)
{
	if(a > b)
		return a;
	else
		return b;
}

#endif