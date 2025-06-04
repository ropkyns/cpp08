/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:45:49 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/04 16:09:16 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <cstdlib>
#include <vector>
#include <iostream>

class NoOccurenceFound : public std::exception
{
	public :
		const char *what() const throw()
		{
			return ("No occurence found.");
		}
};

template <typename T>
int	easyfind(const T container, int n)
{
	if (std::find(container.begin(), container.end(), n) == container.end())
		throw NoOccurenceFound();
	return (std::distance(container.begin, n));
}

#endif