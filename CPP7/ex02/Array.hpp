/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:50:54 by adores            #+#    #+#             */
/*   Updated: 2026/10/22 15:30:25 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		T *arr;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array &operator=(const Array &other);
		Array(const Array &other);
};

#include "Array.tpp"

#endif