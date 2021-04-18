#ifndef MENU_H
#define MENU_H

#include <string>
#include "utilitaire.h"
#include "FactoryMembre.h"
#include "Salon.h"
#include "Joueur.h"
#include "BD.h"

class Salon;

class Menu
{
private:
	bool isInteger(const std::string& s);
	Salon* m_salon;
	BD* m_BD;

public:
	Menu(Salon* salon, BD*);
	void afficherMenuPrincipal();
	int demanderUnNombre(int minimum, int maximum);
	void ajouterUnMembre();
	void operationBD();
	void afficherMenuBD();

	//Operations de BD
	int recupJoueurIndex();
	void ajouterJoueur();
	void afficherJoueur();
	void modifierJoueur();
	void supprimerJoueur();
};

#endif
