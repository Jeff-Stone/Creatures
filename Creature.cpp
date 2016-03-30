#include "stdafx.h"
#include "Creature.h"
#include "Human.h"
#include <string>
#include <iostream>

Creature::Creature() {
	strength = 10;
	hitpoints = 10;
}

// initializes a creature with strength and hp values
Creature::Creature(int s, int hp) {
	setStrength(s);
	setHitpoints(hp);
}

// allows access to damage value
int Creature::getDamage() {
	int damage = (rand() % strength) + 1;

	std::cout << "\n" << getSpecies() << " attacks for " << damage << " points!" << std::endl;

	return damage;
}

// allows to set hitpoints value
void Creature::setHitpoints(int hp) {
	hitpoints = hp;
}

// allows to set strength value
void Creature::setStrength(int s) {
	strength = s;
}

// returns the strength of creature
int Creature::getStrength() {
	return strength;
}

// returns the hitpoints of creature
int Creature::getHitpoints() {
	return hitpoints;
}

// returns the generic species
std::string Creature::getSpecies() {
	return "Creature";
}