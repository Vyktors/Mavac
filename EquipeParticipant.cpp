#include "EquipeParticipant.h"

EquipeParticipant::EquipeParticipant(int idEquipe)
{
}

int EquipeParticipant::getIdEquipe() const
{
    return m_idEquipe;
}

float EquipeParticipant::getPointage() const
{
    return m_pointage;
}

bool EquipeParticipant::isEquipeValide() const
{
    return m_isEquipeValide;
}

std::vector<Joueur> EquipeParticipant::getListeJoueur() const
{
    return m_listeJoueur;
}
