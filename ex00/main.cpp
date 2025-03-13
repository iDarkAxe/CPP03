/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 15:02:40 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

// Mandatory
int main(void)
{
	ClapTrap a("Jimmy");
	ClapTrap b("Vincent");

	ClapTrap c("Karl");
	c = b;

	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	b.takeDamage(0);
	std::cout << std::endl;
	a.attack("Vincent");
	a.attack("Vincent");
	std::cout << std::endl;
	b.beRepaired(40);
	b.beRepaired(40);
	b.beRepaired(40);
	return (0);
}

// More tests
