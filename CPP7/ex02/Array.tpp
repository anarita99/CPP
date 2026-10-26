/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:25:03 by adores            #+#    #+#             */
/*   Updated: 2026/10/26 14:26:26 by adores           ###   ########.fr       */
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
	delete [] _arr;
};

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()) , _size(n)
{
	
}

template <typename T>
Array<T>::Array(const Array &other)
{
	this->_size = other._size;
	this->_arr = new T[this->_size];
	for(unsigned int i = 0; i < this->_size; i++)
		this->_arr[i] = other._arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
	if(this != &other)
	{
		delete [] this->_arr;
		this->_size = other._size;
		this->_arr = new T[this->_size];
		for(unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = other._arr[i];
	}
	return(*this);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return(_size);
}

template <typename T>
const char* Array<T>::OutOfRangeExcep::what() const throw()
{
	return "Out of Range Exception";
}

template <typename T>
T& Array<T>::operator[](unsigned int u)
{
	if (u >= _size)
		throw OutOfRangeExcep();
	else
		return (_arr[u]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int u) const
{
	if (u >= _size)
		throw OutOfRangeExcep();
	else
		return (_arr[u]);
}