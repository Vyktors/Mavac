#include "FactoryMembre.h"

#include "Hote.h"
#include "Participant.h"
#include "utilitaire.h"

FactoryMembre::FactoryMembre()
{
}

Membre* FactoryMembre::creerUnMembre(TypeMembre typeMembreACreer)
{
	Membre* nouveauMembre = NULL;

	/*
	if (typeMembreACreer == TypeMembre::Hote)
	{
		nouveauMembre = new Hote();
	}
	else
	{
		nouveauMembre = new Participant();
	}*/

	return nouveauMembre;
}
