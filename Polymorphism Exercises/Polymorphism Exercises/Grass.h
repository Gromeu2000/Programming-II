#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Fire.h"
#include "Water.h"
#include "Electric.h"

class GrassPokemon :public Pokemon {

public:
	GrassPokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Grass");
	}

	int damageAttack(Pokemon *pokemon) {

		int damage = 10;

		if (strcmp(pokemon->getType(), "Fire") == 0) {

			damage *= 0.5;
		}
		if (strcmp(pokemon->getType(), "Water") == 0) {

			damage *= 2;
		}

		return damage;
	}
};