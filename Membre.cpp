#include "Membre.h"
#include "utilitaire.h"

Membre::Membre(TypeMembre leType):m_typeMembre(leType)
{
}



/// <summary>
/// Permet de r�cup�rer sous format string le type de membre
/// </summary>
/// <param name="typeMembre">TypeMembre typeMembre</param>
/// <returns>std::string typeMembre sous format string</returns>
std::string Membre::getTypeMembreToString(TypeMembre typeMembre)
{
    std::string typeMembreString = "Participant";       // Par d�faut
    if (typeMembre == TypeMembre::Membre_Hote)
    {
        typeMembreString = "Hote";
    }

    return typeMembreString;
}
