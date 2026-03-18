#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
// #include "ScavTrap.hpp"

class FragTrap : public ClapTrap
// FragTrap hérite de ClapTrap exactt comme ScavTrap
// FragTrap et ScavTrap = freres et enfants de ClapTrap
{
	public :
				FragTrap(); // constructeur par défaut
				~FragTrap();// destructeur
				FragTrap(const std::string& name);// constructeur avec nom -> cf sujet
				FragTrap(const FragTrap& original);// constructeur de copie

				FragTrap& operator=(const FragTrap& original); // opérateur d'affectation


					//NEW


    			void highFivesGuys(void); // fonction unique de FragTrap -> cf sujet

    // NB : attack(), takeDamage() et beRepaired() -> hérités de ClapTrap
};

#endif