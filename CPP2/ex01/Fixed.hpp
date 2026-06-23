/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:58:21 by adores            #+#    #+#             */
/*   Updated: 2026/06/22 10:35:47 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>

class Fixed{
	private:
		int _raw;
		static const int _fractbits;
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float flo);
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed &f);
		Fixed& operator<<();
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

#endif