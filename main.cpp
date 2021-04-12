#include "Menu.h"

using namespace std;

int main()
{
	Menu menu;

	do
	{
		system("cls");
		menu.afficherMenuPrincipal();
		cout << endl << "Votre choix: ";

		
	} while (menu.demanderUnNombre(1, 4) != 1);

}