#include "ClapTrap.hpp"

int	main()
{
	ClapTrap leclerc ("Leclerc"); // constructeur w/ nom cf sujet
	ClapTrap hamilton (leclerc); //constructeur de copie
	ClapTrap verstappen ("Verstappen");
	ClapTrap piastri ("Piastri");
	ClapTrap russel ("Russel");
	verstappen = russel; //opé d'affectation

	verstappen.attack("Piastri");
	piastri.takeDamage(33);
	piastri.attack("verstappen");
	verstappen.takeDamage(81);
	verstappen.beRepaired(3);
	verstappen.attack("hamilton");


	hamilton.attack("leclerc");
	leclerc.takeDamage(16);



	return 0;
}