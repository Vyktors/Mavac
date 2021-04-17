#ifndef MENU_H
#define MENU_H

#include <string>

class Salon;

class Menu
{
private:
	bool isInteger(const std::string& s);
	Salon* m_salon;

public:
	Menu(Salon* salon);
	void afficherMenuPrincipal();
	int demanderUnNombre(int minimum, int maximum);
	void ajouterUnMembre();
};

#endif
