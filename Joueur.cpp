#include "Joueur.h"


Joueur::Joueur(std::string nom, std::string position, int partieJouee, int nombreBut, int assist, int points, float salaire, std::string equipeReel, std::string nationalite):
    m_nomComplet(nom),m_positionJoueur(position), m_partieJouee(partieJouee),m_nombreButs(nombreBut),
    m_assist(assist),m_nombrePoints(points),m_salaire(salaire),
    m_equipeReel(equipeReel),m_nationalite(nationalite)
{
}

std::string Joueur::getNomComplet() const
{
    return m_nomComplet;
}

std::string Joueur::getPosition() const
{
    return m_positionJoueur;
}

int Joueur::getPartiJoueur() const
{
    return m_partieJouee;
}

int Joueur::getAssist() const
{
    return m_assist;
}

std::string Joueur::getEquipeReel() const
{
    return m_equipeReel;
}

std::string Joueur::getNationalite() const
{
    return m_nationalite;
}

int Joueur::getNombreButs() const
{
    return m_nombreButs;
}

int Joueur::getNombrePoints() const
{
    return m_nombrePoints;
}

float Joueur::getSalaire() const
{
    return m_salaire;
}
