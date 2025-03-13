/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 14:21:33 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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
	ClapTrap b("Vincent");

	ScavTrap c("Karl");
	FragTrap d("Vanessa");
	c = a;

	a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(20);

	for (int i = 0; i < 2; i++)
	{
		std::cout << std::endl;
		b.beRepaired(50);
	}
	
	a.attack("Vincent");
	std::cout << std::endl;
	b.beRepaired(40);

	d.highFivesGuys();
	d.highFivesGuys();

	std::cout << std::endl;
	return (0);
}

// More tests
