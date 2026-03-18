#include "ClapTrap.hpp"

int main()
{
	std::cout << "\n CONSTRUCTORS \n" << std::endl;
	
	ClapTrap hadjar; //constructeur par defaut
	ClapTrap leclerc("Leclerc");
	ClapTrap hamilton("Hamilton");
	ClapTrap verstappen("Verstappen");
	ClapTrap piastri("Piastri");
	ClapTrap russel("Russel");

	std::cout << "\n COPY CONSTRUCTOR\n" << std::endl;
	ClapTrap clone(leclerc); //dernier obj cree

	std::cout << "\n OPERATEUR D AFFECTATION\n" << std::endl;
	russel = verstappen;

	std::cout << "\n TESTS ACTIONS\n" << std::endl;
	verstappen.attack("Piastri");   // "Verstappen attacks Piastri"
	piastri.takeDamage(33);
	piastri.attack("Verstappen");   // piastri à 0 HP → can't attack
	verstappen.takeDamage(81);
	verstappen.beRepaired(3);       // verstappen à 0 HP → can't repair
	verstappen.attack("Hamilton");  // can't attack
	hamilton.attack("Leclerc");     // "Hamilton attacks leclerc" ✓
	leclerc.takeDamage(16);

	std::cout << "\n DESTRUCTION\n" << std::endl;



	
	return 0;
}