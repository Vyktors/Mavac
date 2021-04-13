#ifndef FACTORYMEMBRE_H
#define FACTORYMEMBRE_H

class Membre;
enum TypeMembre;

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