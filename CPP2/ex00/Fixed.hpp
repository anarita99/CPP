/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 14:58:21 by adores            #+#    #+#             */
/*   Updated: 2026/06/20 14:36:38 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cstdlib>

class Fixed{
	private:
		int _fixed;
		static const int _fractbits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed &f);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif