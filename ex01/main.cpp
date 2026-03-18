#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	std::cout << "\n CLAPTRAP CONSTRUCTORS \n" << std::endl;
	ClapTrap leclerc("Leclerc");
	ClapTrap hamilton("Hamilton");

	std::cout << "\n SCAVTRAP CONSTRUCTORS \n" << std::endl;
	ScavTrap verstappen("Verstappen"); //1e fils
	ScavTrap piastri("Piastri");//2eme fils

	std::cout << "\n COPY CONSTRUCTOR\n" << std::endl;
	ScavTrap clone(verstappen); //2eme fils

	std::cout << "\n OPERATEUR D AFFECTATION\n" << std::endl;
	ScavTrap russel("Russel"); // 3eme fils
	russel = piastri;

	std::cout << "\n TESTS ACTIONS CLAPTRAP\n" << std::endl;
	leclerc.attack("Hamilton");
	hamilton.takeDamage(5);
	hamilton.beRepaired(3);

	std::cout << "\n TESTS ACTIONS SCAVTRAP\n" << std::endl;
	verstappen.attack("Piastri");
	piastri.takeDamage(120);      // 0 HP
	piastri.attack("Verstappen"); // can't attack
	verstappen.beRepaired(10);
	verstappen.guardGate();       // specifique ScavTrap

	std::cout << "\n DESTRUCTION\n" << std::endl;

	return 0;
}