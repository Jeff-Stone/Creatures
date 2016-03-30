#pragma once
#include "Creature.h"
#include <string>

class Elf : public Creature
{
public:
	Elf(int s, int hp);
	int Elf::getDamage();

	std::string Elf::getSpecies();
};

