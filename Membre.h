#ifndef MEMBRE_H
#define MEMBRE_H

#include <string>
enum TypeMembre;

class Membre
{
private:
	TypeMembre m_typeMembre;		// Enum qui permet de savoir si c'est une hote ou un participant

public:
	Membre();
	virtual TypeMembre getTypeMembre() = 0;
	

	//Méthode statique utilisable n'importe ou dans le programme pour convertir le type TypeMembre sous format string
	static std::string getTypeMembreToString(TypeMembre typeMembre);
};

#endif