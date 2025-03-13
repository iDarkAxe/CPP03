/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:24:42 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/13 14:32:14 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("_unnamed_")
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f)  : ClapTrap("_unnamed_")
{
	std::cout << "FragTrap " << this->_name << " copie les caractéristiques de FragTrap" << f._name << std::endl;
	*this = f;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap " << this->_name << " prends les caractéristiques de FragTrap" << other._name << std::endl;
	this->_attack_damage = other._attack_damage;
	this->_energy_points = other._energy_points;
	this->_hit_points = other._hit_points;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't attack, because it doesn't have any remaining energy points" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "FragTrap " << this->_name << " dies from damage" << std::endl;
		return;
	}
	this->_hit_points -= amount;
	std::cout << "FragTrap " << this->_name << " takes " << amount << " damage, causing him to have only " << this->_hit_points << " remaining points!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "FragTrap " << this->_name << " is being repaired " << amount << " points, total hit_points is "<< this->_hit_points << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " can't be repaired, because it doesn't have any remaining energy points" << std::endl;
}

void FragTrap:: highFivesGuys()
{
	std::string str1;
	std::cout << "FragTrap " << this->_name << " wants to high five" << std::endl;
	getline(std::cin, str1);
	if (str1 == "OK" || str1 == "YES")
		std::cout << "FragTrap " << this->_name << " is happy !" << std::endl;
	else if (str1 == "NO" || str1 == "NEVER")
		std::cout << "FragTrap " << this->_name << " could have been happier if you didn't refused !" << std::endl;
	else
		std::cout <<"FragTrap " << this->_name << " didn't understood your answer..." << std::endl; 
}
