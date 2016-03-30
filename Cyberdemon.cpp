#include "stdafx.h"
#include "Cyberdemon.h"
#include <string>

Cyberdemon::Cyberdemon(int s, int hp) : Demon(s, hp) {
}

// returns the species name
std::string Cyberdemon::getSpecies() {
	return "Cyberdemon";
}

// returns the damage
int Cyberdemon::getDamage() {
	return Demon::getDamage();
}
