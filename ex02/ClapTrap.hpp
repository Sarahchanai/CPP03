#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>


//NB : claptrap = robot jeu vidéo 

class	ClapTrap
{

	public :

				ClapTrap(); // constructeur par défaut
				~ClapTrap(); // destru par déf

				ClapTrap(const std::string&	name); // Constructeur -> imposé, cf sujet

				ClapTrap (const	ClapTrap& original); //constructeur de copie
				//syntaxe : Claptrap = appel de la classe
				//			const = ps touche à l'original
				// 			Claptrap& = letcure directe ds l'original
				

				ClapTrap&	operator= (const ClapTrap& original); // opé d'affecta°
				//syntaxe : Claptrap& = modif de mon objet modifié
				//			operator= = redef
				//			const = ps touche à l'original
				//			Claptrap& = lecture directe de l'original



				void	attack(const std::string& target); // cf sujet -> attaque qqlq
				void	takeDamage(unsigned int amount); // cf sujet -> perd des points de vie
				void	beRepaired(unsigned int amount); // cf sujet -> récup des points de vie




	protected : //NB CHANGT !

				std::string	_name; // imposé, cf sujet
				int	_hitPoints; // imposé, cf sujet
				int	_energyPoints; // imposé, cf sujet
				int	_attackDamage; // imposé, cf sujet


};




#endif