/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:25:03 by adores            #+#    #+#             */
/*   Updated: 2026/10/23 15:15:22 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	_arr = NULL;
	_size = 0;
};

template <typename T>
Array<T>::~Array()
{
	
};

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T(n)) , _size(n)
{
	
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if(this != &other)
	{
		delete [] arr;
		this->_size = other.size;
		this->_arr = new T[this->_size]
	}
	return(*this);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return(_size);
}

template <typename T>
const char* Array<T>::OutOfRangeExcep::what() const _GLIBCXX_NOTHROW
{
	return "Out of Range Exception";
}

template <typename T>
T& Array<T>::operator[](unsigned int u)
{
	if (u >= _size)
		throw OutOfRangeExcep();
	else
		return (_array[u]);
}