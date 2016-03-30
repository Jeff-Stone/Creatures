#pragma once
#include <string>
class Creature
{
	private:
		int strength;			// How much damage we can inflict
		int hitpoints;			// How much damage we can sustain
	public:
		Creature::Creature();
		Creature(int s, int hp);
		
		// mutators
		void setStrength(int s);
		void setHitpoints(int hp);

		// accessors
		int getStrength();
		int getHitpoints();
		virtual int getDamage() = 0;
		virtual std::string getSpecies() = 0;
};

