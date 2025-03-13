/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:24:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 14:32:42 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("_unnamed_")
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f)  : ClapTrap("_unnamed_")
{
	std::cout << "ScavTrap " << this->_name << " copie les caractéristiques de ScavTrap" << f._name << std::endl;
	*this = f;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap " << this->_name << " prends les caractéristiques de ScavTrap" << other._name << std::endl;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_hit_points = other._hit_points;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't attack, because it doesn't have any remaining energy points" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "ScavTrap " << this->_name << " dies from damage" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "ScavTrap " << this->_name << " takes " << amount << " damage, causing him to have only " << this->_hit_points << " remaining points!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ScavTrap " << this->_name << " is being repaired " << amount << " points, total hit_points is "<< this->_hit_points << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " can't be repaired, because it doesn't have any remaining energy points" << std::endl;
}

void ScavTrap::guardGate()
{
		std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode" << std::endl;
}
