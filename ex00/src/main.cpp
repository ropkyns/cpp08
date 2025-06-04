/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:45:23 by paulmart          #+#    #+#             */
/*   Updated: 2025/06/04 16:13:20 by paulmart         ###   ########.fr       */
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
		int i = easyfind(intContainers, 42);
		std::cout << "Integer '42' found at the index : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		int i = easyfind(intContainers, 43);
		std::cout << "Integer '42' found at the index : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		int i = easyfind(intContainers, 1000);
		std::cout << "Integer '1000' found at the index : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}