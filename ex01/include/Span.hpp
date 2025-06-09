/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:17:26 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/05 14:30:09 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <cstdlib>
# include <vector>
# include <iostream>
# include <algorithm>
# include <ctime>
# include <cstdlib>
# include <unistd.h>

class Span
{
	private :
		unsigned int	_N;
		unsigned int	_count;
		std::vector<int> v;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span &S);
		~Span();
		Span &operator= (const Span &S);

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		void	addRandNumber(unsigned int n);

		class LimitException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return ("Error\nLimit has been reached for this Span.");
				}
		};
		
		class SizeException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return ("Error\nSpan need more than one element to call this function.");
				}
		};
};

#endif