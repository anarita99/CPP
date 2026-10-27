/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:25:57 by adores            #+#    #+#             */
/*   Updated: 2026/10/27 15:48:10 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span &operator=(const Span &other);
		Span(const Span &other);
		void addNumber(unsigned int num);
		void shortestSpan();
		void longestSpan();
};

#endif