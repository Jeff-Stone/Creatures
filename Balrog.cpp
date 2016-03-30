#include "stdafx.h"
#include "Balrog.h"
#include <string>
#include <iostream>


Balrog::Balrog(int s, int hp) : Demon(s, hp) {
}

// returns the species name
std::string Balrog::getSpecies() {
	return "Balrog";
}

// returns the damage
int Balrog::getDamage() {
	int damage = Demon::getDamage();

	std::cout << "Balrog speed attack inflicts " << damage << " additional damage points!" << std::endl;

	damage += damage;

	return damage;
}
