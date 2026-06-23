/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 15:11:21 by adores            #+#    #+#             */
/*   Updated: 2026/06/23 15:23:46 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*// 1. Convertes para 64 bits para ter espaço seguro para multiplicar
long long gigante = (long long)valor_a * (long long)valor_b;

// 2. Fazes o Shift: Livras-te do lixo de BAIXO (underflow)
gigante = gigante >> 15;

// 3. A Guilhotina: Livras-te do lixo de CIMA
// Ao forçar o gigante (64 bits) a caber num int (32 bits), 
// o C++ corta fora os 32 bits mais à esquerda!
int resultado_final = (int)gigante;*/
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