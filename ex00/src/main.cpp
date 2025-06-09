/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:45:23 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/05 11:15:31 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main(void)
{
	std::vector<int> intContainers;
	intContainers.push_back(42);
	intContainers.push_back(17);
	intContainers.push_back(4);
	intContainers.push_back(1000);

	try
	{
		std::cout << "\n\t--- Test 1 ---" << std::endl;
		std::vector<int>::const_iterator it = easyfind(intContainers, 42);
		std::cout << "Integer '42' found at the index : " << (it - intContainers.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\t--- Test 2 ---" << std::endl;
		std::vector<int>::const_iterator it = easyfind(intContainers, 43);
		std::cout << "Integer '42' found at the index : " << (it - intContainers.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "\n\t--- Test 3 ---" << std::endl;
		std::vector<int>::const_iterator it = easyfind(intContainers, 1000);
		std::cout << "Integer '1000' found at the index : " << (it - intContainers.begin()) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}