#include "Participant.h"
#include "utilitaire.h"

Participant::Participant(): Membre(Membre_Participant)
{

}

TypeMembre Participant::getTypeMembre()
{
    return TypeMembre::Membre_Participant;
}

//int Participant::getIdEquipe() const
//{
//    return m_idEquipe;
//}

float Participant::getPointage() const
{
    return m_pointage;
}

bool Participant::isEquipeValide() const
{
    return m_isEquipeValide;
}

std::vector<Joueur> Participant::getListeJoueur() const
{
    return m_listeJoueur;
}

void Participant::ajouterUnJoueur(Joueur joueur)
{
    m_listeJoueur.push_back(joueur);
}
