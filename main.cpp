#include "Menu.h"

using namespace std;

int main()
{
	Menu menu;

	menu.afficherMenuPrincipal();
	
	cout << endl << "Votre choix: " << menu.demanderUnNombre(1, 4);
}