/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 15:19:24 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

// Mandatory
int main(void)
{
	// ScavTrap a("Jimmy");
	DiamondTrap b("Vincent");

	// a.attack("Vincent");
	b.takeDamage(20);
	std::cout << std::endl;
	// a.attack("Vincent");
	b.takeDamage(20);

	for (int i = 0; i < 2; i++)
	{
		std::cout << std::endl;
		b.beRepaired(50);
	}
	
	// a.attack("Vincent");
	std::cout << std::endl;
	b.beRepaired(40);
	b.whoAmI();
	std::cout << std::endl;
	return (0);
}

// More tests
