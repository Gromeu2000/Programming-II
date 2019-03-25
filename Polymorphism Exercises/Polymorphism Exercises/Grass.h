#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Fire.h"
#include "Water.h"
#include "Electric.h"

class GrassPokemon : public Pokemon{

public:
	GrassPokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Grass Type");
	}

	int damageAttack(Pokemon *Pokemon) override {

		int damage = 10;
		if (strcmp((*Pokemon).getType(), "Water Type") == 0) { damage *= 2; }
		if (strcmp((*Pokemon).getType(), "Fire Type") == 0) { damage *= 0.5; }
		return damage;
	}
};