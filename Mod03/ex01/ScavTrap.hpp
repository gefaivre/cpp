#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &p);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &other);

	void attack(const std::string &target);
	void guardGate();

private:

	ScavTrap(void);
};

#endif