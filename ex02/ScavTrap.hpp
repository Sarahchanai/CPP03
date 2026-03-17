#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp" //pr que ScavTrap connaisse ClapTrap

class	ScavTrap : public ClapTrap // syntaxe héritage
{
	public :
				ScavTrap(); // constructeur par défaut
				~ScavTrap(); // destru par déf

				ScavTrap(const std::string&	name); // Constructeur -> imposé, cf sujet

				ScavTrap (const	ScavTrap& original); //constructeur de copie
				//syntaxe : ScavTrap = appel de la classe
				//			const = ps touche à l'original
				// 			Scavtrap& = lecture directe ds l'original
				

				ScavTrap&	operator= (const ScavTrap& original); // opé d'affecta°
				//syntaxe : Scavtrap& = modif de mon objet modifié
				//			operator= = redef
				//			const = ps touche à l'original
				//			Scavtrap& = lecture directe de l'original

				

								//NEW ONES
				void attack(const std::string& target); // redef° -> != mess
				
				void guardGate(); // cf sujet



};



#endif