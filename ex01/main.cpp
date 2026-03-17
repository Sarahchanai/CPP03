#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	std::cout << "\n ClapTrap " << std::endl;
	ClapTrap leclerc("Leclerc");
	leclerc.attack("Verstappen");
	leclerc.takeDamage(5);
	leclerc.beRepaired(3);

	std::cout << "\n ScavTrap" << std::endl;
	ScavTrap hamilton("Hamilton"); // ClapTrap construit en 1er, ScavTrap après
	hamilton.attack("Leclerc"); // mess != de ClapTrap
	hamilton.takeDamage(20); // hérité de ClapTrap
	hamilton.beRepaired(10); // hérité de ClapTrap
	hamilton.guardGate(); //propre à scavtrap

	std::cout << "\n Copy Constructor" << std::endl;
	ScavTrap verstappen(hamilton); 

	std::cout << "\n Copy Assignment" << std::endl;
	ScavTrap piastri;
	piastri = hamilton;

	std::cout << "\n Destruc° " << std::endl;

	return 0;
}