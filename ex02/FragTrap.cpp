#include "FragTrap.hpp"


FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints    = 100; //cf sujet
	_energyPoints = 100; //cf sujet
	_attackDamage = 30; //cf sujet
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hitPoints    = 100; // écrase les 10 de ClapTrap
	_energyPoints = 100; // écrase les 10 de ClapTrap
	_attackDamage = 30;// écrase les 0 de ClapTrap
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
	std::cout << "FragTrap " << _name << " copy constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& original)
{
	if (this != &original)
		ClapTrap::operator=(original);

	std::cout << "FragTrap " << _name << " copy assignment called" << std::endl;
	return (*this);
}


void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}