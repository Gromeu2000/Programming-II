#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Grass.h"
#include "Fire.h"
#include "Water.h"

class ElectricPokemon : public Pokemon {

public:
	ElectricPokemon(const char* nameP) : Pokemon(nameP) {
	
		strcpy_s(type, "Electric Type");
	}

	int damageAttack(Pokemon *Pokemon) override {

		int damage = 10;
		if (strcmp(Pokemon->getType(), "Water Type") == 0) { damage *= 2; }
		if (strcmp(Pokemon->getType(), "Grass Type") == 0) { damage *= 0.5; }
		return damage;
	}
};

