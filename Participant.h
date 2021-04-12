#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "Membre.h"
enum TypeMembre;

class Participant: public Membre
{
public:
	Participant();
	virtual TypeMembre getTypeMembre() override;
};

#endif
