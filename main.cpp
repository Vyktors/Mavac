#include "BD.h"
#include "Salon.h"
#include "Menu.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//Creer un array de comptes


	//Creer un salon
	Salon leSalon("salonTest", 10, 5, "Ouvert", "Aleatoire", "AttaquantSeulement");


	Menu menu(&leSalon);

	do
	{
		system("cls");
		menu.afficherMenuPrincipal();
		
	} while (menu.demanderUnNombre(1, 4) != 1);
	

	system("pause");
}