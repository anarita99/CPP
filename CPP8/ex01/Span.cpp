/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:25:53 by adores            #+#    #+#             */
/*   Updated: 2026/10/30 09:59:33 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	
}

Span::~Span()
{
	
}

Span& Span::operator=(const Span &other)
{
	this->_size = other._size;
	this->_vec = other._vec;
	return(*this);
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::Span(unsigned int N)
{
	_size = N;
	_vec.reserve(N);
}

const char* Span::TooManyNum::what() const _GLIBCXX_NOTHROW
{
	return "Can't add more numbers because vector is already full.";
}

const char* Span::NotEnoughNum::what() const _GLIBCXX_NOTHROW
{
	return "Not enough numbers to calculate.";
}

void Span::addNumber(unsigned int num)
{
	if (_vec.size() < _size)
		_vec.push_back(num);
	else
		throw TooManyNum();
}

unsigned int Span::shortestSpan()
{
	if (_vec.size() == 0 || _vec.size() == 1)
		throw NotEnoughNum();

	std::vector<int> copy = _vec;
	unsigned int j = 0;
	std::sort(copy.begin(), copy.end());
	unsigned int shortest_span = copy[1] - copy[0];
	for(unsigned int i = 0; i < copy.size() - 1; i++)
	{
		j = copy[i + 1] - copy[i];
		if (j < shortest_span)
			shortest_span = j;
	}
	return shortest_span;
}

unsigned int Span::longestSpan()
{
	if (_vec.size() == 0 || _vec.size() == 1)
		throw NotEnoughNum();
	std::vector<int>::iterator result;
	int max_value = *std::max_element(_vec.begin(), _vec.end());
	int min_value = *std::min_element(_vec.begin(), _vec.end());
	int res = max_value - min_value;
	return(static_cast<unsigned int>(res));
}