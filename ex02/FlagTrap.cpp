#include "FragTrap.hpp"

// ─────────────────────────────────────────────────────────
// Constructeur par défaut
// → ClapTrap se construit en 1er, FragTrap écrase ses valeurs
// ─────────────────────────────────────────────────────────
FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints    = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

// ─────────────────────────────────────────────────────────
// Constructeur avec nom
// → appelle ClapTrap(name) en 1er puis écrase les valeurs
// ─────────────────────────────────────────────────────────
FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints    = 100;  // écrase les 10 de ClapTrap
    _energyPoints = 100;  // écrase les 10 de ClapTrap
    _attackDamage = 30;   // écrase les 0 de ClapTrap
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

// ─────────────────────────────────────────────────────────
// Constructeur de copie
// → appelle ClapTrap copy constructor en 1er
// ─────────────────────────────────────────────────────────
FragTrap::FragTrap(const FragTrap& otherOne) : ClapTrap(otherOne)
{
    std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}

// ─────────────────────────────────────────────────────────
// Destructeur
// → FragTrap se détruit en 1er, ClapTrap après automatiquement
// ─────────────────────────────────────────────────────────
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

// ─────────────────────────────────────────────────────────
// Opérateur d'affectation
// → appelle l'opérateur d'affectation de ClapTrap
// ─────────────────────────────────────────────────────────
FragTrap& FragTrap::operator=(const FragTrap& otherOne)
{
    if (this != &otherOne)
        ClapTrap::operator=(otherOne);
    std::cout << "FragTrap " << _name << " copy assignment called" << std::endl;
    return (*this);
}

// ─────────────────────────────────────────────────────────
// highFivesGuys() → fonction unique de FragTrap
// ─────────────────────────────────────────────────────────
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}