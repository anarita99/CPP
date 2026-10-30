/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:25:57 by adores            #+#    #+#             */
/*   Updated: 2026/10/30 11:22:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>

class Span
{
	private:
		std::vector<int> _vec;
		unsigned int _size;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span &operator=(const Span &other);
		Span(const Span &other);
		class TooManyNum : public std::exception{
			virtual const char* what() const throw();
		};
		class NotEnoughNum : public std::exception{
			virtual const char* what() const throw();
		};
		void addNumber(unsigned int num);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		template <typename T>
		void addMultipleNums(T first, T last)
		{
			unsigned int dist = std::distance(first, last);
			if(dist + _vec.size() <= _size)
				_vec.insert(_vec.end(), first, last);
			else
				throw TooManyNum();
		}
};

#endif