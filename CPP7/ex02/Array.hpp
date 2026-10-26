/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:50:54 by adores            #+#    #+#             */
/*   Updated: 2026/10/26 15:05:19 by adores           ###   ########.fr       */
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
		const T &operator[](unsigned int u) const;
		Array(const Array &other);
		unsigned int size() const;
		class OutOfRangeExcep : public std::exception{
			virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif