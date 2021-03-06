#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	{
		ClapTrap clapTrap("bibi");
		ClapTrap recop(clapTrap);
		for (int i = 0; i < 11; i++)
			recop.beRepaired(1);
		recop.takeDamage(20);
		recop.beRepaired(10);
		std::cout <<"claptrap EnergyPoints = "<< clapTrap.getEnergyPoints() << std::endl;
		std::cout <<"recop EnergyPoints = "<< recop.getEnergyPoints() << std::endl;

	}
	std::cout << "-----------------------------------------------------------------" <<std::endl;
	{
		ClapTrap clapTrap("Roger");
		clapTrap.attack("Dov");
		clapTrap.beRepaired(10);
		std::cout << "Energie points: " << clapTrap.getEnergyPoints() << std::endl;
	}
	std::cout << "-----------------------------------------------------------------" <<std::endl;
	{
		ClapTrap clapTrap("Roky");
		clapTrap.attack("Dov");
		for (int i = 0; i < 10; i++)
			clapTrap.attack("Dov");
		clapTrap.takeDamage(10);
		clapTrap.attack("Dov");
	}
	std::cout << "-----------------------------------------------------------------" <<std::endl;
	{
		ClapTrap clapTrap("Bob");
		for (int i = 0; i < 11; i++)
			clapTrap.beRepaired(1);
		clapTrap.takeDamage(20);
		clapTrap.beRepaired(10);
	}
	return 0;
}
