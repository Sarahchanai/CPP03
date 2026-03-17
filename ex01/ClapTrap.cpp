#include "ClapTrap.hpp"

// ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
// {
//     std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
// }

ClapTrap::ClapTrap()
{
	_name = "Default";
    _hitPoints = 10; // vies de départ du robot
    _energyPoints = 10;
    _attackDamage = 0;

    std::cout << "ClapTrap " << _name << " default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Claptrap " << _name << " default destructor called" << std::endl;
}

ClapTrap::ClapTrap (const std::string&	name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& original)
: _name(original._name),
  _hitPoints(original._hitPoints),
  _energyPoints(original._energyPoints),
  _attackDamage(original._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &original)
    {
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
    }
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack, no energy or life left!" << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl; // cf sujet
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount >= (unsigned int) _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;

	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! HP left : " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair, no energy or life left!" << std::endl;
		return;
	}

	_hitPoints += amount;
	_energyPoints --;

	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " HP! HP now: " << _hitPoints << std::endl;
}

