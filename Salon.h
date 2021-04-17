#ifndef SALON_H
#define SALON_H

#include <string>
#include <vector>

#include "FactoryMembre.h"

class Joueur;
class FactoryMembre;

class Salon
{
private:
	int m_nombreParticipantMax;
	int m_nombreJoueurMax;
	std::string m_etat;
	std::string m_nomSalon;
	std::string m_methodeTirage;
	std::string m_restrictionEquipe;
	//FactoryMembre factoryMembre;
	std::vector<class Membre*> m_listeParticipant;

public:
	Salon(std::string nomSalon, int nombreParticipantMax, int nombreJoueurMax, std::string etat, std::string methodeTirage, std::string restrictionEquipe);

	// GETTERS
	int getNombreParticipantMax()const;
	int getNombreJoueurMax()const;
	std::string getEtat()const;
	std::string getNomSalon()const;
	std::string getMethodeTirage() const;
	std::string getRestrictionEquipe() const;
	std::vector<class Membre*> getListeParticipant();

	// SETTERS
	void ajouterUnParticipant(class Membre* participant);
};

#endif