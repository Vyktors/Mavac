#include "Hote.h"
#include "utilitaire.h"

Hote::Hote():Membre(Membre_Hote)
{
}

TypeMembre Hote::getTypeMembre()
{
    return TypeMembre::Membre_Hote;
}
