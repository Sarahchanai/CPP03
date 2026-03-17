#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
// FragTrap hérite de ClapTrap exactement comme ScavTrap
{
public :
    FragTrap();                           // constructeur par défaut
    FragTrap(const std::string& name);    // constructeur avec nom → cf sujet
    FragTrap(const FragTrap& otherOne);   // constructeur de copie
    ~FragTrap();                          // destructeur

    FragTrap& operator=(const FragTrap& otherOne); // opérateur d'affectation

    void highFivesGuys(void); // fonction unique de FragTrap → cf sujet

    // NB : attack(), takeDamage() et beRepaired() sont hérités de ClapTrap
};

#endif