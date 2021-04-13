#include "FactoryMembre.h"

#include "Hote.h"
#include "Participant.h"
#include "utilitaire.h"


FactoryMembre* FactoryMembre::m_instanceFactoryMembre = nullptr;

Membre* FactoryMembre::creerUnMembre(TypeMembre typeMembreACreer)
{
	Membre* nouveauMembre = NULL;
	
	if (typeMembreACreer == TypeMembre::Membre_Hote)
	{
		nouveauMembre = new Hote();
	}
	else
	{
		nouveauMembre = new Participant();
	}

	return nouveauMembre;
}

FactoryMembre* FactoryMembre::getInstance()
{
	if (m_instanceFactoryMembre == nullptr)
	{
		m_instanceFactoryMembre = new FactoryMembre();
	}
	return m_instanceFactoryMembre;
}


