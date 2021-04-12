#ifndef FACTORYMEMBRE_H
#define FACTORYMEMBRE_H

class Membre;
enum TypeMembre;

class FactoryMembre
{
public:
	FactoryMembre();
	Membre* creerUnMembre(TypeMembre typeMembreACreer);
};

#endif