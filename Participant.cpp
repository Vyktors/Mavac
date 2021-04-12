#include "Participant.h"
#include "utilitaire.h"


Participant::Participant(): Membre()
{
}

TypeMembre Participant::getTypeMembre()
{
    return TypeMembre::Participant;
}
