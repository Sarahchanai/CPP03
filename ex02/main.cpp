#include "FragTrap.hpp"


int main()
{
	std::cout << "\n CLAPTRAP (Red Bull ecurie mere) \n" << std::endl;

	ClapTrap redbull("RedBull");
	redbull.attack("RacingBulls");
	redbull.takeDamage(5);
	redbull.beRepaired(3);


	std::cout << "\n SCAVTRAP (Racing Bulls ecurie fille) \n" << std::endl;

	ScavTrap racingbulls("RacingBulls");
	racingbulls.attack("RedBull"); // attaque (version ScavTrap)
	racingbulls.takeDamage(20);// hérité
	racingbulls.beRepaired(10);// hérité
	racingbulls.guardGate();// propre a elle

	std::cout << "\n FRAGTRAP (Mercedes (ecurie fille aussi mais amelioree))\n" << std::endl;

	FragTrap mercedes("Mercedes");
	mercedes.attack("RedBull");
	mercedes.takeDamage(30);
	mercedes.beRepaired(15);
	mercedes.highFivesGuys(); // pouvoir spécial

	std::cout << "\n TEST COPIE (Mercedes clone)\n" << std::endl;

	FragTrap mercedes_copy(mercedes); // constructeur de copie
	mercedes_copy.attack("RacingBulls");

	std::cout << "\n TEST AFFECTATION\n" << std::endl;

	FragTrap mercedes2;
	mercedes2 = mercedes;// opé =
	mercedes2.attack("RedBull");

	std::cout << "\n DESTRUCTION\n" << std::endl;


	return 0;
}