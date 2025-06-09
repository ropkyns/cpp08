/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:45:49 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/05 11:12:06 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

class NoOccurenceFound : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("No occurence found.");
		}
};

template <typename T>
typename T::const_iterator	easyfind(const T &container, int n)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NoOccurenceFound();
	return (it);
}

#endif