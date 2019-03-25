#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Water.h"
#include "Electric.h"
#include "Grass.h"

class FirePokemon : public Pokemon{

public:
	FirePokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Fire Type");
	}

	int damageAttack(Pokemon *Pokemon) override {

		int damage = 10;
		if (strcmp((*Pokemon).getType(), "Water Type") == 0) { damage *= 0.5; }
		if (strcmp((*Pokemon).getType(), "Grass Type") == 0) { damage *= 2; }
		return damage;
	}
};