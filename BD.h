#ifndef BD_H
#define BD_H

#include <vector>
#include "FactoryMembre.h"
#include "Hote.h"
#include "Participant.h"
#include "utilitaire.h"
#include "Joueur.h"
#include "SouscripteurInterface.h"
// Juste pour les joueurs de Hockey

class SouscripteurInterface;

class BD
{
private:
	// Liste de salon (qui contient la liste des joueurs)
	std::vector<Joueur*> m_listeJoueur;
	std::vector<SouscripteurInterface*> m_listeSouscripteur;

public:
	void ajouterUnSouscripteur(SouscripteurInterface* souscripteur);
	int getPositionJoueurParNom(std::string nom);
	Joueur* getJoueurParPositionVecteur(int positionJoueur);
	void modifierJoueurParPositionVecteur(Joueur* nouveauJoueur,int positionJoueur);
	void supprimerJoueurParPositionVecteur(int positionJoueur);
	void ajouterJoueur(Joueur* joueurAAjouter);
	void ajouterJoueurBrut(string nom, string position, int partieJouer, int nombreBut, int assist, int points, float salaire, string equipeReel, string nationalite);
	void InitialiserBD();

	void notifierLesSouscripteurs(std::string message);

	~BD();
};


#endif
