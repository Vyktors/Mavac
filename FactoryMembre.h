#ifndef FACTORYMEMBRE_H
#define FACTORYMEMBRE_H

#include "utilitaire.h"

class Membre;


class FactoryMembre
{
private:
	FactoryMembre() {}
	static FactoryMembre* m_instanceFactoryMembre;

public:
	Membre* creerUnMembre(TypeMembre typeMembreACreer);
	static FactoryMembre* getInstance();
};


#endif