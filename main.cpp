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
	BD* laBD = new BD();
	Salon* leSalon = new Salon("salonTest", 10, 5, "Ouvert", "Aleatoire", "AttaquantSeulement");
	Menu* menu = new Menu(leSalon, laBD);

	// Initialisation de l'observateur et de la BD
	laBD->ajouterUnSouscripteur(menu);
	laBD->InitialiserBD();


	bool continuer = true;

	do
	{
		menu->afficherMenuPrincipal();
		switch (menu->demanderUnNombre(1,4))
		{
		case 1:
			continuer = false;
			break;
		case 2:
			menu->ajouterUnMembre();
			break;
		case 3:
			menu->operationBD();
			break;
		case 4:
			break;
		default:
			break;
		}


	} while (continuer);
	

	system("pause");

	delete laBD;
	delete leSalon;
}