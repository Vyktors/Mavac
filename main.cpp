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

	//Creer un salon et BD par défaut
	BD laBD;
	laBD.InitialiserBD();

	Salon leSalon("salonTest", 10, 5, "Ouvert", "Aleatoire", "AttaquantSeulement");




	Menu menu(&leSalon, &laBD);

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
			menu.ajouterUnMembre();
			break;
		case 3:
			menu.operationBD();
			break;
		case 4:
			break;
		default:
			break;
		}


	} while (continuer);
	

	system("pause");
}