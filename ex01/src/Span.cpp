/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:06:45 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/05 15:06:22 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : _N(5), _count(0)
{
}

Span::Span(unsigned int N) : _N(N), _count(0)
{
}

Span::Span(const Span &S)
{
	this->_N = S._N;
	this->_count = S._count;
	this->v = S.v;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &S)
{
	this->_N = S._N;
	this->_count = S._count;
	this->v = S.v;
	return(*this);
}

void	Span::addNumber(int n)
{
	if (this->_count < this->_N)
	{
		this->v.push_back(n);
		_count++;
	}
	else
		throw LimitException();
}

void	Span::addRandNumber(unsigned int N)
{
	if (N + this->_count <= this->_N)
	{
		std::srand(std::time(0));
		for (unsigned int i = 0; i <= N; i++)
		{
			this->v.push_back(rand() % RAND_MAX);
			_count++;
			usleep(1000);
		}
	}
	else
		throw LimitException();
}

int		Span::longestSpan()
{
	std::vector<int> tmp = this->v;
	if (v.size() < 2)
		throw SizeException();
	std::sort(tmp.begin(), tmp.end());
	return(*(tmp.end() - 1) - *tmp.begin());
}

int		Span::shortestSpan()
{
	std::vector<int> tmp = this->v;
	if (v.size() < 2)
		throw SizeException();
	std::sort(tmp.begin(), tmp.end());
	int	val = (tmp[1] - tmp[0]);
	for (unsigned int i = 0; i < this->_count - 1; i++)
	{
		if (val > (tmp[i + 1] - tmp[i]))
			val = (tmp[i + 1] - tmp[i]);
	}
	return (val);
}

