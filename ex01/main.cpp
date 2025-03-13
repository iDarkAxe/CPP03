/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 15:02:43 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

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
