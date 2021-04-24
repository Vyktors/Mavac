#ifndef MENU_H
#define MENU_H

#include <string>
#include "utilitaire.h"
#include "FactoryMembre.h"
#include "Salon.h"
#include "Joueur.h"
#include "BD.h"
#include "SouscripteurInterface.h"
#include <vector>
class Salon;

class Menu: public SouscripteurInterface
{
private:
	bool isInteger(const std::string& s);
	Salon* m_salon;
	BD* m_BD;
	std::vector<std::string> m_listeNotification;

public:
	Menu(Salon* salon, BD*);
	void afficherMenuPrincipal();
	int demanderUnNombre(int minimum, int maximum);
	void ajouterUnMembre();
	void operationBD();
	void afficherMenuBD();

	//Operations de BD
	int recupJoueurIndex();
	Joueur* creerUnNouveauJoueur();
	void ajouterJoueur(Joueur* joueurAAjouter);
	void afficherJoueur();
	void modifierJoueur();
	void supprimerJoueur();

	virtual void miseAJour(std::string message) override;
};

#endif
