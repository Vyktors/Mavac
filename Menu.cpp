
#include <iostream>
#include "Menu.h"
#include "Salon.h"

using namespace std;


bool Menu::isInteger(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

Menu::Menu(Salon* salon):m_salon(salon)
{
}

void Menu::afficherMenuPrincipal()
{

	cout << "#############################################" << endl;
	cout << "# MENU PRINCIPAL - Salon #1				 #" << endl;
	cout << "#############################################" << endl;
	cout << "| 1- Quitter" << endl;
	cout << "| 2- Ajouter un membre dans le salon" << endl;
	cout << "| 3- Opération sur la BD joueur" << endl;			// Facade :  Sous-menu pour avoir les infos d'un joueur
	cout << "| 4- Modifier les stats d'un joueur" << endl;		// Observer
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

void Menu::ajouterUnMembre()
{
	system("cls");

}
