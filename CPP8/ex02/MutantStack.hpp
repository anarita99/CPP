/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 14:05:31 by adores            #+#    #+#             */
/*   Updated: 2026/11/04 14:48:39 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		MutantStack(){}
		~MutantStack(){}
		MutantStack &operator=(const MutantStack &other);
		MutantStack(const MutantStack &other);
		iterator begin(){
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator begin() const{
			return this->c.begin();
		}
		const_iterator end() const{
			return this->c.end();
		}
		
};

#endif