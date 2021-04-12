#ifndef HOTE_H
#define HOTE_H
#include "Membre.h"
#include "utilitaire.h"

class Hote: public Membre
{
public:
	virtual TypeMembre getTypeMembre() override;
};

#endif

