#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <vector>
#include "Membre.h"
#include "Compte.h"
#include "Joueur.h"

enum TypeMembre;

class Participant: public Membre, public Compte
{
private:
	int m_idEquipe;
	float m_pointage;
	bool m_isEquipeValide = false;
	std::vector<Joueur> m_listeJoueur; //le vecteur de joueur va etre dans la bd (probleme peut regler avec reserve, ou utilise joeurID)

public:
	Participant();
	virtual TypeMembre getTypeMembre() override;

	// GETTERS
	int getIdEquipe()const;
	float getPointage()const;
	bool isEquipeValide()const;
	std::vector<Joueur> getListeJoueur()const;

	void ajouterUnJoueur(Joueur joueur);

};

#endif
