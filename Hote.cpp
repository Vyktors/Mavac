#include "Hote.h"
#include "utilitaire.h"

Hote::Hote():Membre()
{
}

TypeMembre Hote::getTypeMembre()
{
    return TypeMembre::Membre_Hote;
}
