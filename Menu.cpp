
#include <iostream>
#include "Menu.h"

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
	//system("cls");
	int choix;
	Membre* nouveauMembre=NULL;
	FactoryMembre* laFactory;

	//Determiner si participant ou hote
	cout << "Le membre est-il ajoute en tant que participant ou hote? (0 = participant, 1 = hote) ";
	choix = demanderUnNombre(0, 1);
	laFactory = FactoryMembre::getInstance();

	switch (choix)
	{
	case 0:
		nouveauMembre = laFactory->creerUnMembre(Membre_Participant);
		cout << "Membre participant cree!" << endl;
		break;
	case 1:
		nouveauMembre = laFactory->creerUnMembre(Membre_Hote);
		cout << "Membre hote cree!" << endl;
		break;
	default:
		break;
	}

	//Changer structure pour booleen si salon est plein???
	if(m_salon->ajouterUnParticipant(nouveauMembre)) {
		cout << "Membre ajoute avec succes au salon" << endl;
		
	}
	else {
		cout << "Le salon est plein, le membre n'a pu etre ajoute... Destruction du membre cree" << endl;
		delete nouveauMembre;
		
	}

	system("pause");

}


void Menu::operationBD() {
	int choix;
	afficherMenuBD();
	choix = demanderUnNombre(1, 3);

	switch (choix)
	{
	case 1:
		break;
	case 2:
		cout << "Ajouter" << endl;
		break;
	case 3:
		cout << "Supprimer" << endl;
		break;
	case 4:
		cout << "Supprimer" << endl;
		break;
	default:
		break;
	}

	system("pause");
}
void Menu::afficherMenuBD() {
	cout << "#############################################" << endl;
	cout << "# MENU BD - Salon #1				 #" << endl;
	cout << "#############################################" << endl;
	cout << "| 1- Quitter" << endl;		//RISQUES POSSIBLES?
	cout << "| 2- Afficher information d'un joueur" << endl;
	cout << "| 3- Ajouter un joueur" << endl;
	cout << "| 4- Supprimer un joueur" << endl;		//RISQUES POSSIBLES?
	//Modifier les stats serait option 4?
	cout << "#############################################" << endl << endl;
}