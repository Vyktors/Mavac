#ifndef HOTE_H
#define HOTE_H

#include "Membre.h"
enum TypeMembre;

class Hote: public Membre
{
public:
	Hote();
	virtual TypeMembre getTypeMembre() override;
};

#endif

