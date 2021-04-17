#ifndef COMPTE_H
#define COMPTE_H

#include <string>
using namespace std;

class Compte
{
private:
	std::string m_nomComplet;
	std::string m_motDePasse;
	std::string m_email;
	std::string m_telephone;
	std::string m_nomFacebook;

public:
	Compte(string, string, string, string, string);
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

