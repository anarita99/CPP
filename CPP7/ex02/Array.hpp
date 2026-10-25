/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:50:54 by adores            #+#    #+#             */
/*   Updated: 2026/10/23 14:39:47 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array &operator=(const Array &other);
		T &operator[](unsigned int u);
		Array(const Array &other);
		unsigned int size() const;
		class OutOfRangeExcep : public std::exception{
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
};

#include "Array.tpp"

#endif