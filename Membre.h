#ifndef MEMBRE_H
#define MEMBRE_H

#include <string>
#include "utilitaire.h"


class Membre
{
private:
	std::string m_nomComplet;
	std::string m_motDePasse;
	std::string m_email;
	std::string m_telephone;
	std::string m_nomFacebook;
	TypeMembre m_typeMembre;		// Enum qui permet de savoir si c'est une hote ou un participant

public:
	virtual TypeMembre getTypeMembre() = 0;
	void setNomComplet(std::string nomComplet);
	void setMotDePasse(std::string motDePasse);
	void setEmail(std::string email);
	void setTelephone(std::string telephone);
	void setNomFacebook(std::string nomFacebook);

	std::string getNomComplet()const;
	std::string getMotDePasse()const;
	std::string getEmail()const;
	std::string getTelephone()const;
	std::string getNomFacebook()const;
};

#endif