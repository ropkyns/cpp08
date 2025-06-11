/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:17:19 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/11 11:06:44 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main(void)
{
	try
	{
		std::cout << "\n\t --Test 1--\n";
		Span test(3);
		test.addNumber(1000);
		test.addNumber(18);
		test.addNumber(42);
		test.addNumber(1);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n\t --Test 2--\n";
		Span test(3);
		test.addNumber(1000);
		test.addNumber(18);
		test.addNumber(42);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n\t --Test 3--\n";
		Span test(3);
		test.addNumber(42);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n\t --Test 4--\n";
		Span test(10000);
		test.addRandNumber(10000);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n\t --Test 5--\n";
		Span test(10000);
		test.addRandNumber(10000);
		std::cout << test.longestSpan() << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}