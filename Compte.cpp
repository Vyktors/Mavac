#include "Compte.h"


Compte::Compte(string nomComplet, string motDePasse, string email, string telephone, string nomFacebook){

}

void Compte::setNomComplet(std::string nomComplet)
{
    m_nomComplet = nomComplet;
}

void Compte::setMotDePasse(std::string motDePasse)
{
    m_motDePasse = motDePasse;
}

void Compte::setEmail(std::string email)
{
    m_email = email;
}

void Compte::setTelephone(std::string telephone)
{
    m_telephone = telephone;
}

void Compte::setNomFacebook(std::string nomFacebook)
{
    m_nomFacebook = nomFacebook;
}

std::string Compte::getNomComplet() const
{
    return m_nomComplet;
}

std::string Compte::getMotDePasse() const
{
    return m_motDePasse;
}

std::string Compte::getEmail() const
{
    return  m_email;
}

std::string Compte::getTelephone() const
{
    return m_telephone;
}

std::string Compte::getNomFacebook() const
{
    return m_nomFacebook;
}