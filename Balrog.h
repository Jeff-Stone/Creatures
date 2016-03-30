#pragma once
#include "Demon.h"
#include <string>

class Balrog : public Demon
{
public:
	Balrog(int s, int hp);
	int Balrog::getDamage();
	std::string Balrog::getSpecies();
};
