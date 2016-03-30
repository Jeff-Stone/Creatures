#pragma once
#include "Demon.h"
#include <string>

class Cyberdemon : public Demon
{
public:
	Cyberdemon(int s, int hp);
	int Cyberdemon::getDamage();

	std::string Cyberdemon::getSpecies();
};
