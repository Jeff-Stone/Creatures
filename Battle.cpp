// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Creature.h"
#include "Human.h"
#include "Demon.h"
#include "Elf.h"
#include "Balrog.h"
#include "Cyberdemon.h"


void battleArena(Creature &creature1, Creature &creature2) {
	using namespace std;

	// announces the starting stats of each creature
	cout << "\nCreature one: " << creature1.getSpecies() << " with " << creature1.getHitpoints() << " HP and " << creature1.getStrength() << " strength." << endl;
	cout << "Creature two: " << creature2.getSpecies() << " with " << creature2.getHitpoints() << " HP and " << creature2.getStrength() << " strength." << endl;

	// while both creatures have health, keep attacking
	while (creature1.getHitpoints() > 0 && creature2.getHitpoints() > 0) {
		cout << "----------------------ATTACKS----------------------" << endl;

		// sets hitpoints of each creature according to how much damage each creature does
		creature1.setHitpoints(creature1.getHitpoints() - creature2.getDamage());
		creature2.setHitpoints(creature2.getHitpoints() - creature1.getDamage());

		cout << "---------------------------------------------------" << endl;

		//checks if there is a winner
		if (creature1.getHitpoints() <= 0 && creature2.getHitpoints() <= 0) {
			cout << "------------------------TIE------------------------" << endl;
			cout << "\nBoth creatures have lost all their health. It is a tie." << endl;
		} else if (creature1.getHitpoints() <= 0 && creature2.getHitpoints() > 0) {
			cout << "----------------------WINNER-----------------------" << endl;
			cout << "\nCreature 2, " << creature2.getSpecies() << ", has won!" << endl;
		} else if (creature1.getHitpoints() > 0 && creature2.getHitpoints() <= 0) {
			cout << "----------------------WINNER-----------------------" << endl;
			cout << "\nCreature 1, " << creature1.getSpecies() << ", has won!" << endl;
		} else {
			// no winner, prints health status
			cout << "----------------------STATUS-----------------------" << endl;
			cout << "\nCreature 1, " << creature1.getSpecies() << ", has " << creature1.getHitpoints() << " health left." << endl;
			cout << "Creature 2, " << creature2.getSpecies() << ", has " << creature2.getHitpoints() << " health left." << endl;
			cout << "---------------------------------------------------" << endl;
		}
	}

	cout << "\n";
	system("pause");
}

int main()
{
	int choice1 = -1;
	int choice2 = -1;
	bool human = false;
	bool cyberdemon = false;
	bool balrog = false;
	bool elf = false;

	// asks user to choose two creatures
	while (choice1 < 0 || choice1 > 3) {
		std::cout << "0: Human \n1: Cyberdemon \n2: Balrog \n3: Elf" << std::endl << "First creature: ";
		std::cin >> choice1;
		if (choice1 < 0 || choice1 > 3) {
			std::cout << "\nPlease enter a valid number." << std::endl;
		}
	}

	while (choice2 < 0 || choice2 > 3) {
		std::cout << "\n0: Human \n1: Cyberdemon \n2: Balrog \n3: Elf" << std::endl << "Second creature: ";
		std::cin >> choice2;
	}

	// establishes which creatures were chosen
	switch (choice1) {
		case 0: human = true; break;
		case 1: cyberdemon = true; break;
		case 2: balrog = true; break;
		case 3: elf = true; break;
	}
	switch (choice2) {
	case 0: human = true; break;
		case 1: cyberdemon = true; break;
		case 2: balrog = true; break;
		case 3: elf = true; break;
	}
	
	// initializes each creature chosen
	if (human == true && cyberdemon == true) {
		Creature &creature1 = Human(10, 100);
		Creature &creature2 = Cyberdemon(10, 100);
		battleArena(creature1, creature2);
	} else if (human == true && balrog == true) {
		Creature &creature1 = Human(10, 100);
		Creature &creature2 = Balrog(10, 100);
		battleArena(creature1, creature2);
	} else if (human == true && elf == true) {
		Creature &creature1 = Human(10, 100);
		Creature &creature2 = Elf(10, 100);
		battleArena(creature1, creature2);
	} else if (human == true) {
		Creature &creature1 = Human(10, 100);
		Creature &creature2 = Human(10, 100);
		battleArena(creature1, creature2);
	} else if (cyberdemon == true && balrog == true) {
		Creature &creature1 = Cyberdemon(10, 100);
		Creature &creature2 = Balrog(10, 100);
		battleArena(creature1, creature2);
	} else if (cyberdemon == true && elf == true) {
		Creature &creature1 = Cyberdemon(10, 100);
		Creature &creature2 = Elf(10, 100);
		battleArena(creature1, creature2);
	} else if (cyberdemon == true) {
		Creature &creature1 = Cyberdemon(10, 100);
		Creature &creature2 = Cyberdemon(10, 100);
		battleArena(creature1, creature2);
	} else if (balrog == true && elf == true) {
		Creature &creature1 = Balrog(10, 100);
		Creature &creature2 = Elf(10, 100);
		battleArena(creature1, creature2);
	} else if (balrog == true) {
		Creature &creature1 = Balrog(10, 100);
		Creature &creature2 = Balrog(10, 100);
		battleArena(creature1, creature2);
	} else {
		Creature &creature1 = Elf(10, 100);
		Creature &creature2 = Elf(10, 100);
		battleArena(creature1, creature2);
	}

}

