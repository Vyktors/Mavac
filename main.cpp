
#include <vector>
#include "FactoryMembre.h"
#include "Menu.h"
#include "Hote.h"
#include "Participant.h"
#include "utilitaire.h"

#include <iostream>
using namespace std;

int main()
{
	Menu menu;

	do
	{
		system("cls");
		menu.afficherMenuPrincipal();
		
	} while (menu.demanderUnNombre(1, 4) != 1);
	
}