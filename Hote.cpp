#include "Hote.h"
#include "utilitaire.h"

Hote::Hote():Membre()
{
}

TypeMembre Hote::getTypeMembre()
{
    return TypeMembre::Hote;
}
