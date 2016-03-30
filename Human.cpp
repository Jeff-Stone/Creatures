#include "stdafx.h"
#include "Human.h"
#include <string>

Human::Human(int s, int hp) : Creature(s, hp) {
}

// returns the species name
std::string Human::getSpecies() {
	return "Human";
}

// returns the damage
int Human::getDamage(){
	return Creature::getDamage();
}
