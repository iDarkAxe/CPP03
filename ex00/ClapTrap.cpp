/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:28:12 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/10 17:12:41 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
	std::cout << "ClapTrap " << this->_name << " copie les caractéristiques de ClapTrap" << f._name << std::endl;
	*this = f;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap " << this->_name << " prends les caractéristiques de ClapTrap" << other._name << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack, because it doesn't have any remaining energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " dies from damage" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage, causing him to have only " << this->_hit_points << " remaining points!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name << " is being repaired" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't be repaired, because it doesn't have any remaining energy points" << std::endl;
}
