/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:24:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 15:21:21 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap("_unnamed_"), ScavTrap("_unnamed_")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->ClapTrap::_name = this->DiamondTrap::_name + "_clap_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->DiamondTrap::_name + "_clap_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &f)  : FragTrap("_unnamed_"), ScavTrap("_unnamed_")
{
	std::cout << "DiamondTrap " << this->_name << " copie les caractéristiques de DiamondTrap" << f._name << std::endl;
	*this = f;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap " << this->_name << " prends les caractéristiques de DiamondTrap" << other._name << std::endl;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_hit_points = other._hit_points;
	return (*this);
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "DiamondTrap " << this->_name << " dies from damage" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "DiamondTrap " << this->_name << " takes " << amount << " damage, causing him to have only " << this->_hit_points << " remaining points!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "DiamondTrap " << this->_name << " is being repaired " << amount << " points, total hit_points is "<< this->_hit_points << std::endl;
	}
	else
		std::cout << "DiamondTrap " << this->_name << " can't be repaired, because it doesn't have any remaining energy points" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this->DiamondTrap::_name << " has a ClapTrap name "<< this->ClapTrap::_name << std::endl;
}
