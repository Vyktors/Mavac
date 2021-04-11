#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>

class Menu
{
private:
	bool isInteger(const std::string& s);
	
public:
	void afficherMenuPrincipal();
	int demanderUnNombre(int minimum, int maximum);
};

#endif
