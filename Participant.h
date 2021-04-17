#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <vector>
#include "Membre.h"
#include "Compte.h"

enum TypeMembre;

class Participant: public Membre, public Compte
{

public:
	Participant();
	virtual TypeMembre getTypeMembre() override;
};

#endif
