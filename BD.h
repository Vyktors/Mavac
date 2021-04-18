#ifndef BD_H
#define BD_H

#include <vector>
#include "FactoryMembre.h"
#include "Menu.h"
#include "Hote.h"
#include "Participant.h"
#include "utilitaire.h"

// Juste pour les joueurs de Hockey

class BD
{
private:
	// Liste de salon (qui contient la liste des joueurs)
	std::vector<Joueur*> m_listeMembres;

public:
	int getPositionJoueurParNom(std::string nom);
	Joueur* getJoueurParPositionVecteur(int positionJoueur);
	void modifierJoueurParPositionVecteur(Joueur* nouveauJoueur,int positionJoueur);
	void supprimerJoueurParPositionVecteur(int positionJoueur);
};


#endif
