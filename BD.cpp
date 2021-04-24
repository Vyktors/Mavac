#include "BD.h"

#include <iostream>
using namespace std;


void BD::ajouterUnSouscripteur(SouscripteurInterface* souscripteur)
{
	if (souscripteur != nullptr)
	{
		m_listeSouscripteur.push_back(souscripteur);
	}
}

/// <summary>
/// Retour -1 si le joueur n'existe pas
/// </summary>
/// <param name="nom"></param>
/// <returns></returns>
int BD::getPositionJoueurParNom(std::string nom)
{
	int positionJoueur = -1;
	for (int i = 0; i < m_listeJoueur.size(); i++)
	{
		if (strcmp(m_listeJoueur[i]->getNomComplet().c_str(),nom.c_str()) == 0)
		{
			positionJoueur = i;
			return positionJoueur;
		}
	}
	return positionJoueur;
}

/// <summary>
/// Permet de récupérer un joueur par sa position dans le vecteur
/// </summary>
/// <param name="positionVecteur"></param>
/// <returns></returns>
Joueur* BD::getJoueurParPositionVecteur(int positionJoueur)
{
	Joueur* leJoueur = nullptr;
	if(positionJoueur != -1 && positionJoueur < m_listeJoueur.size())
	{
		leJoueur = m_listeJoueur[positionJoueur];
	}
	return leJoueur;
}


/// <summary>
/// Permet de modifier un joueur existant dans le vecteur.
/// </summary>
/// <param name="nouveauJoueur"> Nouveau pointeur sur le joueur qui a été modifié avant</param>
/// <param name="positionJoueur"></param>
void BD::modifierJoueurParPositionVecteur(Joueur* nouveauJoueur, int positionJoueur)
{
	if (positionJoueur != -1 && positionJoueur < m_listeJoueur.size())
	{
		//delete ici ou delete en dehors de l'appel de fonction, car on a surement fait un new pour créer le nouveau joueur
		//sinon serait une memory leak?
		m_listeJoueur[positionJoueur] = nouveauJoueur;

	}
}


/// <summary>
/// Efface le joueur dans le vecteur m_listeMembre selon la position du joueur dans le vecteur
/// </summary>
/// <param name="positionJoueur"></param>
void BD::supprimerJoueurParPositionVecteur(int positionJoueur)
{
	if (positionJoueur != -1 && positionJoueur < m_listeJoueur.size())
	{
		delete m_listeJoueur[positionJoueur];
		m_listeJoueur.erase(m_listeJoueur.begin() + positionJoueur);
	}
	
}


void BD::ajouterJoueur(Joueur* joueurAAjouter)
{
	m_listeJoueur.push_back(joueurAAjouter);
	notifierLesSouscripteurs("Un joueur a ete ajoute dans la BD");
}

void BD::ajouterJoueurBrut(string nom, string position, int partieJouer, int nombreBut, int assist, int points, float salaire, string equipeReel, string nationalite)
{
	Joueur* nouveauJoueur;
	nouveauJoueur = new Joueur(nom, position, partieJouer, nombreBut, assist, points, salaire, equipeReel, nationalite);
	m_listeJoueur.push_back(nouveauJoueur);
}

void BD::InitialiserBD()
{
	ajouterJoueurBrut("Nick Suzuki", "Centre", 20, 8, 7, 33, 83000, "Canadiens", "Canadien");
	ajouterJoueurBrut("Jeff Petry", "Defenseur", 15, 4, 3, 18, 60300, "Canadiens", "Americain");
	ajouterJoueurBrut("Falun Sweden", "Defenseur", 35, 4, 3, 40, 60050, "Canadiens", "Americain");
	ajouterJoueurBrut("Adam Boqvist", "Defenseur", 40, 10, 9, 600, 100000, "Blackhawks de Chicago", "Americain");
	ajouterJoueurBrut("Brandon Hagel", "Ailier gauche", 40, 10, 9, 500, 50000, "Chicago Blackhawks", "Americain");
	ajouterJoueurBrut("Sidney Crosby", "Ailier gauche", 50, 17, 32, 1312, 200000, "Penguins de Pittsburgh", "Canadien");
	ajouterJoueurBrut("Andrei Vasilevskiy", "Gardien de but", 30, 1, 3, 1000, 120000, "Lightning de Tampa Bay", "Russe");
	ajouterJoueurBrut("Connor Hellebuyck", "Gardien de but", 25, 1, 3, 700, 100000, "Jets de Winnipeg", "Americain");
	ajouterJoueurBrut("Mitch Marner", "Ailier droit", 10, 1, 3, 700, 90000, "Maple Leafs de Toronto", "Canadien");
	ajouterJoueurBrut("Aleksandr Ovetchkine", "Ailier gauche", 35, 20, 10, 1200, 13000, "Capitals de Washington", "Russe");
	notifierLesSouscripteurs("La BD a ete initialise");
}

void BD::notifierLesSouscripteurs(std::string message)
{
	for (int i = 0; i < m_listeSouscripteur.size(); i++)
	{
		m_listeSouscripteur[i]->miseAJour(message);
	}
}
