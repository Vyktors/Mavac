#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>

class Joueur
{
private:
	std::string m_nomComplet;
	std::string m_positionJoueur;
	int m_partieJouee;
	int m_nombreButs;
	int m_assist;
	int m_nombrePoints;
	float m_salaire;
	std::string m_equipeReel;
	std::string m_nationalite;

public:
	Joueur(std::string nom, std::string position, int partieJouee, int nombreBut, int assist,int points, float salaire, std::string equipeReel, std::string nationalite);

	// GETTERS
	std::string getNomComplet()const;
	std::string getPosition()const;
	int getPartiJoueur()const;
	int getAssist()const;
	std::string getEquipeReel()const;
	std::string getNationalite()const;
	int getNombreButs()const;
	int getNombrePoints()const;
	float getSalaire()const;
};


#endif
