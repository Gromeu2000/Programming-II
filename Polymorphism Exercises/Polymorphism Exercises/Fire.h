#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Water.h"
#include "Electric.h"
#include "Grass.h"

class FirePokemon :public Pokemon {

public:
	FirePokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Fire");
	}

	int damageAttack(Pokemon *pokemon) {

		int damage = 10;

		if (strcmp(pokemon->getType(), "Water") == 0) {

			damage *= 0.5;
		}
		if (strcmp(pokemon->getType(), "Grass") == 0) {

			damage *= 2;
		}

		return damage;
	}
};