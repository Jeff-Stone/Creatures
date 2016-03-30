#pragma once
#include "Creature.h"
#include <string>

class Demon : public Creature
{
public:
	Demon(int s, int hp);
	virtual int Demon::getDamage() = 0;

	virtual std::string Demon::getSpecies() = 0;
};

