#pragma once
#include "Creature.h"
#include <string>

class Human : public Creature
{
	public:
		Human(int s, int hp);
		int Human::getDamage();

		std::string Human::getSpecies();
};

