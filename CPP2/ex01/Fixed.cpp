/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:11:21 by adores            #+#    #+#             */
/*   Updated: 2026/07/15 10:59:01 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractbits = 8;

Fixed::Fixed()
{
	_raw = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	_raw = i << _fractbits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float flo)
{
	_raw = roundf(flo * (1 << _fractbits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}
//o 1º fixed é o retorno da funçao
Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&f != this)
		this->_raw =f.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const
{
	float	flo_num;
	flo_num = (float)_raw / (float)(1 << _fractbits);
	return (flo_num);
}

int Fixed::toInt(void) const
{
	int	int_num;
	int_num = _raw >> _fractbits;
	return (int_num);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//como se fosse std::cout << f.tofloat mas neste caso 'e o out

std::ostream &operator<<(std::ostream& out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

