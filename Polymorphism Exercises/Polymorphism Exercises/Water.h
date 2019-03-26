#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Electric.h"
#include "Grass.h"
#include "Fire.h"

class WaterPokemon :public Pokemon {

public:
	WaterPokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Water");
	}

	int damageAttack(Pokemon *pokemon) {

		int damage = 10;

		if (strcmp(pokemon->getType(), "Grass") == 0) {

			damage *= 0.5;
		}
		if (strcmp(pokemon->getType(), "Fire") == 0) {

			damage *= 2;
		}

		return damage;
	}
};