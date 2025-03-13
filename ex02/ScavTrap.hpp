#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		ScavTrap();

	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &f);
		ScavTrap &operator=(const ScavTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
};

# endif
