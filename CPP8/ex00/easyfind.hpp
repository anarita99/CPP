/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adores <adores@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 14:57:06 by adores            #+#    #+#             */
/*   Updated: 2026/10/26 15:07:03 by adores           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T, int i>
class easyfind
{
	public:
		easyfind();
		~easyfind();
		easyfind &operator=(const easyfind &other);
		easyfind(const easyfind &other);
		class NotFoundExcep : public std::exception{
			virtual const char* what() const throw();
		};
};

#include "easyfind.hpp"

#endif