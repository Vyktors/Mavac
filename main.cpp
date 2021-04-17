#include "BD.h"
#include "Salon.h"
#include "Menu.h"
#include "Compte.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Creer un array de comptes (Pas fait finalement, on va garder ça simple)
	//vector<Compte> lesComptes;

	//Creer un salon
	Salon leSalon("salonTest", 10, 5, "Ouvert", "Aleatoire", "AttaquantSeulement");


	Menu menu(&leSalon);

	bool continuer = true;

	do
	{
		system("cls");
		menu.afficherMenuPrincipal();
		switch (menu.demanderUnNombre(1,4))
		{
		case 1:
			continuer = false;
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			break;
		}


	} while (continuer);
	

	system("pause");
}