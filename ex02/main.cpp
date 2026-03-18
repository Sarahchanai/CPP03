#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n CLAPTRAP CONSTRUCTORS \n" << std::endl;
	ClapTrap leclerc("Leclerc");
	ClapTrap hamilton("Hamilton");

	std::cout << "\n SCAVTRAP CONSTRUCTORS \n" << std::endl;
	ScavTrap verstappen("Verstappen");
	ScavTrap piastri("Piastri");

	std::cout << "\n FRAGTRAP CONSTRUCTORS \n" << std::endl;
	FragTrap norris("Norris");
	FragTrap alonso("Alonso");

	std::cout << "\n COPY CONSTRUCTOR\n" << std::endl;
	FragTrap clone(norris);

	std::cout << "\n OPERATEUR D AFFECTATION\n" << std::endl;
	FragTrap sainz("Sainz");
	sainz = alonso;

	std::cout << "\n TESTS ACTIONS CLAPTRAP\n" << std::endl;
	leclerc.attack("Hamilton");
	hamilton.takeDamage(5);
	hamilton.beRepaired(3);

	std::cout << "\n TESTS ACTIONS SCAVTRAP\n" << std::endl;
	verstappen.attack("Piastri");
	piastri.takeDamage(120); // fonct heritee de claptrap pas de redef
	piastri.attack("Verstappen");
	verstappen.beRepaired(10); //fonct heritee de claptrap pas de redef
	verstappen.guardGate();  // specifique ScavTrap

	std::cout << "\n TESTS ACTIONS FRAGTRAP\n" << std::endl;
	norris.attack("Verstappen");
	alonso.takeDamage(150);
	alonso.attack("Norris");
	norris.beRepaired(20);
	norris.highFivesGuys(); // specifique FragTrap

	std::cout << "\n DESTRUCTION\n" << std::endl;
	return 0;
}
