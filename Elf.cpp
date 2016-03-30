#include "stdafx.h"
#include "Elf.h"
#include <string>
#include <iostream>

Elf::Elf(int s, int hp) : Creature(s, hp) {
}

// returns the species name
std::string Elf::getSpecies() {
	return "Elf";
}

// returns the damage
int Elf::getDamage() {
	int damage = Creature::getDamage();

	if ((rand() % 10) == 0) {
		damage = damage * 2;
		std::cout << "Magical attack inflicts " << damage << " additional damage points!" << std::endl;
	}

	return damage;
}
