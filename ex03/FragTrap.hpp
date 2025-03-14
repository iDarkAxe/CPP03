#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		FragTrap();

	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap &f);
		FragTrap &operator=(const FragTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys(void);
};

# endif
