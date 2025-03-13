/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/12 15:42:47 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

// #define 

// Color_Off=\033[0m       # Text Reset

// 	# Regular Colors
// 	Black=\033[0;30m
// 	Red=\033[0;31m
// 	Green=\033[0;32m

// Mandatory
int main(void)
{
	ScavTrap a("Jimmy");
	ScavTrap b("Vincent");

	ScavTrap c("Karl");
	c = b;

	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);

	for (int i = 0; i < 4; i++)
	{
		std::cout << std::endl;
		b.beRepaired(50);
	}

	for (int i = 0; i < 40; i++)
	{
		std::cout << std::endl;
		a.attack("Vincent");
		b.takeDamage(20);
		b.beRepaired(19);
	}
	
	a.attack("Vincent");
	std::cout << std::endl;
	b.beRepaired(40);
	b.beRepaired(40);
	b.beRepaired(40);
	return (0);
}

// More tests
