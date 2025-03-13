#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:

	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
		ClapTrap();

	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &f);
		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

# endif
