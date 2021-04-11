#include "Membre.h"

void Membre::setNomComplet(std::string nomComplet)
{
    m_nomComplet = nomComplet;
}

void Membre::setMotDePasse(std::string motDePasse)
{
    m_motDePasse = motDePasse;
}

void Membre::setEmail(std::string email)
{
    m_email = email;
}

void Membre::setTelephone(std::string telephone)
{
    m_telephone = telephone;
}

void Membre::setNomFacebook(std::string nomFacebook)
{
    m_nomFacebook = nomFacebook;
}

std::string Membre::getNomComplet() const
{
    return m_nomComplet;
}

std::string Membre::getMotDePasse() const
{
    return m_motDePasse;
}

std::string Membre::getEmail() const
{
    return  m_email;
}

std::string Membre::getTelephone() const
{
    return m_telephone;
}

std::string Membre::getNomFacebook() const
{
    return m_nomFacebook;
}
