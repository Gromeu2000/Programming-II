#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Grass.h"
#include "Fire.h"
#include "Water.h"

class ElectricPokemon :public Pokemon {

public:
	ElectricPokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Electric");
	}

	int damageAttack(Pokemon *pokemon) {

		int damage = 10;

		if (strcmp(pokemon->getType(), "Grass") == 0) {

			damage *= 0.5;
		}
		if (strcmp(pokemon->getType(), "Water") == 0) {

			damage *= 2;
		}

		return damage;
	}
};

