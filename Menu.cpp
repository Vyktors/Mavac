
#include <iostream>
#include "Menu.h"

using namespace std;

bool Menu::isInteger(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}



Menu::Menu(Salon* salon, BD* bd):m_salon(salon), m_BD(bd)
{
}

void Menu::afficherMenuPrincipal()
{

	cout << "#############################################" << endl;
	cout << "# MENU PRINCIPAL - Salon #1				 #" << endl;
	cout << "#############################################" << endl;
	cout << "| 1- Quitter" << endl;
	cout << "| 2- Ajouter un membre dans le salon" << endl;
	cout << "| 3- Operation sur la BD joueur" << endl;			// Facade :  Sous-menu pour avoir les infos d'un joueur
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
	Membre* nouveauMembre= nullptr;
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


void Menu::operationBD() 
{
	int choix;
	afficherMenuBD();
	choix = demanderUnNombre(1, 3);

	switch (choix)
	{
	case 1:
		break;
	case 2:
		afficherJoueur();
		break;
	case 3:
		ajouterJoueur(creerUnNouveauJoueur());
		break;
	case 4:
		modifierJoueur();
		break;
	case 5:
		supprimerJoueur();
		break;
	default:
		break;
	}

	system("pause");
}
void Menu::afficherMenuBD() 
{
	cout << "#############################################" << endl;
	cout << "# MENU BD - Salon #1				 #" << endl;
	cout << "#############################################" << endl;
	cout << "| 1- Quitter" << endl;		//RISQUES POSSIBLES?
	cout << "| 2- Afficher information d'un joueur" << endl;
	cout << "| 3- Ajouter un joueur" << endl;
	cout << "| 4- Modifier un joueur" << endl;		
	cout << "| 5- Supprimer un joueur" << endl;		//RISQUES POSSIBLES? (Si utilise les index ailleurs)
	//Modifier les stats serait option 4?
	cout << "#############################################" << endl << endl;
}

void Menu::afficherJoueur() 
{
	int index;
	Joueur* leJoueur;

	index = recupJoueurIndex();

	if (index != -1)
	{
		leJoueur = m_BD->getJoueurParPositionVecteur(index);

		cout << "Nom : " << leJoueur->getNomComplet() << endl;
		cout << "Position : " << leJoueur->getPosition() << endl;
		cout << "Parties jouees : " << leJoueur->getPartiJouee() << endl;
		cout << "Nombre de buts : " << leJoueur->getNombreButs() << endl;
		cout << "Assists : " << leJoueur->getAssist() << endl;
		cout << "Points : " << leJoueur->getNombrePoints() << endl;
		cout << "Salaire : " << leJoueur->getSalaire() << endl;
		cout << "Equipe reelle : " << leJoueur->getEquipeReel() << endl;
		cout << "Nationalite : " << leJoueur->getNationalite() << endl;

	}

	return;
}

void Menu::modifierJoueur()
{
	int index;
	index = recupJoueurIndex();
	if (index != -1)
	{

	}
	else 
	{
		cout << "Le joueur n'a pu etre trouve..." << endl;
	}
}

int Menu::recupJoueurIndex() {
	string nomJoueur;
	int index;
	cout << "Quel est le nom complet du joueur? ";
	cin.ignore(1);
	getline(cin, nomJoueur);
	

	index = m_BD->getPositionJoueurParNom(nomJoueur);

	if (index != -1)
	{
		cout << "Joueur trouve!" << endl;
	}
	else {
		cout << "Le joueur n'a pu etre trouve..." << endl;
	}
	return index;
}

Joueur* Menu::creerUnNouveauJoueur()
{
	Joueur* unNouveauJoueur = nullptr;
	string nom, position, equipe, nationalite;
	int partieJouee, nbBut, nbAssists, points;
	float salaire;

	cout << "Quel est du le nom du joueur? ";
	cin.ignore(1);
	getline(cin, nom);

	cout << "Quel est du la position du joueur? ";
	getline(cin, position);

	cout << "Quel est l'equipe reele du joueur? ";
	getline(cin, equipe);

	cout << "Quel est du la nationalite du joueur? ";
	getline(cin, nationalite);

	cout << "Quel est le nombre de parties jouees par le joueur? ";
	cin >> partieJouee;

	cout << "Quel est le nombre de buts marques par le joueur? ";
	cin >> nbBut;

	cout << "Quel est le nombre d'assists du joueur? ";
	cin >> nbAssists;

	cout << "Quel est le nombre de points du joueur? ";	//Retirer cette question, car serait calculé? Faudrait mettre construct alt
	cin >> points;

	cout << "Quel est le salaire du joueur? ";
	cin >> salaire;

	unNouveauJoueur = new Joueur(nom, position, partieJouee, nbAssists, nbAssists, points, salaire, equipe, nationalite);

	return unNouveauJoueur;
}

void Menu::supprimerJoueur() {
	int index;

	index = recupJoueurIndex();
	if (index != -1)
	{
		m_BD->supprimerJoueurParPositionVecteur(index);
		cout << "Joueur supprime..." << endl;
	}
	return;
}

void Menu::ajouterJoueur(Joueur* joueurAAjouter) 
{
	if (joueurAAjouter != nullptr)
	{
		// On ajoute le joueur seulement s'il n'existe pas déjà
		if (m_BD->getPositionJoueurParNom(joueurAAjouter->getNomComplet()) == -1)
		{
			m_BD->ajouterJoueur(joueurAAjouter);
			cout << "Joueur ajoute" << endl;
		}
		else
		{
			cout << "Erreur: Le joueur existe deja." << endl;
			delete joueurAAjouter;
		}
	}
	else
	{
		cout << "Erreur: Le joueur n'a pas été ajoute." << endl;
	}
}