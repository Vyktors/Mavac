#include "BD.h"

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


void BD::ajouterJoueur(string nom, string position, int partieJouer, int nombreBut, int assist, int points, float salaire, string equipeReel, string nationalite)
{
	Joueur* joueur = new Joueur(nom, position, partieJouer, nombreBut, assist, points, salaire, equipeReel, nationalite);

	m_listeJoueur.push_back(joueur);
}

void BD::InitialiserBD()
{
	ajouterJoueur("Nick Suzuki", "Centre", 20, 8, 7, 33, 832500, "Canadiens", "Canadien");
	ajouterJoueur("Jeff Petry", "Defenseur", 15, 4, 3, 18, 600500, "Canadiens", "Americain");
	ajouterJoueur("Falun Sweden", "Defenseur", 35, 4, 3, 40, 600500, "Canadiens", "Americain");
	ajouterJoueur("Adam Boqvist", "Defenseur", 40, 10, 9, 600, 1000000, "Blackhawks de Chicago", "Americain");
	ajouterJoueur("Brandon Hagel", "Ailier gauche", 40, 10, 9, 500, 1000000, "Chicago Blackhawks", "Americain");
	ajouterJoueur("Sidney Crosby", "Ailier gauche", 50, 17, 32, 1312, 2000000, "Penguins de Pittsburgh", "Canadien");
	ajouterJoueur("Andrei Vasilevskiy", "Gardien de but", 30, 1, 3, 1000, 1200000, "Lightning de Tampa Bay", "Russe");
	ajouterJoueur("Connor Hellebuyck", "Gardien de but", 25, 1, 3, 700, 1000000, "Jets de Winnipeg", "Americain");
	ajouterJoueur("Mitch Marner", "Ailier droit", 10, 1, 3, 700, 900000, "Maple Leafs de Toronto", "Canadien");
	ajouterJoueur("Aleksandr Ovetchkine", "Ailier gauche", 35, 20, 10, 1200, 130000, "Capitals de Washington", "Russe");

}
