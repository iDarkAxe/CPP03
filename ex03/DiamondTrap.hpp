#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
		using FragTrap::_hit_points;
		using ScavTrap::_energy_points;
		using FragTrap::_attack_damage;
		DiamondTrap();

	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &f);
		DiamondTrap &operator=(const DiamondTrap &other);

		using FragTrap::attack;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void whoAmI();
};

# endif
