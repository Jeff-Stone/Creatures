#include "stdafx.h"
#include "Demon.h"
#include <string>
#include <iostream>

Demon::Demon(int s, int hp) : Creature(s, hp) {
}

// returns the species name
std::string Demon::getSpecies() {
	return "Demon";
}

// returns the damage
int Demon::getDamage() {
	int damage = Creature::getDamage();

	if ((rand() % 100) < 5) {
		damage = damage + 50;
		std::cout << "Demonic attack inflicts 50 additional damage points!" << std::endl;
	}

	return damage;
}
