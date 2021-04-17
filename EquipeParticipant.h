#ifndef EQUIPEPARTICIPANT_H
#define EQUIPEPARTICIPANT_H

#include <string>
#include <vector>

#include "Joueur.h"

class EquipeParticipant
{
private:
	int m_idEquipe;
	float m_pointage;
	bool m_isEquipeValide = false;
	std::vector<class Joueur> m_listeJoueur;

public:
	EquipeParticipant(int idEquipe);

	// GETTERS
	int getIdEquipe()const;
	float getPointage()const;
	bool isEquipeValide()const;
	std::vector<Joueur> getListeJoueur()const;

	// SETTERS


};

#endif
