#include "Menu.h"
#include <iostream>

using namespace std;

bool Menu::isInteger(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

void Menu::afficherMenuPrincipal()
{

	cout << "#############################################" << endl;
	cout << "#            MENU PRINCIPAL				 #" << endl;
	cout << "#############################################" << endl;
	cout << "| 1- Quitter" << endl;
	cout << "| 2- " << endl;
	cout << "| 3- " << endl;
	cout << "| 4- " << endl;
	cout << "#############################################" << endl << endl;
}

int Menu::demanderUnNombre(int minimum, int maximum)
{
	string choix;
	bool sortirDeBoucle = false;
	do
	{
		cout << "Votre choix (entre " << minimum << " et " << maximum << "): ";
		cin >> choix;
		if (!isInteger(choix))
		{
			cout << "**Erreur: Vous devez entrer un nombre entier**" << endl;
			system("pause");
		}
		else if (isInteger(choix) < minimum || isInteger(choix) > maximum)
		{
			cout << "**Erreur: Vous devez entrer un nombre entre" << minimum << " et " << maximum << "**" << endl;
			system("pause");
		}
		else
		{
			sortirDeBoucle = true;
		}
	} 
	while (!sortirDeBoucle);
	return atoi(choix.c_str());
}
