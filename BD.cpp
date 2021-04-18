#include "BD.h"

/// <summary>
/// Retour -1 si le joueur n'existe pas
/// </summary>
/// <param name="nom"></param>
/// <returns></returns>
int BD::getPositionJoueurParNom(std::string nom)
{
	int positionJoueur = -1;
	for (int i = 0; i < m_listeMembres.size(); i++)
	{
		if (strcmp(m_listeMembres[i]->getNomComplet().c_str(),nom.c_str()) == 0)
		{
			positionJoueur = i;
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
	if(positionJoueur != -1 && positionJoueur < m_listeMembres.size())
	{
		leJoueur = m_listeMembres[positionJoueur];
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
	if (positionJoueur != -1 && positionJoueur < m_listeMembres.size())
	{
		m_listeMembres[positionJoueur] = nouveauJoueur;
	}
}


/// <summary>
/// Efface le joueur dans le vecteur m_listeMembre selon la position du joueur dans le vecteur
/// </summary>
/// <param name="positionJoueur"></param>
void BD::supprimerJoueurParPositionVecteur(int positionJoueur)
{
	if (positionJoueur != -1 && positionJoueur < m_listeMembres.size())
	{
		delete m_listeMembres[positionJoueur];
		m_listeMembres.erase(m_listeMembres.begin() + positionJoueur);
	}
	
}
