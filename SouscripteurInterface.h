#pragma once
#include <string>

class SouscripteurInterface
{
public:
	virtual void miseAJour(std::string message) = 0;
};

