#include "BD.h"
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
	

	system("pause");
}