#include "Salon.h"

Salon::Salon(std::string nomSalon, int nombreParticipantMax, int nombreJoueurMax, std::string etat, std::string methodeTirage, std::string restrictionEquipe):
    m_nomSalon(nomSalon),m_nombreParticipantMax(nombreParticipantMax),m_nombreJoueurMax(nombreJoueurMax),
    m_methodeTirage(methodeTirage),m_restrictionEquipe(restrictionEquipe)
{

}

int Salon::getNombreParticipantMax() const
{
    return m_nombreParticipantMax;
}

int Salon::getNombreJoueurMax() const
{
    return m_nombreJoueurMax;
}

std::string Salon::getEtat() const
{
    return m_etat;
}

std::string Salon::getNomSalon() const
{
    return m_nomSalon;
}

std::string Salon::getMethodeTirage() const
{
    return m_methodeTirage;
}

std::string Salon::getRestrictionEquipe() const
{
    return m_restrictionEquipe;
}

std::vector<class Membre*> Salon::getListeParticipant()
{
    return m_listeParticipant;
}

void Salon::ajouterUnParticipant(Membre* participant)
{
    // On ajoute seulement si on ne dépasse pas le nombre de participant maximal
    if (m_listeParticipant.size() + 1 <= m_nombreParticipantMax)
    {
        m_listeParticipant.push_back(participant);
    }
}
