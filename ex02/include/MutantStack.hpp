/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 16:23:29 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/09 14:43:27 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <cstdlib>
# include <vector>
# include <iostream>
# include <algorithm>
# include <ctime>
# include <cstdlib>
# include <unistd.h>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &M)
		{
			*this = M;
		}
		MutantStack	&operator=(const MutantStack &M)
		{
			if (this != M)
				return (*this);
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return(this->c.end());
		}
		const const_iterator begin() const
		{
			return (this->c.begin());
		}
		const const_iterator end() const
		{
			return(this->c.end());
		}
};

#endif